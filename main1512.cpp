#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    int temp=0;
    for(unsigned int i=0;i<nums.size();i++){
        for(unsigned int j=0;j<nums.size();j++){
            if((nums[i]==nums[j])&&(i!=j)){
                temp++;
            }
        }
    }

        return temp/2;
    }
};

int main()
{
    return 0;
}
