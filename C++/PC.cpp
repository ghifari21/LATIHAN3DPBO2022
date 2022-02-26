#include <iostream>
#include <string>
#include "Processor.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

using namespace std;

class PC
{
    private:
        Processor processorObj;  // menampung processor
        Disk diskObj;   // menampung disk
        RAM ramObj;     // menampung RAM
        int totalPrice; // menampung total harga
    
    public:
        // constructor
        PC() {}

        PC(Processor processorObj, Disk diskObj, RAM ramObj, int totalPrice)
        {
            this->processorObj = processorObj;
            this->diskObj = diskObj;
            this->ramObj = ramObj;
            this->totalPrice = totalPrice;
        }

        // setter and getter
        void setProcessor(Processor processorObj)
        {
            this->processorObj = processorObj;
        }

        Processor getProcessor()
        {
            return this->processorObj;
        }

        void setDisk(Disk diskObj)
        {
            this->diskObj = diskObj;
        }

        Disk getDisk()
        {
            return this->diskObj;
        }

        void setRAM(RAM ramObj)
        {
            this->ramObj = ramObj;
        }

        RAM getRAM()
        {
            return this->ramObj;
        }

        void setTotalPrice(int totalPrice)
        {
            this->totalPrice = totalPrice;
        }

        int getTotalPrice()
        {
            return this->totalPrice;
        }

        // method
        void printPC()
        {
            cout << "Computer Specification :" << endl;
            this->processorObj.printProcessor();
            this->ramObj.printRAM();
            this->diskObj.printDisk();
            cout << "Total Price        : Rp " << this->getTotalPrice() << ",-" << endl;
        }

        // destructor
        ~PC() {}
};