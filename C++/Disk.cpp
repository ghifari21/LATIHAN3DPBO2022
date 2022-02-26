#include <iostream>
#include <string>

using namespace std;

class Disk
{
    private:
        string type;        // menampung tipe
        string capacity;    // menampung kapasitas
        int price;          // menampung harga
    
    public:
        // constructor
        Disk() {}

        Disk(string type, string capacity, int price)
        {
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        // setter and getter
        void setType(string type)
        {
            this->type = type;
        }

        string getType()
        {
            return this->type;
        }

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
        void printDisk()
        {
            cout << "Disk Type          : " << this->getType() << endl;
            cout << "Disk Capacity      : " << this->getCapacity() << endl;
            cout << "Disk Price         : Rp " << this->getPrice() << ",-" << endl;
        }

        // destructor
        ~Disk() {}
};