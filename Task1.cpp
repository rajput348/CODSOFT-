//Guess my number game...
#include<iostream>
//#include<stdio.h>
using namespace std;

int main(){
    int num;
    int guess;
    int trial=0;
    cout<<" Guess my number game...\n";
    cin>>num;
    do{
        cout<<"Guess a number between 1 to 100 :";
        cin>>guess;
        trial++;

        if(guess > num ){
            cout<<"The "<<guess<<" is too high ...\n";
        }
        else if(guess < num){
            cout<<"The "<<guess<<" is too low ...\n";
        }
        else{
            cout<<"Congrats! you guess the number " <<guess<< " correctly " <<" in "<< trial <<" trials !\n"<<endl;
        }
            
        }while(guess != num);

        return 0;
}
    


