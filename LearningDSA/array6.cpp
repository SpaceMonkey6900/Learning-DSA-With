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
int zeroMover(int x[],int y){
    // Two pointer approach + Swapping
    int j = -1;
    for (int i = 0; i < y; i++)
    {
        if (x[i]==0)
        {
            int j = i;
            break;            
        }
    }
    for (int i = j+1; i < y; i++)
    {
        if (x[i]!=0)
        {
            x[j] = x[i];
            x[i]=0;
            j++;
        }
        
    }
    
    arrDisplayer(x,y);
    return 0;
}
int main()
{
    int arr[16] = {1,0,7,0,0,0,2,3,4,5,0,0,3,4,0,7};
    int chars = sizeof(arr)/4;
    zeroMover(arr,chars);
    return 0;
}