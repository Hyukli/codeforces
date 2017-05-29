#include<iostream>
using namespace std;

int a[105];

int main()
{
    int n;
    cin>>n;
    long long ans=0;
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>flag)
        {
            flag=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        ans+=(flag-a[i]);
    }
    cout<<ans<<endl;
}
