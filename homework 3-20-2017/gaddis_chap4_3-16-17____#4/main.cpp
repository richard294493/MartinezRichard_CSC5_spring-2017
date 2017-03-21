/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19, 2017, 3:57pm 
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
    int length1,
        width1,
        length2,
        width2,
        area1,
        area2;     
    cout<<"what is the length of the first rentangle "<<endl;
    cin>>length1;
    cout<<"what is the width of the first rentangle"<<endl;
    cin>>width1;
    cout<<"what is the length of the second retangle "<<endl;
    cin>>length2;
    cout<<"what is the width of the second retangle "<<endl;
    cin>> width2;
    
    area1=length1*width1;
    area2=length2*width2;
    
    if (area1<area2)
                   cout<<"the second retangle has the bigger area. "<<endl;
    if (area1>area2)
        cout<<"the first retangle has the bigger area."<<endl;
    
        
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

