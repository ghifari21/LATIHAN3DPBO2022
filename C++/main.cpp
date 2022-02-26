#include <iostream>
#include <string>
#include "PC.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    // inisialisasi
    Processor cpu("Ryzen 9 5900X", 8495000);
    RAM memory("32GB", 2600000);
    Disk storage("SSD", "2TB", 6000000);

    // menghitung total harga
    int totalPrice = cpu.getPrice() + memory.getPrice() + storage.getPrice();

    // memasukan semua komponen ke PC
    PC computer(cpu, storage, memory, totalPrice);

    computer.printPC(); // output
    return 0;
}
