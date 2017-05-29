#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int a[100005];
int pri[100005];
vector<int> v;

int init()
{
    memset(a,0,sizeof(a));
    memset(pri,0,sizeof(pri));
    for(int i=2;i<400;i++)
    {
        for(int j=i;j*i<100005;j++)
        {
            pri[i*j]=1;
        }
    }
    for(int i=2;i<100005;i++)
    {
        if(!pri[i])
        {
            v.push_back(i);
        }
    }
}

int fun(int m)
{
    for(int i=0;v[i]*v[i]<=m;i++)
    {
        if(m%v[i]==0)
        {
            //cout<<v[i]<<"!!"<<endl;
            m/=v[i];
            return 1+fun(m);
        }
    }
    return 0;
}

int main()
{
    init();
    int n;
    cin>>n;
    int max=0;
//    for(int i=2;i<=n+1;i++)
//    {
//        a[i-2]=fun(i);
//        if(max<fun(i))
//        {
//            max=fun(i);
//        }
//    }
//    cout<<max+1<<endl;
    if(n==1||n==2)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    for(int i=2;i<=n+1;i++)
    {
        cout<<pri[i]+1<<" ";
    }
    return 0;
}
