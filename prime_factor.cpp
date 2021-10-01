#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n,i,max;
        cin >> n;
        max=n;
        // for(i=2;i<n;i++)
        // {
        //     if(n%i==0) max=i;
            
        // }
        // cout<<max<<endl;
        int temp=n;
        int te=1;
        for(int j=2;j<=20;j++)
        {
            for(int k=j;n>2;)
            {
                if(n%k==0){
                    n=n/k;
                }
                else k++;
            }
            

        }
        // if(n%2==0) max=n/2;
        // else if (n%3==0)  max=n/3;
        // else if (n%5==0) max=n/5;    
        // else max=n;
        cout<<n<<endl;    
    }
    return 0;
}