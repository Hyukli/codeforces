#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    k=240-k;
    int ans=0;
    int time=5;
    while(k-time>=0)
    {
        k-=time;
        ans++;
        time+=5;
    }
    if(ans>n)
    {
        ans=n;
    }
    cout<<ans<<endl;
    return 0;
}
