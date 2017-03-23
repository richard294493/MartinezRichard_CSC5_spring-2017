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
    char choice;
    
    //show menu and loop
    do{
    
    //in   
    //display menu
       cout<<"Type 0 to exit "<<endl;
       cout<<"Type 1 for sum 1 to n problem "<<endl;
       cout<<"type 2 for sum 0.1 error problem"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       cout<<"type 3 for problem 3"<<endl;
       
       cin>>choice;
        
       switch(choice){
        case '1':{
        int nLoop=10000000;
        float sum=0, frac=0.1f;
        for(int i=1;i<=nLoop;i++){
        sum+=frac;
    
    cout<<"the computed sum of "
            <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<" x "<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"error ="<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
           }
           case '2':{
               int n=100000,sum=0;
    
    for(int i=1;i<n;i++){
        sum+=i;
    }
    cout<<"the sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<" and "<<n<<"*("<<n<<"+1/2="<<n*(n+1)/2<<endl;
           }
           case '3':{
               cout<<"in problem solution 3"<<endl;
               break;
       }
           case '4':{
               cout<<"in problem solution 4"<<endl;
               break;
           }
           case '5':{
               cout<<"in problem solution 5"<<endl;
               break;
               }
           case '6':{
               cout<<"in problem solution 6"<<endl;
               break;
           }
           case '7':{
               cout<<"in problem solution 7"<<endl;
               break;
           }
           case '8':{
               cout<<"in problem solution 8"<<endl;
               break;
           }
           case '9':{
               cout<<"in problem solution 9"<<endl;
               break;
               default:{
                   cout<<"Exit the Program"<<endl;
                   
               }
           }
    }while(choice>='1'&&choice<='9');
       
        
    //Exit
    return 0;
}

