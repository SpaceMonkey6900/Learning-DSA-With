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

int duplicateRemover(int x, int y[]){
    int newArr[x] = {};
    int arrIndex = 0;
    for (int i = 0; i < x; i++)
    {
        int cnt = 0;
        for (int j = i; j < x; j++)
        {
            if (y[i]==y[j])
            {
                cnt++;
            }                        
        }
        int lenNewArr = sizeof(newArr);
        cout<<lenNewArr<<endl;
        if (cnt>1 && newArr[lenNewArr-1]!=y[i])
        {
            newArr[arrIndex] = y[i];
            arrIndex++;
        }         
    }
    cout << "Array with duplicates removed:"<<endl;
    arrDisplayer(newArr,arrIndex+1);
    return 0;
}

int main()
{
    int arr[10] = {1,1,4,6,6,6,9,9,45,67};
    int arrLen = sizeof(arr);
    duplicateRemover(arrLen,arr);
    
    return 0;
}