#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int random_number,guess=0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it"<<endl;
    srand(time(0));
    random_number=(rand()%100)+1;

    while(guess!=random_number){
        cout<<"Guess the number"<<endl;
        cin>>guess;

        if(guess>random_number){
            cout<<"Too high! Try Guessing lower "<<endl;
        }
        else if(guess<random_number){
            cout<<"Too low! Try Guessing higher "<<endl;

        }
    }

    cout<<" Congrats!,You have gussed the correct number";
}