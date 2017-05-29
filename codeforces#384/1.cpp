#include<iostream>
#include<string.h>
using namespace std;
char s[100005];
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cin>>s;
    if(s[b-1]-s[c-1]>0)
    {
        cout<<s[b-1]-s[c-1]<<endl;
    }
    else
    {
        cout<<s[c-1]-s[b-1]<<endl;
    }

    return 0;
}
