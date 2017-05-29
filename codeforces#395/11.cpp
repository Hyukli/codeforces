#include<iostream>
using namespace std;

int fun(int a,int b)
{
    int c=a%b;
    if(c!=0)
    {
        return fun(b,c);
    }
    return b;
}


int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int ans=z/(n*m/fun(n,m));
    cout<<ans<<endl;
    return 0;
}
