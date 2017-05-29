#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        string s,s3;
        cin>>s>>s3;
        if(s==s1)
        {
            s1=s3;
        }
        else
        {
            s2=s3;
        }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
