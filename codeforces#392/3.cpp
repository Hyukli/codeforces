#include<iostream>
using namespace std;

long long a[102][102];

int main()
{
    int n,m,x,y;
    long long k;
    cin>>n>>m>>k>>x>>y;
    long long tmp=k-m*n;
    if(n==1)
    {
        cout<<k/m+1<<" "<<k/m<<" "<<(k+m-y)/m<<endl;
    }
    else
    {
        long long t=tmp%((n-1)*2*m);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if((i-1)*m+j<=k)
                {
                    a[i][j]=1;
                }
                else
                {
                    a[i][j]=0;
                }
                if(i==1||i==n)
                {
                    long long t=tmp-((n-2)*m+(i-1)*m+j-1);
                    long long p=t/((n-1)*m*2)+1;
                    if(t>0&&p>0)
                    {
                        a[i][j]+=p;
                    }
                }
                else
                {
                    long long p1=tmp/((n-1)*2*m);
                    if(p1>0)
                    {
                        a[i][j]+=(p1*2);
                    }
                }
            }
        }
        tmp%=((n-1)*2*m);
        for(int ii=n-1; ii>1; ii--)
        {
            if(tmp<=0)
            {
                break;
            }
            for(int jj=1; jj<=m; jj++)
            {
                if(tmp--)
                {
                    a[ii][jj]++;
                }
                else
                {
                    break;
                }
            }
        }
        tmp-=m;
        for(int ii=2; ii<n; ii++)
        {
            if(tmp<=0)
            {
                break;
            }

            for(int jj=1; jj<=m; jj++)
            {
                if(tmp--)
                {
                    a[ii][jj]++;
                }
                else
                {
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<max(a[2][1],a[n-1][1])<<" "<<a[n][m]<<" "<<a[x][y]<<endl;
    }

    return 0;
}
