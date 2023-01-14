#include <iostream>
using namespace std;
int lateEarlyHour(int exhour, int exmin, int shour, int smin);
int lateEarlyMins(int exhour, int exmin, int shour, int smin);
void result(int exhour, int exmin, int shour, int smin);
main()
{
    int exhour,exmin,shour,smin;
    cout<<"Enter exam starts hour: ";
    cin>> exhour;
    cout<<"Enter exam starts minutes:";
    cin>> exmin;
    cout<<"Enter arrival hour: ";
    cin>> shour;
    cout<<"Enter arrival minutes: ";
    cin>> smin;

    result(exhour,exmin,shour,smin);
}


int lateEarlyHour(int exhour, int exmin, int shour, int smin)
{
    int hours;
    if(exhour> shour && smin >exmin)
    {
        hours = 0;
    }
    else if(shour>exhour)
    {
        hours= shour-exhour;
    }
    else if(exhour> shour)
    {
        hours = exhour - shour;
    }
    else if (exhour == shour)
    {
        hours = 0;
    }
    
    return hours;
}


int lateEarlyMins(int exhour, int exmin, int shour, int smin)
{
    int minutes;
    if(exhour> shour && smin >exmin)
    {
        minutes = 60 - smin;
    }
    else if( exmin > smin)
    {
        minutes = exmin - smin;
    }
    else if(smin == exmin)
    {
        minutes = 0;
    }
    else if (smin>exmin)
    {
        minutes = smin - exmin;
    }
    return minutes;
}




void result(int exhour, int exmin, int shour, int smin)
{
    int f1,f2;
    f1 = lateEarlyHour(exhour,exmin,shour,smin);
    f2 = lateEarlyMins(exhour,exmin,shour,smin);
    if(exhour == shour && exmin<smin)
    {
        cout<<"Late"<<endl <<f2 <<" minutes after the start.";
    }
    else if(exhour > shour && exmin == smin)
    {
        cout<<"Early"<<endl <<f1 <<":"<<f2 <<" hours before the start.";
    }
    else if(exhour > shour && exmin < smin)
    {
        cout<<"One time"<<endl <<f2 <<" minutes before the start.";
    }
    else if(exhour < shour && exmin < smin)
    {
        cout<<"Late"<<endl <<f1 <<":"<<f2 <<" hours after the start.";
    }
    else if(exhour > shour && exmin > smin)
    {
        cout<<"Early"<<endl <<f1 <<":"<<f2 <<" hours before the start.";
    }
    else if(exhour == shour && exmin == smin)
    {
        cout<<"On time.";
    }
}
