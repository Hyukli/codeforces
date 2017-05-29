#include<iostream>
using namespace std;

int main()
{
    string s;
    int ans=0;
    cin>>s;

    for(int i=0;i<=(s.size()-1)/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            ans++;
        }
    }
    if(s.size()%2==1&&ans<=1)
    {
        cout<<"YES"<<endl;
    }
    else if(s.size()%2==0&&ans==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
