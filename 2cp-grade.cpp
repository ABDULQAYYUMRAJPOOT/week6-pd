#include <iostream>
using namespace std;
string grade(float eng,float math, float chem,float ss, float bio);
float percentage(float eng,float math, float chem,float ss, float bio);
float totalnumber(float eng,float math, float chem,float ss, float bio);


main()
{
    string name, rGrade;
    float rNumber,rprcnt;
    float eng,math,chem,ss,bio;
    cout<<"Enter your name: ";
    cin>> name;
    cout<<"Enter English no. ";
    cin>> eng;
    cout<<"Enter Math no. ";
    cin>> math;
    cout<<"Enter Chemistry no. ";
    cin>> chem;
    cout<<"Enter Social Science no. ";
    cin>> ss;
    cout<<"Enter Biology no. ";
    cin>> bio;
    rNumber = totalnumber(eng,math,chem,ss,bio);
    rprcnt = percentage(eng,math,chem,ss,bio);
    rGrade = grade(eng,math,chem,ss,bio);
    cout<< name <<" your total number are " <<rNumber<<" Your percentage is "<<rprcnt<<" and your grade is "<< rGrade <<".";

}
float totalnumber(float eng,float math, float chem,float ss, float bio)
{
    float totalNo;
    totalNo = eng + math + chem + ss + bio;
    return totalNo;

}
float percentage(float eng,float math, float chem,float ss, float bio)
{
    float totalNo, prcnt;
    totalNo = eng + math + chem + ss + bio;
    prcnt = (totalNo * 100)/500;
    return prcnt;
}
string grade(float eng,float math, float chem,float ss, float bio)
{
    
    string grad;
    float prcnt;
    prcnt = percentage(eng,math,chem,ss,bio);
    
    if(prcnt>90 && prcnt<=100)
    {
        grad = "A+";
    }
    else if(prcnt>80 && prcnt<=90)
    {
        grad = "A";
    }
    else if(prcnt>70 && prcnt<=80)
    {
        grad = "B+";
    }
    else if(prcnt>60 && prcnt<=70)
    {
        grad = "B";
    }
    else if(prcnt>50 && prcnt<=60)
    {
        grad = "C";
    }
    else if(prcnt>=40 && prcnt<=50)
    {
        grad = "D";
    }
    else if(prcnt<40)
    {
        grad = "F";
    }
    return grad;

}