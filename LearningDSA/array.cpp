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

int main()
{
    cout << "Enter an array>>"<<endl;;
    int arr[5];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    cout << "Array Entered>> ";
    arrDisplayer(arr,5);

    // int arr[5] = {1,3,7,5,8};

    int size = sizeof(arr)/4;
    cout << size<<endl;
    int max = arr[0];
    if (size>0)
    {
        for (int i = 1; i < size; i++)
        {
            if (arr[i]>max)
            {
                max = int(arr[i]);
            }
            
        }
        
    }
    cout<<max<<endl;
    return 0;
}