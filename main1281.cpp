#include <iostream>

using namespace std;

int main()
{
    int n = 4421;
    //output: 21
    //Product of digits = 4 * 4 * 2 * 1 = 32
    //Sum of digits = 4 + 4 + 2 + 1 = 11
    //Result = 32 - 11 = 21

    int temp,S=0,P=1;
    while(n!=0){
        temp=n%10;
        n/=10;
        S+=temp;
        P*=temp;
    }
    cout<<P-S<<endl;

    return 0;
}
