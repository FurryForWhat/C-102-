#include <iostream>
using namespace std;

int main(){
    string a= "Hello!, I'm Henery";
    string b= "Hello!, I'm Johnry";
    if ( b.length() > a.length() )
    {
       cout<<"b is greater than a"; 
    }else if ( a.length() == b.length()){
        cout<<"a is equal to b";
    }
    else{
        cout<<"a is greater than b";
    }
    
    return 0;
}