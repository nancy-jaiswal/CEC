#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
                cout<<"Present "<<i+1<<'\n';
                break;
        }
    }
        if(i == n) {
            cout<<"Not Present "<<i<<"\n";

    }
}
