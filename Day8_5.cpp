#include <iostream>
using namespace std;

void Country(string name = "Myanmar"){  //default parameter
    cout<< name<<endl;
}

int main(){
    Country("Norway");
    Country("USA");
    Country("Singapore");
    Country();
    Country("England");
    return 0;
}