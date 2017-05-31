#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<long long> z;
vector<long long> f;
vector<string> e;

int main()
{
    long long n;
    cin>>n;
    long long c,d;
    long long c1,d1;
    long long ans;
    cin>>c>>d;
    if(d==1)
    {
        ans=1900;
        z.push_back(1900);
    }
    else if(d==2)
    {
        ans=1899;
        f.push_back(1899);
    }
    for(long long i=1; i<n; i++)
    {
        cin>>c1>>d1;
        if(d1==2)
        {
            f.push_back(ans+c);
            ans+=c;
        }
        if(d1==1)
        {
            z.push_back(ans+c);
            ans+=c;
        }
        c=c1;
    }
    if(f.size()==0)
    {
        e.push_back("Infinity");
    }
    if(z.empty())
    {
        long long max=1899;
        for(long long i=0; i<f.size(); i++)
        {
            if(f[i]>max)
            {
                max=f[i];
            }
        }
        ans-=(max-1899);
        ans+=c;
    }
    else
    {
        long long min=1900;
        for(long long i=0; i<z.size(); i++)
        {
            if(z[i]<min)
            {
                min=z[i];
            }
        }
        long long cha1=1900-min;
        ans+=cha1;
        for(long long i=0; i<f.size(); i++)
        {
            f[i]+=cha1;
            if(f[i]>1899)
            {
                e.push_back("Impossible");
            }
        }
        long long max=-100000000;
        long long cha2;
        if(e.empty())
        {
            for(long long i=0; i<f.size(); i++)
            {
                if(f[i]>max)
                {
                    max=f[i];
                }
            }
            cha2=1899-max;
            ans+=cha2;
        }
        ans+=c;
    }
    if(!e.empty())
    {
        cout<<e[0]<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
}
