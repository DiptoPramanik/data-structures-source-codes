#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sort : ";
    printArray(arr,n);
    cout<<endl;

    ///bubble sort implementation
    for(int i=1;i<n;i++)
    {
        int flag=0;///solving the redundant testing in iteration
        cout<<"Iteration : "<<i<<endl;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1]) ///Ascending order
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
            printArray(arr,n);///only for code simulation
        }
        cout<<endl;
        if(flag == 0)
        {
            break;
        }
    }
     cout<<"Before Sort : ";
    printArray(arr,n);
    cout<<endl;

}
