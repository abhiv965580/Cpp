#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c;
    cin>>n;
    c=n;
    for(i=1;i<=n;i++)
    {
        for (j = 1; j <= n; j++)   
        {
            if(j<=i) cout<<"*";
            else cout<<" ";            
            
        }
        for ( j = n; j >=1; j--)
        {
            if(j<=i) cout<<"*";
            else cout<<" ";
        }
        
        cout<<endl;
        if (i==n||c<n)
        {
            c--;
            if(c==-1) break;
            i=c;
            continue;
        }
    }
    return 0;
}