#include<iostream>
#include<string>
using namespace std;

int a[60][3];
string s[60];

int findshu(string c,int m)
{
    for(int i=0;i<=m;i++)
    {
        if(c[i]>='0'&&c[i]<='9')
        {

            return i;
        }
        if(c[m-i]>='0'&&c[m-i]<='9')
        {
            return i;
        }
    }
    return 100;
}
int findc(string c,int m)
{
    for(int i=0;i<=m;i++)
    {
        if(c[i]>='a'&&c[i]<='z')
        {
            return i;
        }
        if(c[m-i]>='a'&&c[m-i]<='z')
        {
            return i;
        }
    }
    return 100;
}

int findf(string c,int m)
{
    for(int i=0;i<=m;i++)
    {
        if(c[i]=='#'||c[i]=='*'||c[i]=='&')
        {
            return i;
        }
        if(c[m-i]=='#'||c[m-i]=='*'||c[m-i]=='&')
        {
            return i;
        }
    }
    return 100;
}



int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i][0]=findshu(s[i],m);
    }
    for(int i=0;i<n;i++)
    {
        a[i][1]=findc(s[i],m);
    }
    for(int i=0;i<n;i++)
    {
        a[i][2]=findf(s[i],m);
    }
    int max=1000000;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                    if(a[i][0]+a[j][1]+a[k][2]<max)
                    {
                        max=a[i][0]+a[j][1]+a[k][2];
                    }
                }
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
