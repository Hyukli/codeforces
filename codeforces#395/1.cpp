#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

struct Node
{
    int x,y;
};

Node N[100005];
int a[100005];
int d[100005];

int main()
{
    memset(d,0,100005);
    int n;
    cin>>n;
    int c=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>N[i].x>>N[i].y;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[N[i].x]!=a[N[i].y])
        {
            c++;
            d[N[i].x]++;
            d[N[i].y]++;
        }
    }
    int ans=0;
    int i;
    for(i=1;i<=n;i++)
    {
        if(d[i]==c)
        {
            ans=1;
            break;
        }
    }
    if(ans==1)
    {
        cout<<"YES"<<endl<<i<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
