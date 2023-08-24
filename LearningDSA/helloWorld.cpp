#include <iostream>
#include<string.h>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Hello world!\nI am Deven!" <<endl;
    //string str;
    // getline(cin, str);
    // cout << str << str.size()<<endl;
    int age;
    cout << "Enter Your Age>> ";
    cin >> age;
    if(age>=18){
        cout << "You are an Adult!";
    } else {
        cout << "You are not an Adult!";
    }
    
    switch(age){
        case 1:
            cout << "You arewers born yesterday";
            break;
        case 18:
            cout << "You are an adult now";
            break;
        case 21:
            cout << "You can drink now!";
            break;
        default:
            cout << "tmkc";
    }

    return 0;
}