#include<bits/stdc++.h>
using namespace std;

///time complexity O(n),here n= array size

int main()
{
    int sz;
    cin>>sz;
    int arr[sz];
    for(int i=0; i<sz; i++)
    {
        cin>>arr[i];
    }
    char ch;
    cout<<"Do you wanna search?(Y/N) :";
    cin>>ch;
    while(toupper(ch)=='Y')
    {
        int check_value;
        cout<<"Please, enter the value you wanna search : ";
        cin>>check_value;

        int flag  = 0;
        for(int i=0; i<sz; i++)
        {
            if(arr[i] == check_value)
            {
                flag = 1;
                cout<<"Index No : "<<i<<" Position : "<<i+1<<endl;
            }
        }
        if(flag == 0)
        {
            cout<<"Not Found,Bro"<<endl;
        }

        cout<<"Do you wanna searching continue?(Y/N) : ";
        cin>>ch;
    }

    return 0;

}
