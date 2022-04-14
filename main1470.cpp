#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> v1(n);
    vector<int> v2(n);
    vector<int> v3(2*n);

    for(int i=0;i<n;i++)
    {
        v1[i]=nums[i];
        v2[i]=nums[n+i];
    }

    int k=0;
    int j=0;
    for(unsigned int i=0;i<v3.size();i++)
    {
        if(i%2==0)
        {
            v3[i]=v1[j];
            j++;
        }
        else
        {
            v3[i]=v2[k];
            k++;
        }

    }
    return v3;

}

int main()
{
    vector<int> nums={1,2,3,4,4,3,2,1};
    nums=shuffle(nums,4);
    for(auto i:nums)
        cout << i << " ";

    cout << endl;
    return 0;
}

/*
class Solution {
public:
    vector<int> shuffle(vector<int> &nums, int n) {
        vector<int> aaa(n);
        vector<int> bbb(n);
        vector <int> temp(2*n);
        for(unsigned int i=0;i<n;i++){
            aaa[i]=nums[i];
            bbb[n+i]=nums[n+i];
        }

        for(unsigned int i=0;i<temp.size();i++)
        {
            temp.push_back(aaa[i]);
            temp.push_back(bbb[i]);
        }

        return temp;
    }
};

*/
