#include <bits/stdc++.h>
#include "power.cpp"

using namespace std;
int main()
{
    int num,dig=0,new_num=0;
    cout<<"Enter the number: ";
    cin>>num;
    int temp = num;
    while (temp) {
        dig += 1;
        temp = temp/10;
    }
    
    int rem;
    temp = num;
    while(temp) {
        rem = temp%10;
        new_num = new_num + my_power(rem,dig);
        temp = temp/10;
    }
    
    if (num == new_num) {
        cout<<"Armstrong";

    }
    else {
        cout<<"Not";
    }
    return 0;
}