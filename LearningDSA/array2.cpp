#include<iostream>
using namespace std;

int isSorted(int x, int y[]){
    int flag = 0;
    for (int i = 1; i < x; i++)
    {
        if (y[i-1]<y[i])
        {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
        
    }
    if (flag==1)
    {
        cout<<"The array is sorted!";
    } else {
        cout<<"The array is not sorted!";
    }
    return 0;
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
    isSorted(5, arr);
    return 0;
}