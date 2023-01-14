#include <iostream>
using namespace std;
float bill(string time,string type, float minutes);

main()
{
    string time,type;
    float minutes, fare;
    cout<<"Enter time of call D for day and N for night: ";
    cin>> time;
    cout<<"Enter type of call p or P for premium and r or R for regular: ";
    cin>> type;
    cout<<"Enter minutes of call: ";
    cin>> minutes;
    if(type == "p"|| type == "P"||type == "r"||type == "R")
    {
        fare = bill(time,type,minutes);
        cout<<"Your fare is: "<<fare<< "$";
        
    }
    else
    {
        cout<<"Error type";
    }
    

}



float bill(string time,string type, float minutes)
{
    float final, extraMin;
    if ((type == "r" || type == "R"))
    {
        if ( minutes <= 50)
        {   
            final = 10.00;        
        }
        else if (minutes>50)
        {
        extraMin = (minutes) - 50;
        final = 10.00 + (extraMin * 0.20);
        }
    }
    


    if((type == "p"|| type == "P"))
    {

        
        if ( minutes<=75 && time == "D")
        {
            final = 25.00;
        }
        else if (minutes>75 && time == "D")
        {
            extraMin = minutes - 75;
            final = 25.00 + (extraMin * 0.10);
        }
        else if (minutes>100 && time == "N")
        {
            extraMin = minutes - 100;
            final = 25.00 + (extraMin * 0.50);
        }
        else if (minutes<=100 && time == "N")
        {
            final = 25.00;
        }
    }
    return final;
}