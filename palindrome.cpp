#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,temp,rev_num=0,dig=0;
    cout<<"Enter any number :";
    cin>>num;
    temp = num;
    while (temp) {
        dig = temp%10;
        rev_num = rev_num*10 + dig;
        temp = temp/10;
    }
    if  (rev_num == num) {
        cout<<"Palindrome";
    }
    else {
        cout<<"Not";
    }
    return 0;
}