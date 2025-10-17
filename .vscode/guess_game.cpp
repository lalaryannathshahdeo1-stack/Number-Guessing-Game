#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int guess, random,count = 0;
    srand(time(NULL));
    cout<<"Welcome to the number guessing game "<<endl;
    random = rand() % 100 +1;
    
    do{
        cout<<"Guess the number between (0 - 100)  ";
        cin>>guess;
        count++;

        if(guess > random)
        cout<<"Think a smaller number "<<endl;
        else if(guess < random)
        cout<<"Think a larger number "<<endl;
        else
        cout<<"The Guess number is correct in "<<count<<" attempts"<<endl;

    }while(guess != random);
    cout<<"programe Terminated"<<endl;
    cout<<"DEVELOPED BY ARYAN "<<endl;
}