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
#include <fstream>
#include <iomanip>//format the output
using namespace std;


const float PERCENT=100;
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    
    ifstream in;
    ofstream out;
    int nGames,wins=0,losses=0;
    int mxThrw=0,numThrw=0,ImGames=100000
    
    in.open("GameInfo.dat")
    in.out ("GameStat.dat")
    while (in>>nGames);//last value    nGames=10000;
    nGames=nGames>ImGames?ImGames:nGames;
    //play the game
    for(int game=1;game<=nGames;game++){
        //throw dice and sum
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
        switch(sum1){
            case 7:
            case 11:wins++;break;
            case 2:
            case 3:
            case 12:losses++;break;
            default:{
                bool thrwAgn=true;
                   do{
                    char die1=rand()%6+1;//[1,6]
                    char die2=rand()%6+1;//[1,6]
                    char sum2=die1+die2;
                    if(sum2==7){
                        losses++;
                    thrwAgn=false;
                    }else if (sum1==sum2){
                            wins++;
                            thrwAgn=false;
                        }
                    }
                   while(thrwAgn);
            }
        }
    }
    out<<"Total number of Games = "<<nGames<<endl;
    out<<"Number of games won   = "<<wins<<endl;
    out<<"Number of games lost  = "<<losses<<endl;
    out<<"total wins and losses = "<<(wins+losses)<<endl;
    out<<"Percentage wins       = "<<
            static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
    out<<"Percentage losses     = "<<
            static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
    out<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    out<<"Average throw per game ="<<static_cast<float>(numThrw)/nGames<<endl;
    in.close();
    out.close();
    return 0;

}
