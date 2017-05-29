#include<iostream>
#include<algorithm>
using namespace std;

int a[1006];
int b[1006];

int main()
{
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        a[i]=s1[i]-'0';
        b[i]=s2[i]-'0';
    }
    sort(a,a+n);
    sort(b,b+n);
    int ans1=0;
    int ans2=0;
    for(int i=0,j=0,m=n;i<m;)
    {
        //cout<<a[i]<<" "<<b[j]<<endl;
        if(a[i]<=b[j])
        {
            i++;
            j++;
        }
        else
        {
            ans1++;
            j++;
            m--;
        }
    }
    for(int i=0,j=0,m=n;i<m;)
    {
        if(a[i]<b[j])
        {
            i++;
            j++;
            ans2++;
            //cout<<"!!!!!"<<endl;
        }
        else
        {
            j++;
            m--;
        }
    }
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}
