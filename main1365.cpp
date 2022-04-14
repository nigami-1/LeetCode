#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> nums = {8,1,2,2,3};
    //[4,0,1,1,3]
    vector <int> res;


    for(unsigned int i=0;i<nums.size();i++){
        int temp=0;
        for(unsigned int j=0;j<nums.size();j++){
            if(nums[i]>nums[j]){
                temp++;
            }
        }
        res.push_back(temp);
    }

    for(unsigned int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
