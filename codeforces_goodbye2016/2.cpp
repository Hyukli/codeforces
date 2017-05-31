#include<iostream>
#include<string.h>
using namespace std;

int a=0;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    while(n--)
    {
        int s1;
        string s2;
        cin>>s1>>s2;
        if((s2=="East"||s2=="West")&&s1!=0)
        {
            if(a==0||a==20000)
            {
                flag++;
            }
        }
        if(s2=="South"&&s1!=0)
        {
            if(a==20000)
            {
                flag++;
            }
            a+=(s1%40000);
            a%=40000;
        }
        if(s2=="North"&&s1!=0)
        {
            if(a==0)
            {
                flag++;
            }
            a+=40000;
            a-=(s1%40000);
            a%=40000;
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else if(a==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
