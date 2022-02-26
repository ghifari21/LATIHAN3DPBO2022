#include <iostream>
#include <string>

using namespace std;

class Processor
{
    private:
        string name;    // menampung nama processor
        int price;      // menampung harga
    
    public:
        // constructor
        Processor() {}

        Processor(string name, int price)
        {
            this->name = name;
            this->price = price;
        }

        // setter and getter
        void setName(string name)
        {
            this->name = name;
        }

        string getName()
        {
            return this->name;
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
        void printProcessor()
        {
            cout << "Processor Name     : " << this->getName() << endl;
            cout << "Processor Price    : Rp " << this->getPrice() << ",-" << endl;
        }

        // destructor
        ~Processor() {}
};