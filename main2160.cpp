#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
    vector<int> temp;
    temp.push_back(num/1000);
    temp.push_back((num/100)%10);
    temp.push_back((num%100)/10);
    temp.push_back(num%10);

    for(unsigned int i=0;i<temp.size();i++){
        for(unsigned int j=0;j<temp.size();j++){
            if(temp[i]<temp[j]){
                swap(temp[i],temp[j]);
            }
        }
    }
    int sum=0;
    sum=(temp[0]*10+temp[2])+(temp[1]*10+temp[3]);
    return sum;
    }
};

int main()
{

    return 0;
}
