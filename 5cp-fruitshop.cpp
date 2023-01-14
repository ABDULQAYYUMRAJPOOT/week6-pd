#include <iostream>
using namespace std;
float bill(float quantity, string fruit, string day);

main()
{
    string fruit,day;
    float quantity, result;
    cout<<"Enter the fruit you bought: ";
    cin>> fruit;
    cout<<"Enter the day: ";
    cin>> day;
    cout<<"Enter quantity of fruits: ";
    cin>> quantity;
    if(fruit=="banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes")
    {
        result = bill(quantity,fruit,day);
    }
    if(day == "sunday" || day == "monday" ||day == "tuesday" ||day == "wednesday" ||day == "thursday" ||day == "friday" ||day == "saturday")
    {
        result = bill(quantity,fruit,day);
        cout<<"Your bill is: "<< result;
    }
    else{
        cout<<"Error";
    }
    

}



float bill(float quantity, string fruit, string day)
{
    float final;
    if (day == "sunday" || day == "saturday")
    {
        if (fruit == "banana")
        {
            final = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            final = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            final = 0.90 * quantity;
        }
        else if (fruit == "grapefuit")
        {
            final = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            final = 3.00 * quantity;
        }
        else if (fruit == "pineapple")
        {
            final = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            final = 4.20 * quantity;
        }
    }
    else 
    {
        if (fruit == "banana")
        {
            final = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            final = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            final = 0.85 * quantity;
        }
        else if (fruit == "grapefuit")
        {
            final = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            final = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            final = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            final = 3.85 * quantity;
        }
    }
    return final;
}