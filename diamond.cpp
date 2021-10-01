#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c;
    cin>>n;
    c=n+1;
    for(i=1;i<=n;i++)
    {
        for (j = n; j >= 1; j--)   
        {
            if(j>i) cout<<" ";
            else cout<<"*";
        }
        for(j=2;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if (i==n || c<=n)
        {
            c--;
            if (c==0)
            {
                break;
            }
            i=c-1;
            continue;
        }
        
    }
    return 0;
}