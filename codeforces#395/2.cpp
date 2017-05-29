
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node
{
    int x,y;
};

Node N[100005];
int a[100005];
vector<Node> D;
vector<int> v;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++)
    {
        cin>>N[i].x>>N[i].y;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[N[i].x]!=a[N[i].y])
        {
            Node no;
            no.x=N[i].x;
            no.y=N[i].y;
            D.push_back(no);
        }
    }
    for(int i=0; i<D.size(); i++)
    {
        v.push_back(D[i].x);
        v.push_back(D[i].y);
    }
    sort(v.begin(),v.end());
    int ans=0;
    int tmp=1;
    int ansnode=1;
    if(v.size()!=0)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==v[i+1])
            {
                tmp++;
                if(tmp>ans)
                {
                    ans=tmp;
                    ansnode=v[i];
                }
            }
            else
            {
                tmp=1;
            }
        }
    }

    if(ans==v.size()/2)
    {
        cout<<"YES"<<endl<<ansnode<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
