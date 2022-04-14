#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans;

    int temp = candies[0];
    for(unsigned int i=0;i<candies.size();i++){
        if(temp<candies[i]){
            temp=candies[i];
        }
    }

    for(unsigned int i=0;i<candies.size();i++){
        if(temp<=candies[i]+extraCandies){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
    }
        return ans;
    }
};

int main()
{

    return 0;
}
