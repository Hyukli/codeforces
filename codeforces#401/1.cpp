#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    n%=6;
    if(n==0&&x==0||n==1&&x==1||n==2&&x==2||n==3&&x==2||n==4&&x==1||n==5&&x==0)
    {
        cout<<0<<endl;
    }
    else if(n==0&&x==1||n==1&&x==0||n==2&&x==0||n==3&&x==1||n==4&&x==2||n==5&&x==2)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    return 0;
}
