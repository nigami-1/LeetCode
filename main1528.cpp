#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    string temp(s);
    for(int i=0;i<s.length();i++)
    {
        temp[indices[i]]=s[i];
    }
    return temp;
    }
};
int main()
{
    return 0;
}
