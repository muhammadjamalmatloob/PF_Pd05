#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

string taxCalculator(char type, float price);

int main()
{
    char type;
    float price;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of vehicle: $";
    cin >> price;
    cout << taxCalculator(type, price);
    getch();
    return 0;
}

string taxCalculator(char type, float price)
{
    float tax;
    if (type = 'M')
    {
        return "The final price of a vehicle of type M after adding tax is: $" + to_string(price + price*6/100);
    }
    else if (type = 'E')
    {
        return "The final price of a vehicle of type E after adding tax is: $" + to_string(price + price*8/100);
    }
    else if (type = 'S')
    {
        return "The final price of a vehicle of type S after adding tax is: $" + to_string(price + price*10/100);    
    }
    else if (type = 'V')
    {
        return "The final price of a vehicle of type V after adding tax is: $" + to_string(price + price*12/100);   
    }
    else if (type = 'T')
    {
        return "The final price of a vehicle of type T after adding tax is: $" + to_string(price + price*15/100);
    }
    else
    {
        return "Invalid type";
    }
}