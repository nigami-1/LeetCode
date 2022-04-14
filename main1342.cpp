#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int temp=num;
        int flag=0;
        while(temp!=0){
            if(temp%2==0){
                temp/=2;
                flag++;
            }else{
                temp-=1;
                flag++;
            }
        }
        return flag;
    }
};

int main()
{
    return 0;
}
