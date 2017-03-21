/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 18, 2017, 1:45pm 
 * Purpose:  
 */

//System Libraries Here
#include <iostream>

using namespace std;

//Global Constants


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    float books, points;
    cout<<"to find out how many points you have earned, "<<endl;
    cout<<"enter the amount of books you have purchased."<<endl;
    cin>>books;
    
    
    if (books==0){
        
        cout<<"earned 0 points "<<endl;
        }
    if (books==1){
        cout<<"earned 5 points "<<endl;
    }
    if (books==2){
        cout<<"earned 15 points "<<endl;
    }
    if (books==3){
        cout<<"earned 30 points "<<endl;
        
    }
    if (books>3){
        cout<<"earned 60 points "<<endl;
    }
    return 0;
}

