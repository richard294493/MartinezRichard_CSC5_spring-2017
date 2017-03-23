/* 
 * File:   main.cpp
 * Author: Richard Martinez 
 * Created on march 23, 2017, 11:27 AM
 * Purpose: brute force sum compared to multipulcation 
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
    int nLoop=10000000;
    float sum=0, frac=0.1f;
    for(int i=1;i<=nLoop;i++){
        sum+=frac;
    }
    cout<<"the computed sum of "
            <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<" x "<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"error ="<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
    //Exit
    return 0;
}

