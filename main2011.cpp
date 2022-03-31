#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(unsigned int i=0;i<operations.size();i++){
            if(operations[i]=="--X"){
                x-=1;
            }else if(operations[i]=="X--"){
                x-=1;
            }else if(operations[i]=="++X"){
                x+=1;
            }else if(operations[i]=="X++"){
                x+=1;
            }
        }
        return x;
    }
};

int main()
{
    return 0;
}
