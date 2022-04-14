#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> temp;
    int flag=0;
    int first,second;
    for(unsigned int i=0;i<nums.size()/2;i++)
    {
        first=nums[2*i];
        second=nums[2*i+1];
        while (flag<first) {
            temp.push_back(second);
            flag++;
        }
        flag=0;
    }
    return temp;
    }
};

int main()
{

    return 0;
}
