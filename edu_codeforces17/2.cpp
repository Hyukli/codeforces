#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

vector<int> USB;
vector<int> PS;
vector<int> A;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    cin>>m;
    while(m--)
    {
        int v;
        string s;
        cin>>v>>s;
        if(s=="USB")
        {
            USB.push_back(v);
        }
        if(s=="PS/2")
        {
            PS.push_back(v);
        }
    }
    sort(USB.begin(),USB.begin()+USB.size());
    sort(PS.begin(),PS.begin()+PS.size());
    long long sum=0;
    int ul=USB.size();
    int pl=PS.size();
    int a1=min(a,ul);
    int b1=min(b,pl);
    for(int i=0;i<a1;i++)
    {
        sum+=USB[i];
    }
    for(int i=0;i<b1;i++)
    {
        sum+=PS[i];
    }
    for(int i=a1;i<USB.size();i++)
    {
        A.push_back(USB[i]);
    }
    for(int i=b1;i<PS.size();i++)
    {
        A.push_back(PS[i]);
    }
    sort(A.begin(),A.begin()+A.size());
    int al=A.size();
    int c1=min(c,al);
    for(int i=0;i<c1;i++)
    {
        sum+=A[i];
    }
    cout<<a1+b1+c1<<" "<<sum<<endl;
    return 0;
}
