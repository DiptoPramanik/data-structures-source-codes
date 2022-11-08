#include<bits/stdc++.h>
using namespace std;

///if given array is unsorted.So,you don't wanna it sorted,then you can apply this technique
///this technique time complexity is O(1)-->constant(unit) time

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
       arr[sz] = arr[pos];
       arr[pos] = value;

    }

    cout<<"Array After Insertion : ";
    printArray(arr,sz+1);///function calling
    return 0;
}


