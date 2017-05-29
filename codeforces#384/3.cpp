#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<-1;
    }
    else if(n%2==0)
    {
        n/=2;
        cout<<2*n<<" "<<2*n+1<<" "<<(2*n+1)*2*n;
    }
    else
    {
        cout<<n<<" "<<n+1<<" "<<n*(n+1);
    }
    return 0;
}
