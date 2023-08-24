#include<bits/stdc++.h>
using namespace std;

int main(void){
    cout << "Enter a character>> ";
    char c;
    cin >> c;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j<=i; j++){
            cout << c;
        }
        cout << "\n";
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=i; j++){
            cout << j;
        }
        cout << "\n";
    }

    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j<=i; j++){
            cout << j;
        }
        cout << "\n";
    }
return 0;
}