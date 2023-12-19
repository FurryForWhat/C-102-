#include <iostream>
using namespace std;

int main(){
    string fName= "Min";
    string lName= "Khant";
    string fullName= fName+ " " + lName; // + string concentnation  
     cout<< fullName[8]<<endl;   // square blacket (index)
     cout<< fullName.length();   // length = special method 

    // string intro= "Hi! I'm David. I came from Somewhere!";
    // cout<< intro;
    // cout<<"total character in intro variable: "<<intro.length();




    string firstNumber= "100";
    string secondNumber= "123";
    string fullNumber = firstNumber + secondNumber;
    // cout<< firstNumber[0];  //finding index 

    // cout<< fName <<" " <<lName;
    return 0;
}