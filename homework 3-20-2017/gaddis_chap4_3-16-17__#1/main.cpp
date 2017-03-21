/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19, 2017, 2:45pm 
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
using namespace std;
//User Libraries Here
bool opt1,opt2;
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    int  opt1,opt2; 
    cout<<"enter 2 numbers "<<endl;
    cin>>opt1>>opt2;
    if (opt1 > opt2 )
    {
    cout<<opt1<<" is the bigger than "<<opt2<<endl;
    }
    else if   ( opt1 < opt2 )   {  
          cout<<opt2<<" is the bigger than "<<opt1<<endl;
        }
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

