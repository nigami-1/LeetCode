#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int free[100];
    int temp = 1;
    vector <string> sen =
    {"alice and bob love leetcode","i think so too","this is great thanks very much"};
    string pop;
    {
        unsigned int i = 0;
    for ( ; i < sen.size(); i++) {
        pop = sen[i];
        for (unsigned int j = 0; j < pop.length(); j++) {
            if (pop[j] == ' ') {
                temp++;
            }
        }
        free[i] = temp;
        temp = 1;
        pop="";
    }

    temp = free[0];
    for (unsigned int k = 0; k < i; k++) {
        if (temp < free[k]) {
            temp = free[k];
        }
    }
    }
    cout<<temp<<endl;
    return 0;
}
