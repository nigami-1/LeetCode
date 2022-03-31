#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum[200];
        int temp=0, num = 0;

        for (int i = 0; i<accounts.size(); i++)
        {
            for (int j =0; j <accounts[i].size(); j++){
                temp+=accounts[i][j];
            }
            sum[i]=temp;
            num++;
            temp=0;
        }

        temp=sum[0];
        for(unsigned int i=0; i<num; i++){
            if(temp<sum[i]){
                temp=sum[i];
            }
        }
        return temp;
        }
};

int main(){
    return 0;
}


