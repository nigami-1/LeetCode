#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> sum;
        for(unsigned int j=0;j<nums.size(); ++j){
            sum.push_back(nums[j]);
        }
        for(unsigned int i=1;i<nums.size();++i){
        sum[i]+=sum[i-1];
        }
        return sum;
    }
};

int main()
{
    return 0;
}
