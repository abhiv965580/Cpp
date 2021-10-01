#include<iostream>
using namespace std;
int power (int a,int n)
{
    if(n==0) return 1;
    else { if(n&1)
    {
        return a*power(a,n/2)*power(a,n/2);
        
    }
    else return power(a,n/2)*power(a,n/2);

    }
}
int main()
{
    int a,n,p;
    cin>>a>>n;
    p=power(a,n);
    cout<<p;
    return 0;
}