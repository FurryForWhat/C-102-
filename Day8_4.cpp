#include <iostream>
using namespace std;

int forApple(int total, int return_money){
    return_money = total -500;
    return return_money;
}

int forGrape(int total, int return_money){
    return_money = total - 700;
    return return_money;
}

int main(){
    int wallet = 1000;
    int num=0;
    int cash= 0;
    cout<<"Press 1 to buy Apple : Price 500.\n";
    cout<<"Press 2 to buy Grape : Price 700.";
    cin>>num;
    if ( num == 1){
        cash = forApple(wallet, cash);
        cout<<"Your return money :"<< cash;
    }else if ( num == 2){
        cash = forGrape(wallet, cash);
        cout<<"Your return money :"<< cash;
    }else{
        cout<<"Wrong Input";
    }
    return 0;
}