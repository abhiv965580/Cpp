#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch;
    int i,temp,count=1,size;
    vector<int> m;
    for(ch='a';ch!='\0';ss>>ch)
    {
        ss>>temp;
        m.push_back(temp);
    }
    return m;
	// Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
