#include <iostream>
#include <sstream>
#include <string>
using namespace std;


class Car {
    int gear;
    string color;


    public:

        Car(int gear, string color) {
            this -> gear = gear;
            this -> color = color;
        }

        void printCarInfo() {
            cout << "Gear: " << this -> gear << " " << "Color: " << this -> color <<  endl; 
        }
};

class RaceCar: public Car {

    int maxSpeed;

    public:

        RaceCar(int gear, string color, int maxSpeed): Car(gear, color) {
            this -> maxSpeed = maxSpeed;
        }


        void printRaceCarInfo() {
            Car::printCarInfo();
            cout << "Max Speed: " << this -> maxSpeed << endl;
        }
};



int main() {

    RaceCar rc = RaceCar(5, "Red", 150);

    rc.printRaceCarInfo();
    return 0;
}