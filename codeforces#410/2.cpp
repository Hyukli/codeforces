#include<iostream>
#include<vector>
#define MAX 52
using namespace std;

vector<string> v;
int a[MAX];

int main()
{
    int n,ssize;
    int flag=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(i==0)
        {
            //ssize=s.size();
            v.push_back(s);
            a[0]=0;
        }
        else
        {
            string ss=s+s;
            v.push_back(ss);
        }
    }
    string kk=v[0];
    for(int i=0;i<v[0].size();i++)
    {
        string c=kk.substr(0,1);
        string cc=kk.substr(1,v[0].size());
        kk=cc+c;
        if(kk==v[0])
        {
            ssize=i+1;
            break;
        }
    }
    //cout<<ssize<<endl;
    for(int i=1; i<v.size(); i++)
    {
        int k=v[i].find(v[0]);
        if(k!=string::npos)
        {
            a[i]=k;
        }
        else
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    int ans=100000000;
    int tmp=0;
    for(int i=0; i<n; i++)
    {
        tmp=0;
        for(int j=0; j<n; j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
                if(a[j]>=a[i])
                {
                    tmp+=(a[j]-a[i]);
                }
                else
                {
                    tmp+=(a[j]+ssize-a[i]);
                }
            }
        }
        if(tmp<ans)
        {
            ans=tmp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
