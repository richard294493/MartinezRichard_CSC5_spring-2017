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
       cout<<"type 4 for problem 4"<<endl;
       cout<<"type 5 for problem 5"<<endl;
       cout<<"type 6 for problem 6"<<endl;
       cout<<"type 7 for problem 7"<<endl;
       cout<<"type 8 for problem 8"<<endl;
       cout<<"type 9 for problem 9"<<endl;
       
       cin>>choice;
        
       switch(choice){
        case '1':{
            cout<<"in problem solution 1"<<endl;
            break;
           }
        case '2':{
            int nLoop=10000000;
                float sum=0.0f,frac=0.1f;

                //Input values
                for(int i=1;i<=nLoop;i++){
                    sum+=frac;
                }

                //Output Located
                
                cout<<"The computed sum of "
                        <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
                cout<<"Simple multiplication of "
                        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<"%"<<endl;
                break;
           
           }
        case '3':{
            cout<<"ocean levels "<<endl;
            
               break;
           }
        case '4':{
              //Declare all Variables Here
        for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
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
           }
        default:{
               cout<<"Exit the Program"<<endl;
               break;
               }
           }
    }while (choice>='1'&&choice<='9');
            
    //Exit
    return 0;
}
