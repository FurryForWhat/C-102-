#include <iostream>
using namespace std;

int main(){
    // int firstNum, int secondNum, int userInput
    int firstNum;
    int secondNum;
    cout<<"Enter First Number: ";
    cin>> firstNum;
    cout<< "Enter Second Number: ";
    cin >> secondNum;
    int userInput;
    cout<<"Press 1 to add. Press 2 to Subtract. Press 3 to Multiple. Press 4 to Divison. Press 5 to Modulus.";
    cin>> userInput;
    int result= 0;
    switch (userInput){
        case 1:
             result= firstNum + secondNum;
            cout<< "Answer :" << result;
            break;
        
        case 2:
             result = firstNum -secondNum;
            cout<<"Answer :" <<result;
            break;
    
        case 3:
             result= firstNum * secondNum;
            cout<< "Answer :" << result;
            break;

        case 4:
             result= firstNum / secondNum;
            cout<< "Answer :" << result;
            break;
        
        case 5:
             result= firstNum % secondNum;
            cout<< "Answer :" << result;
            break;
        
        default:
            cout<< "Your number is wrong! Try again";
            break;
    }
    return 0;
}