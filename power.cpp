#include <bits/stdc++.h>
using namespace std;
static int my_power(int n,int p)
{   
    int num = n,pow = p;
    
    int temp=num;
    for (int i = 1;i<pow;i++) {
        temp = num*temp;
    }
    return temp;
}
