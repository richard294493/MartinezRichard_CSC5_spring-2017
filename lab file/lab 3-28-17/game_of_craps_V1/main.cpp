/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 28th, 2017, 11:43 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream> //
#include <ctime>
#include <cstdlib> //strand to set the seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    
    int nGames,wins=0,losses=0;
    
    nGames=10000;
    
    //play the game
    for(int game=1;game<=nGames;game++){
        //throw dice and sum
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
        if (sum1==7||sum1==11)wins++;
        else if(sum1==2||sum1==3||sum1==12)losses;
        else {
            
            bool thrwAgn=true;
            do{
             char die1=rand()%6+1;//[1,6]
             char die2=rand()%6+1;//[1,6]
             char sum2=die1+die2;
             if(sum2==7){
                 losses++;
             thrwAgn=false;
             }
                 else if (sum1==sum2){
                     wins++;
                     thrwAgn=false;
                 }
             }
            while(thrwAgn);
        }
    }
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"total wins and losses = "<<(wins+losses)<<endl;
    return 0;
}

