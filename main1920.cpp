#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(unsigned int i=0;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }

        return ans;
    }
};

int main()
{

    return 0;
}
