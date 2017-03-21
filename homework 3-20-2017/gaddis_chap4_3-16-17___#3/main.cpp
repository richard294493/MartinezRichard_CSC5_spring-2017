/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19, 2017, 3:36pm 
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
    unsigned short M, // amount of months
                   D, // amount of days
                   Y; // amount of years
    cout<<"enter a month in numeric form. "<<endl;
    cin>>M;
    cout<<"enter a day in numeric form."<<endl;
    cin>>D;
    cout<<"enter a two digit year."<<endl;
    cin>>Y;
    
if (M*D==Y){
    cout<<"you have a magic year!"<<endl;
           }
if (M*D>Y){
    cout<<"you do not have a magic year!"<<endl;
           }
if (M*D<Y){
    cout<<"you do not have a magic year!"<<endl;
    }           
       
                         
    
        
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

