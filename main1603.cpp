#include <iostream>

using namespace std;

class ParkingSystem
{

public:
    ParkingSystem(int big, int medium, int small) {
        this->big=big;
        this->medium=medium;
        this->small=small;

    }

    bool addCar(int carType) {
        if(carType==1)
        {
            if(recordB==big)
                return false;
            else if(recordB<big)
            {
                recordB++;
                return true;
            }
        }
        if(carType==2)
        {
            if(recordM==medium)
                return false;
            else if(recordM<medium)
            {
                recordM++;
                return true;
            }
        }
        if(carType==3)
        {
            if(recordS==small)
                return false;
            else if(recordS<small)
            {
                recordS++;
                return true;
            }
        }
        return false;
    }
private:
    int big; int medium; int small;
    int recordB=0,recordM=0,recordS=0;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

int main()
{
    ParkingSystem* obj = new ParkingSystem(4, 5, 0);
    bool param_1 = obj->addCar(1);
    cout << param_1 << " ";
    param_1 = obj->addCar(2);
    cout << param_1 << " ";
    param_1 = obj->addCar(3);
    cout << param_1 << " ";
    cout << endl;
    return 0;
}
