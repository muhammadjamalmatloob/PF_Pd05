#include <iostream>
#include<string>
using namespace std;

string pyramidVolume(float l,float w,float h,string unit);

int main()
{
    float l, w, h;
    string unit;
    cout << "Enter length of pyramid(in meters): ";
    cin >> l;
    cout << "Enter width of pyramid(in meters): ";
    cin >> w;
    cout << "Enter height of pyramid(in meters): ";
    cin >> h;
    cout << "Enter the desired output unit(centimeters,milimetres,kilometers,meters): ";
    cin >> unit;
    cout << "The volume of the pyramid is: " << pyramidVolume(l,w,h,unit);
    return 0;
}

string pyramidVolume(float l,float w,float h,string unit)
{
    if (unit == "centimeters")
    {
        return to_string((100*100*100)*(l*w*h)/3) + " cubic centimeters";
    }
    else if (unit == "milimeters")
    {
        return to_string((1000*1000*1000)*(l*w*h)/3) + " cubic milimeters";
    }
    else if (unit == "kilometers")
    {
        return to_string(((l*w*h)/3)/(1000*1000*1000)) + " cubic kilometers";
    }
    else if (unit == "meters")
    {
        return to_string((l*w*h)/3) + " cubic meters";
    }
    else
    {
        return "invalid unit";
    }
}
