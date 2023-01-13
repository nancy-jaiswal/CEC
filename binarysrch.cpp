#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int l=0,h=n-1;
    int arr[n],k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==k)
        {
           cout<<"Present"<<endl;
           break;
        }

        else if(arr[mid]<k)
            l=mid+1;
        else
            h=mid-1;
    }
    return 0;
}
