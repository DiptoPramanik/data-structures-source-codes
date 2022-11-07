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

    int pos;
    cout<<"Position of the Deletion : ";
    cin>>pos;

    if(pos<0 || pos>sz-1)
    {
        cout<<"Invalid Index"<<endl;
    }
    else
    {
        ///last position element deletion
        if(pos==sz-1)
        {
            sz--;
        }
        ///start or mid(without last position deletion) element deletion
        else
        {
            for(int i=pos+1; i<sz;i++)
            {
                arr[i-1]=arr[i];
            }
            sz--;
        }
    }
    cout<<"Array After Deletion : ";
    printArray(arr,sz);///function calling
    return 0;
}

