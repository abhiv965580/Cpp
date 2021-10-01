#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j = n; j >= 1; j--)   
        {
            if(j>i) cout<<" ";
            else cout<<j;
        }
        for(j=2;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    return 0;
}