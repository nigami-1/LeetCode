#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        while(ans.size()!=2*nums.size()){
            for(unsigned int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            }
        }
    return ans;
    }
};

int main()
{
//    cout << "Hello World!" << endl;
    return 0;
}
