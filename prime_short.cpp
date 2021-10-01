#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            c++;
            cout<<"Non Prime";
            break;
        }
        
    }
    if (c==0)
    {
        cout<<"Prime";
    }
    return 0;
}