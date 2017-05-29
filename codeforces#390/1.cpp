#include<iostream>
using namespace std;

int a[105];

int main()
{
    int n;
    int flag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<flag<<endl;
        int i=1;
        for(i;i<=n;i++)
        {
            if(a[i]!=0)
            {
                i++;
                break;
            }
        }
        for(i;i<=n;i++)
        {
            if(a[i]!=0)
            {
                break;
            }
        }
        cout<<1<<" "<<i-1<<endl;
        for(i;i<=n;i++)
        {
            int flag=i;
            while(a[i+1]==0&&i<n)
            {
                i++;
            }
            cout<<flag<<" "<<i<<endl;
        }
    }
    return 0;
}
