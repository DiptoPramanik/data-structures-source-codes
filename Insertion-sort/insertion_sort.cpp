#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
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
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting : ";
    printArray(arr,n);
    cout<<endl;

    ///insertion sort
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        cout<<endl<<"i->"<<i<<" Key : "<<key<<endl;///only for the code simulation
        int j=i-1;
        while(arr[j]>key && j>=0)///Ascending order
        {
            arr[j+1]=arr[j];
            printArray(arr,n);///only for the code simulation
            j--;
        }
        arr[j+1]=key;
        printArray(arr,n);///only for the code simulation
    }

    cout<<"Before Sorting : ";
    printArray(arr,n);
    cout<<endl;

    return 0;
}
