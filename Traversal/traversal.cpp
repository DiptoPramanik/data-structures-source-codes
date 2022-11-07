#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[50];
    int sz;
    cin>>sz;
    for(int i=0;i<sz;i++)
    {
        cin>>arr[i];///taking input
    }

    cout<<"Given Array : ";
    printArray(arr,sz);///function calling
    return 0;
}
