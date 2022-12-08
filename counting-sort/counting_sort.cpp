#include<bits/stdc++.h>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
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

    //step-1(finding the maximum value)
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }

    //step-2(initialize the cnt array)
    int cnt[mx+1];
    for(int i=0; i<=mx; i++)
    {
        cnt[i]=0;
    }

    //step-3(frequency calculation)
    for(int i=0; i<n; i++)
    {
        cnt[arr[i]]++;
    }
    cout<<"Frequency Array : ";
    printArray(cnt,mx+1);
    cout<<endl;
    //step-4(cumulative sum calculation)
    for(int i=1; i<=mx; i++)
    {
        cnt[i]+=cnt[i-1];
    }
    cout<<"After the cumulative sum calculation : ";
    printArray(cnt,mx+1);
    cout<<endl;

    /*step-5(creating a new array and backward(sanity check) scanning of the original array
              and main sorting)*/
    int result[n];
    for(int i=n-1;i>=0;i--)
    {
        cnt[arr[i]]--;///cnt[arr[i]]=cnt[arr[i]]-1;
        int k = cnt[arr[i]];
        result[k]=arr[i];
    }
    cout<<"After Sorting : ";
    printArray(result,n);

    return 0;
}
