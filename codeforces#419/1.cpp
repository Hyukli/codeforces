#include<iostream>
using namespace std;

struct Node
{
    int h,m;
};

Node trans(string s)
{
    Node ans;
    ans.h=(s[0]-'0')*10+(s[1]-'0');
    ans.m=(s[3]-'0')*10+(s[4]-'0');
    return ans;
}

bool huiwen(Node t)
{
    int a=t.m/10;
    int b=t.m%10;
    if(a+b*10==t.h)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node nex(Node t)
{
    if(t.m<59)
    {
        t.m++;
        return t;
    }
    if(t.h<23)
    {
        t.m=0;
        t.h++;
        return t;
    }
    else
    {
        t.h=t.m=0;
        return t;
    }
}

int main()
{
    string s;
    cin>>s;
    Node t=trans(s);
    int ans=0;
    while(!huiwen(t))
    {
        t=nex(t);
        ans++;
    }
    cout<<ans<<endl;
}