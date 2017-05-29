#include<iostream>
#include<string>
using namespace std;

char c[4];
int ans[4];
bool judge(char* p,int i)
{
    if(*p=='R')
    {
        c[i]='R';
        return 1;
    }
    if(*p=='B')
    {
        c[i]='B';
        return 1;
    }
    if(*p=='Y')
    {
        c[i]='Y';
        return 1;
    }
    if(*p=='G')
    {
        c[i]='G';
        return 1;
    }
    return 0;
}

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i+=4)
    {
        if(judge(&s[i],0))
        {
            break;
        }
    }
    for(int i=1;i<s.size();i+=4)
    {
        if(judge(&s[i],1))
        {
            break;
        }
    }
    for(int i=2;i<s.size();i+=4)
    {
        if(judge(&s[i],2))
        {
            break;
        }
    }
    for(int i=3;i<s.size();i+=4)
    {
        if(judge(&s[i],3))
        {
            break;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(c[i]=='R')
        {
            for(int j=i;j<s.size();j+=4)
            {
                if(s[j]=='!')
                {
                    ans[0]++;
                }
            }
        }
        if(c[i]=='B')
        {
            for(int j=i;j<s.size();j+=4)
            {
                if(s[j]=='!')
                {
                    ans[1]++;
                }
            }
        }
        if(c[i]=='Y')
        {
            for(int j=i;j<s.size();j+=4)
            {
                if(s[j]=='!')
                {
                    ans[2]++;
                }
            }
        }
        if(c[i]=='G')
        {
            for(int j=i;j<s.size();j+=4)
            {
                if(s[j]=='!')
                {
                    ans[3]++;
                }
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
