#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> temp;
        temp.push_back(first);

        for(unsigned int i=0;i<encoded.size();i++)
        {
            temp.push_back(encoded[i]^temp[i]);
        }
        return temp;
    }
};

int main()
{
    return 0;
}
