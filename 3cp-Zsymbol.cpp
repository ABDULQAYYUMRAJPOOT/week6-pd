#include <iostream>
using namespace std;
string Zsymbol(string month, float day);

main()
{
    string month, result;
    float day;
    cout<<"Enter month of birth: ";
    cin>> month;
    cout<<"Enter day of birth: ";
    cin>> day;
    result = Zsymbol(month,day);
    cout<<"Your Zodiac Sign is: "<< result;


}

string Zsymbol(string month, float day)
{
    string symbol;
    if ((month == "March" && day>=21) || (month == "April"&& day <= 19))
    {
        symbol = "Aries";
    }
    else if ((month == "April" && day>=20) || (month == "May"&& day <= 20))
    {
        symbol = "Taurus";
    }
    else if ((month == "May" && day>=21) || (month == "June"&& day <= 20))
    {
        symbol = "Gemini";
    }
    else if ((month == "June" && day>=21) || (month == "July"&& day <= 22))
    {
        symbol = "Cancer";
    }
    else if ((month == "July" && day>=23) || (month == "August"&& day <= 22))
    {
        symbol = "Leo";
    }
    else if ((month == "August" && day>=23) || (month == "September"&& day <= 22))
    {
        symbol = "Virgo";
    }
    else if ((month == "September" && day>=23) || (month == "October"&& day <= 22))
    {
        symbol = "Libra";
    }
    else if ((month == "October" && day>=23) || (month == "November"&& day <= 21))
    {
        symbol = "Scorpio";
    }
    else if ((month == "November" && day>=22) || (month == "December"&& day <= 21))
    {
        symbol = "Sagittarius";
    }
    else if ((month == "December" && day>=22) || (month == "January"&& day <= 19))
    {
        symbol = "Capricon";
    }
    else if ((month == "January" && day>=20) || (month == "February"&& day <= 18))
    {
        symbol = "Aquarius";
    }
    else if ((month == "February" && day>=19) || (month == "March"&& day <= 20))
    {
        symbol = "Pisces";
    }
    return symbol;
}