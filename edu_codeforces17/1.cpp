#include<iostream>
#include<math.h>
using namespace std;

long long a[10000005];

int main()
{
    long long n,k;
    cin>>n>>k;
    long long i=1;
    long long j=0;
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            a[j++]=i;
        }
        i++;
    }
    long long flag=j-1;
    if(a[flag]*a[flag]==n)
    {
        while(j<=2*flag)
        {
            a[j]=n/a[2*flag-j];
            j++;
        }
    }
    else
    {
        while(j<=2*flag+1)
        {
            a[j]=n/a[2*flag+1-j];
            j++;
        }
    }
    if(k>j)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<a[k-1]<<endl;
    }
    return 0;
}
