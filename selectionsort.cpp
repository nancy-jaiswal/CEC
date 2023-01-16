
#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n)
{
    int min_idx;
    for(int i=0;i<n-1;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
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
    sort(arr,n);
    return 0;
}
