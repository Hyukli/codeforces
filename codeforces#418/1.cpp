#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int a[104];
int b[104];

int main()
{
    int n,k,tmp;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            tmp=i;
        }
    }
    for(int j=0;j<k;j++)
    {
        cin>>b[j];
    }
    if(k>1)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(a[i]&&(a[i]<a[i-1]))
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        if(tmp==0&&b[0]<a[0])
        {
            cout<<"No"<<endl;
        }
        else if(tmp==n-1&&b[0]>a[n-2])
        {
            cout<<"No"<<endl;
        }
        else if(b[0]>a[tmp-1]&&b[0]<a[tmp+1])
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }

    }
    return 0;
}