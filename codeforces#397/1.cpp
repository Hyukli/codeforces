#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;

string s[105];
vector<string> v;
int a[105];

int main()
{
    memset(a,0,sizeof(a));
    int n;
    int ans=0;
    string home;
    cin>>n>>home;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i].substr(0,3)==home)
        {
            v.push_back(s[i].substr(5,3));
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!a[j]&&s[j].substr(0,3)==v[i]&&s[j].substr(5,3)==home)
            {
                a[j]++;
                ans++;
                break;
            }
        }
    }
    if(ans==v.size())
    {
        cout<<"home"<<endl;
    }
    else
    {
        cout<<"contest"<<endl;
    }
    return 0;
}
