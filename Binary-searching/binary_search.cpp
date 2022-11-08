#include<bits/stdc++.h>
using namespace std;

///time complexity O(logn),here n=array size

int binary_searching(int arr[],int checkValue,int lowerBound,int upperBound)
{
    if(lowerBound<=upperBound)
    {
        int mid = (lowerBound+upperBound)/2;

        ///arr[mid]==checkValue
        if(arr[mid]==checkValue)
        {
            return mid; ///center
        }
        ///arr[mid]<checkValue
        else if(arr[mid]<checkValue)
        {
            binary_searching(arr,checkValue,mid+1,upperBound);///right side
        }
        ///arr[mid]>checkValue
        else
        {
            binary_searching(arr,checkValue,lowerBound,mid-1);///left side
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int sz;
    cin>>sz;
    int arr[sz];
    for(int i=0; i<sz; i++)
    {
        cin>>arr[i];
    }

    int checkValue;
    cout<<"Please,Enter the value you wanna want : ";
    cin>>checkValue;

    int indexNumber;
    indexNumber=binary_searching(arr,checkValue,0,sz-1);
    if(checkValue != -1)
    {
        cout<<"Index No--> "<<indexNumber<<" Position No--> "<<indexNumber+1<<endl;
    }
    else
    {
        cout<<"Not Found !!"<<endl;
    }
    return 0;
}
