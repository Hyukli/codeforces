#include<iostream>
#include<string.h>
using namespace std;

long long a[1000005];
long long flag[1000005];

int  main()
{
    long long n,m;
    cin>>n>>m;
    memset(a,0,sizeof(a));
    memset(flag,0,sizeof(flag));
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=m; j++)
        {
            // cout<<"!!"<<i*n+j<<" "<<(i-1)*n+j<<"!!";
            cin>>a[i*m+j];
            if(a[i*m+j]<a[(i-1)*m+j])
            {
                flag[i*m+j]=1;
            }
        }
    }


    long long k;
    cin>>k;
    long long l,r;
    int i=0;
    int tttt;
    while(k--)
    {
        i++;
        long long temp;
        long long ans=0;
        cin>>l>>r;
        for(long long i=1; i<=m; i++)
        {
            temp=0;
            for(long long j=l+1; j<=r; j++)
            {
                // cout<<"!!"<<j*n+i<<"@@"<<j;
                if(flag[j*m+i])
                {
                    //cout<<"!!"<<j*n+i<<endl;
                    tttt=j*100+i;
                    temp++;
                    break;
                }
            }
            if(temp==0)
            {
                ans=1;
                break;
            }
        }

        if(ans)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }



    }
    return 0;
}








