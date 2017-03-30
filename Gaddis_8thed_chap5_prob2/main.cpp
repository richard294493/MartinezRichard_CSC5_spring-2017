/* 
 * File:   main.cpp
 * Author: Richard Martinez 
 * Created on March 30, 2017, 10:32 AM
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
    for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
     

    //Exit
    return 0;
}

