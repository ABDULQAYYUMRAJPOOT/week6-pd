#include <iostream>
using namespace std;
float rentApart(float day, string month);
float rentStuido(float day, string month);


main()
{
    string month;
    float day,studio,apart;
    cout<<"Enter month May,June,July,August,September or October: ";
    cin>>month;
    cout<<"Enter the days you stay: ";
    cin>>day;
    studio = rentStuido(day , month);
    apart = rentApart(day, month);
    cout<<"Apartment: "<< apart<<"$"<<endl;
    cout<<"Studio: "<<studio <<"$";
}



float rentStuido(float day, string month)
{
    float Sfinal, rent;
    if(month == "May" || month == "October")
    {
        Sfinal = 50 * day;
    }
    else if(month == "June" || month == "September")
    {
        Sfinal = 75.20 * day;
    }
    else if(month == "July" || month == "August")
    {
        Sfinal = 76 * day;
    }





    if((day>7 && day <=14) && (month == "May" || month == "October"));
    {
        rent = Sfinal - (Sfinal * 5/100);
    }
    if(day > 14 && (month == "May" || month == "October"))
    {
        rent = Sfinal - (Sfinal * 30/100);
    }

    if((month == "June" || month == "September") && day >14)
    {
        rent = Sfinal - (Sfinal * 20/100);
    }
    if((month == "June" || month == "September") && day <=14)
    {
        rent = Sfinal;
    }
    if(month == "July" || month == "August")
    {
        rent = Sfinal;
    }




    if(day<=7)
    {
        return Sfinal;
    }
    else{
        return rent;
    }
    
     
}

float rentApart(float day, string month)
{
    float Afinal, rent;
    if(month == "May" || month == "October")
    {
        Afinal = 65 * day;
    }
    else if(month == "June" || month == "September")
    {
        Afinal = 68.70 * day;
    }
    else if(month == "July" || month == "August")
    {
        Afinal = 77 * day;
    }

    if(day > 14)
    {
        rent = Afinal - (Afinal * 10/100);
        return rent;
    }
    if(day <= 14) 
    {
        return Afinal;
    }
    
}