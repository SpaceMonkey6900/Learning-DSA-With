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

int arrayRotator(int y[], int z, int x){
    int nArr[z];
    for (int i = 0; i <= z-1; i++)
    {
        nArr[i] = y[i];
    }
    for (int i = z; i < x; i++)
    {
        y[i-z] = y[i];
    }
    for (int i = 0; i < z; i++)
    {
        y[x-z+i] = nArr[i];
    }
        
    arrDisplayer(y,x);
}


int main()
{
    cout << "Enter an array>>"<<endl;
    int arr[5];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    cout << "Rotate array by(?)>> "<<endl;
    int rotateArrBy;
    cin>> rotateArrBy;

    arrayRotator(arr,rotateArrBy,5);
    return 0;
}