#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    string str;
    char ch;
    int temp;
    cin>>str;
    stringstream ss(str);
    while (ss)
    {
        ss>>temp>>ch;
    }
    
    
}
