/* 
 * File:   main.cpp
 * Author: richard martinez 
 * Created on march 23, 2017, 11:27 AM
 * Purpose: sum one to n 
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
    int n=100000,sum=0;
    //Input or initialize values Here
    for(int i=1;i<n;i++){
        sum+=i;
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"the sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<" and "<<n<<"*("<<n<<"+1/2="<<n*(n+1)/2<<endl;

    //Exit
    return 0;
}

