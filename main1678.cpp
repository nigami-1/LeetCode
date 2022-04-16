#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string temp;

        int i=0;
    for(i=0;i<command.length();i++){
        if(command[i]=='G'){
            temp+='G';
        }
        if(command[i]=='a'){
            temp+='a';
            temp+='l';
        }
        if(command[i]=='('&&command[i+1]==')'){
            temp+='o';
        }
    }
        return temp;
    }
};

int main()
{

    return 0;
}
