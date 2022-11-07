#include<bits/stdc++.h>
using namespace std;

///if given array is sorted.So,you don't wanna it unsorted,then you can apply this technique
///this technique time complexity is O(n)

void printArray(int arr[],int sz)
{
    for(int i=0; i<sz; i++)
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
    for(int i=0; i<sz; i++)
    {
        cin>>arr[i];///taking input
    }

    int pos,value;
    cout<<"position of the insertion : ";
    cin>>pos;
    cout<<"value of the insertion : ";
    cin>>value;

    if(pos<0 || pos>sz)
    {
        cout<<"you entered a invalid index"<<endl;
    }
    else
    {
        ///start : sz-1 -----> end : pos
        for(int i=sz-1; i>=pos; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos] = value;
    }

    cout<<"Array After Insetion : ";
    printArray(arr,sz+1);///function calling
    return 0;
}

