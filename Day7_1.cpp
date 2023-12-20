#include <iostream>
using namespace std;

int main(){
    int userInput;
    cout<<"Do you have registraion account??";
    cout<<"\nPress 1 for Sign Up! Press 2 for Sign in :";
    cin>>userInput;
    switch (userInput) {
        case 1:
            cout<< "You'r in Sign up area.";
            break;
        case 2:
            cout<< "You'r in Sign in area.";
            break;
        default:
            cout<< "Your entered number is wrong!! Try Again!!";
            break;
    }
    return 0;
}