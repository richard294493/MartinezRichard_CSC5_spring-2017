/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 18, 2017, 1:45pm 
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <cmath>

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversion
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int quarters=25,dimes=10,nickels=5,pennys=1; //worth of each coin
    
    int number1;//number of quarters
    int number2;//number of dimes
    int number3;//number of nickels
    int number4;//number of pennys
    
    int totalQ;
    int totalD;
    int totalN;
    int totalP;
    int maxAmnt;
    
    
    cout<<"enter a number for each coin to get exactly a dollar to win!"<<endl;
    cout<<"number of quarters: "<<endl;
    cin>>number1;
    cout<<"number of dimes: "<<endl;
    cin>>number2;
    cout<<"number of nickels: "<<endl;
    cin>>number3;
    cout<<"number of pennys: "<<endl;
    cin>>number4;
    
    totalQ=number1*quarters;
    totalD=number2*dimes;
    totalN=number3*nickels;
    totalP=number4*pennys;
    maxAmnt=totalQ+totalD+totalN+totalP;
    if (maxAmnt==100)
        {cout<<"congrats you won the game"<<endl;}
    else 
        {cout<<"you have lost the game"<<endl;}
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

