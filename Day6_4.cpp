#include <iostream>
using namespace std;

int main(){
    string a;
    string b;
    cout<<"Enter First Number :";
    cin>> a;
    cout<<"Enter Second Number :";
    cin>> b;
    int lengthOfA= a.length();
    int lengthOfB= b.length();

    if( lengthOfA > lengthOfB){
        cout<<"A is greater than B";
    }else if( lengthOfA == lengthOfB){
        cout<<"A is Equal to B";
    }else{
        cout<<"B is greater than A";
    }
    return 0;
}