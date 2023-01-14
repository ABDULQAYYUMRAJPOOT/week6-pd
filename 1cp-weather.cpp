#include <iostream>
using namespace std;
string activity(string temp, string humidity);


main()
{
    string temp,humidity,result;
    cout<<"Enter temperature warm or dry: ";
    cin>> temp;
    cout<<"Enter humidity dry or humid: ";
    cin>> humidity;
    result = activity(temp,humidity);
    cout<<result;
}

string activity(string temp, string humidity)
{
    string final;
    if(temp == "warm" && humidity == "dry")
    {
        final = "Play tennis";
    }
    else if(temp == "warm" && humidity == "humid")
    {
        final = "swim";
    }
    else if(temp == "cold" && humidity == "dry")
    {
        final = "Play basketball";
    }
    else if(temp == "cold" && humidity == "humid")
    {
        final = "Watch tv";
    }
    return final;
}