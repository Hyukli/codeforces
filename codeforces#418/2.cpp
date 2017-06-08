#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<string>
using namespace std;

int a[1005];
int b[1005];
int c[1005];
int n;

int shuchua()
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

int shuchub()
{
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}


int main()
{
    memset(c,0,sizeof(c));
    int maxx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
        if(b[j]>maxx)
        {
            maxx=b[j];
        }
    }
    int d1,d2;
    d1=d2=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(d1==-1)
            {
                d1=i;
            }
            else
            {
                d2=i;
            }
        }
    }
    if(d2==-1)
    {
        for(int i=0;i<n;i++)
        {
            c[a[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(c[i]==0)
            {
                a[d1]=i;
            }
        }
        shuchua();
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            c[a[i]]++;
            if(c[a[i]]>1)
            {
                break;
            }
            if(i==n-1)
            {
                shuchua();
                return 0;
            }
        }
        memset(c,0,sizeof(c));
        for(int i=0;i<n;i++)
        {
            c[b[i]]++;
            if(c[b[i]]>1)
            {
                break;
            }
            if(i==n-1)
            {
                shuchub();
                return 0;
            }
        }
        memset(c,0,sizeof(c));
        int tmpp=a[d1];
        a[d1]=b[d1];
        for(int i=0;i<n;i++)
        {
            c[a[i]]++;
            if(c[a[i]]>1)
            {
                break;
            }
            if(i==n-1)
            {
                shuchua();
                return 0;
            }
        }
        memset(c,0,sizeof(c));
        b[d1]=tmpp;
        for(int i=0;i<n;i++)
        {
            c[b[i]]++;
            if(c[b[i]]>1)
            {
                break;
            }
            if(i==n-1)
            {
                shuchub();
                return 0;
            }
        }
    }

}