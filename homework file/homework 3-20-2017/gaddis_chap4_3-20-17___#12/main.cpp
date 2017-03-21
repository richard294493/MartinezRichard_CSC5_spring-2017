/* 
 * File:   main.cpp
 * Author: Richard Martinez
 * Created on March 18, 2017, 1:45pm 
 * Purpose:  
 */

//System Libraries Here
#include <iostream>

using namespace std;

//Global Constants
const float PERCENT=100;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    float ttlPerc, discount,ttlCost,disPric;
    int softWar=99, nUnits,cstWoT;
    //Input data
    cout<<"This program calculates the total cost for the purchase"
            " of software that costs $99"<<endl;
    cout<<"How many units are you buying?"<<endl;
    cin>>nUnits;
    if (nUnits<0)
    {   cout<<"Invalid number."<<endl;
        return 1;}

    if (nUnits<10)
    {   discount= 100;}
    else if (nUnits<=19 && nUnits>9)
    {   discount= 20;}
    else if (nUnits<=49 && nUnits>19)
    {   discount= 30;}
    else if (nUnits<=99 && nUnits>49)
    {   discount= 40;}
    else if (nUnits>=100)
    {   discount= 50;}
    cstWoT=nUnits*softWar;
    ttlCost=softWar*(nUnits*(discount/PERCENT));
    disPric=cstWoT-ttlCost;
    //Map inputs to outputs or process the data
    cout<<"Total cost (without tax) = $"<<disPric<<endl;
    //Exit stage!
    return 0;
}

