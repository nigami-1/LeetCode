#include <iostream>
#include <string>

using namespace std;

int main()
{
    string jewels = "aA", stones = "aAAbbbb";
    int temp=0;

    for(int i=0;i<jewels.length();i++){
        for(int j=0;j<stones.length();j++){
            if(stones[j]==jewels[i]){
               temp++;
            }
        }
    }

    cout<<temp<<endl;


    //Output: 3
    return 0;
}
