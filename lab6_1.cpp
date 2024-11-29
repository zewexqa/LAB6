#include<iostream>
using namespace std;

int main(){
    int key;
    int even=0;
    int odd=0;
    cout << "Enter an integer: ";
    cin >> key;
    while(key!=0){
    if(key%2 == 0){
        even++;
    }
    else{
        odd++;
    }
    cout << "Enter an integer: ";
    cin >> key;
    }
    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = "<< odd << endl;
    return 0;

}