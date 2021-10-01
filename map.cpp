#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    int n,i,type,mark;
    string stu;
    cin>>n;
    for(i=0;i<n;i++)
    {   
        cin>>type;
        if(type==1){
            cin>>stu>>mark;
            map<string,int>::iterator itr=m.find(stu);
            if(itr->first==stu)
            {
                itr->second+=mark;
                continue;
            } 
            m.insert(make_pair(stu,mark));
            }
        if(type==2) {
            cin>>stu;
            m.erase(stu);}
        if(type==3) 
        {   cin>>stu;
            map<string,int>::iterator itr=m.find(stu);
            if(itr==m.end())
            {
                cout<<"0"<<endl;
                continue;
            }
            cout<<itr->second<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
