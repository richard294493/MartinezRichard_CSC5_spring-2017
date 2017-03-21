/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on march 14, 2017, 11:31 AM
 * Purpose: Time calculator converter 
 */

//System Libraries Here
#include <iostream>
using namespace std;
const int    MINUTE=60;     // how many seconds in a minute 
const int    HOUR=60*MINUTE;// how many seconds in a hour
const int    DAY=24*HOUR;   // how many seconds in a day
const int    WEEK=7*DAY;    // how many seconds in a week
const int    YEAR=52*WEEK;  // how many seconds in a year 
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nSecs; // Number of seconds to convert
    int nYrs,nMnths,nWks,nDys,nHrs,nMin;
    //Input or initialize values Here
    cout<<"This program converts seconds to years/months/weeks/days/hour"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    //Map inputs to outputs or process data
    
    nYrs=nSecs/YEAR;
    cout<<nYrs<<" Years(";
    nSecs-=nYrs*YEAR;
    
    nWks=nSecs/WEEK;
    cout<<nWks<<" Weeks or ";
    nMnths=nWks*13/3;
    cout<<nMnths<<" Months)";
    nSecs-=nWks*WEEK;
    
    nDys=nSecs/DAY;
    cout<<nDys<<" Days ";
    nSecs-=nMin*MINUTE;
    
    nHrs=nSecs/HOUR;
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;
    
    nMin=nSecs/MINUTE;
    cout<<nMin<<" Minutes ";
    
    nSecs-=nMin*MINUTE;
    cout<<nSecs<<" Seconds";
    //Output Located Here
    

    //Exit
    return 0;
}

