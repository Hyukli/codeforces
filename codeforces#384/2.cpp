#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long n;
    long long k;
    cin>>n>>k;
    long long a=pow(2,n);
    if(k%2==1)
    {
        cout<<1<<endl;
    }
    else
    {
        while(1)
        {
            if(k<a/2)
            {
                a/=2;
            }
            else if(k>a/2&&k<a)
            {
                k=a-k;
                a/=2;
            }
            else if(k=a/2)
            {
                break;
            }
        }
        int i=2;
        while(k/2!=1)
        {
            k/=2;
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}

