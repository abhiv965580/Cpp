#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,temp,temp_2;
    vector<int> v;
    cin>>n;
    for (i=0; i<n; i++) {
    cin>>temp;
    v.push_back(temp);
    }
    cin>>temp;
    v.erase((v.begin()+temp-1));
    cin>>temp>>temp_2;
    v.erase((v.begin()+temp-1)),(v.begin()+temp_2);
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}