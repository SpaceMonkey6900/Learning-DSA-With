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
int linearSearch(int x[],int y, int z){
    int i = 0;
    for (int i = 0; i < z; i++)
    {
        if (x[i]==y)
        {
            return i;   
        }
        return -1;        
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    arrDisplayer(arr,10);

    cout<<"Enter Number to be searched>> ";
    int findMe;
    cin>>findMe;
    int lenArr = sizeof(arr)/4;

    cout<<"Found the number at index: "<<linearSearch(arr,findMe, lenArr)<<endl;
    
    return 0;
}