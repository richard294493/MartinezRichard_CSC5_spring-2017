/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19, 2017, 3:15pm 
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int x;
    
    cout<<"type a number between 1-10 to get the roman numeral. "<<endl;
    cin>>x;
    
    switch(x)
    {
        case 1: 
            cout<<"I"<<endl;
            break;
        case 2:
            cout<<"II"<<endl;
            break;
        case 3:
            cout<<"III"<<endl;
            break;
        case 4:
            cout<<"IV"<<endl;
            break;
        case 5:
            cout<<"V"<<endl;
            break;
        case 6:
            cout<<"VI"<<endl;
            break;
        case 7:
            cout<<"VII"<<endl;
            break;
        case 8:
            cout<<"VIII"<<endl;
            break;
        case 9:
            cout<<"IX"<<endl;
            break;
        case 10:
            cout<<"X"<<endl;
            break;
        default:
            cout<<"invalid number "<<endl;
                    
    }
                        
       
                         
    
        
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

