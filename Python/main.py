from Processor import Processor
from RAM import RAM
from Disk import Disk
from PC import PC

# inisialisasi
cpu = Processor("Ryzen 9 5900X", 8495000)
memory = RAM("32GB", 2600000)
storage = Disk("SSD", "2TB", 6000000)

# menghitung total harga
totalPrice = cpu.getPrice() + memory.getPrice() + storage.getPrice()

# masukan semua komponen ke pc
computer = PC(cpu, memory, storage, totalPrice)

# output
computer.printPC()