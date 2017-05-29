#include<iostream>
#include<string.h>
using namespace std;

int flag[505];
int first[26];

int main()
{
    string s;
    cin>>s;
    int ss=s.size();
    memset(flag,0,ss);
    memset(first,-1,sizeof(first));
    char tmp='a';
    for(int k=0; k<26; k++)
    {
        int sum=0;
        for(int i=0; i<ss; i++)
        {
            if(s[i]==tmp+k)
            {
                if(i<first[k]||first[k]==-1)
                {
                    first[k]=i;
                }
                flag[i]++;
                sum++;
            }
        }
        if(sum==0)
        {
            //cout<<"!!!"<<k<<endl;
            break;
        }
    }



    int f=0;
    for(int i=0;i<ss;i++)
    {
        if(flag[i]==0)
        {
            cout<<"NO"<<endl;
            f++;
            break;
        }
    }

    if(f==0)
    {
        for(int i=0;i<25;i++)
        {
            //cout<<first[i]<<endl;
            if(first[i+1]==-1)
            {
                break;
            }
            if(first[i]>first[i+1])
            {
                f++;
                //break;
            }
        }
        if(f==0)
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
