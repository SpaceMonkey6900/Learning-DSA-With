#include<iostream>
using namespace std;

int arrDisplayer(int x[],int y){
    cout<<"[";
    for (int i = 0; i < y-1; i++)
    {
        cout<<x[i]<<",";
    }
    cout<<x[y-1];
    cout<<"]\n\n";
    return 0;
}

int arrayRotator(int x, int y[]){
    int holder = y[0];
    for (int i = 1; i < x; i++)
    {
        y[i-1]=y[i];
    }
    y[x-1] = holder;
    arrDisplayer(y,x);
}


int main()
{
    cout << "Enter an array>>"<<endl;;
    int arr[5];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    arrayRotator(5, arr);
    return 0;
}