#include <iostream>
using namespace std;

int summation (int a , int b){
    return a+b;
}

int subtract ( int a, int b) {
    return a-b;
}

int main(){
    int a= 10;
    int b= 30;
    int answer = summation(a,b);
    int answerTwo= subtract (a, b);
    cout<< answerTwo;
    return 0;
}