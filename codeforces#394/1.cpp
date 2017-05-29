#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int t=a-b;
        if(t==0||t==1||t==-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
