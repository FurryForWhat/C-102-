#include <iostream>
using namespace std;

int main(){
    int wallet = 1000;
    int num=0;
    int cash= 0;
    cout<<"Press 1 to buy Apple : Price 500.\n";
    cout<<"Press 2 to buy Grape : Price 700.";
    cin>>num;
    if( num == 1) {
       cash= wallet- 500;
       cout<<" Your return cash!"<< cash;
    }else if( num == 2){
        cash= wallet - 700;
        cout<<"Your return cash!" << cash;
    }else {
        cout<<"Invalid number!!!!";
    }
    return 0;
}