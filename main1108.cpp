#include <iostream>
#include <string>

using namespace std;

int main()
{
    string address = "1.1.1.1";
    string ip, skob="[.]";

    for(unsigned int i=0;i<address.length();i++){
            if(address[i]=='.'){
                ip.push_back(skob[0]);
                ip.push_back(skob[1]);
                ip.push_back(skob[2]);
                address.erase(address.find('.'),1);
            }
            ip.push_back(address[i]);
        }

    cout<<ip<<endl;

    return 0;
}
