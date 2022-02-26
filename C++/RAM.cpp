#include <iostream>
#include <string>

using namespace std;

class RAM
{
    private:
        string capacity;    // menampung kapasitas
        int price;          // menampung harga

    public:
        // constructor
        RAM() {}

        RAM(string capacity, int price)
        {
            this->capacity = capacity;
            this->price = price;
        }

        // setter and getter
        void setCapacity(string capacity)
        {
            this->capacity = capacity;
        }

        string getCapacity()
        {
            return this->capacity;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }

        // method
        void printRAM()
        {
            cout << "RAM Capacity       : " << this->getCapacity() << endl;
            cout << "RAM Price          : Rp " << this->getPrice() << ",-" << endl;
        }

        // destructor
        ~RAM() {}
};