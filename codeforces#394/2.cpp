#include<iostream>
using namespace std;

int a[105];
int b[105];
int ta[300];
int tb[105];

int main()
{
    int n,L;
    cin>>n>>L;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ta[0]=a[0]+L-a[n-1];
    for(int i=1;i<n;i++)
    {
        ta[i]=a[i]-a[i-1];
    }
    tb[0]=b[0]+L-b[n-1];
    for(int i=1;i<n;i++)
    {
        tb[i]=b[i]-b[i-1];
    }
    for(int i=n;i<2*n;i++)
    {
        ta[i]=ta[i-n];
    }
    int tmp;
    for(int i=0;i<n;i++)
    {
        if(tmp==n)
        {
            break;
        }
        if(ta[i]==tb[0])
        {
            tmp=1;
            for(int j=1;j<n;j++)
            {
                if(ta[i+j]==tb[j])
                {
                    tmp++;
                }
            }
        }
    }
    if(tmp==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
