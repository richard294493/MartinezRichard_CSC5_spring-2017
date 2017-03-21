/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 18, 2017, 4:16 pm 
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int mass,
        weight;
        
            cout<<"enter the mass of the object to get the weight"<<endl;
    cin>>mass;
    
    weight=mass*9.8;
     
    if (mass<10){
        cout<<"the mass is to low "<<endl;}
    if (mass>1000){
        cout<<"the mass is to high "<<endl;}
    
    cout<<"the weight of the mass is "<<weight<<endl;
    
    
        
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

