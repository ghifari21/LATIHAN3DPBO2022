public class main {
    public static void main(String[] args) {
        // inisialisasi 
        Processor cpu = new Processor("Ryzen 9 5900X", 8495000);
        RAM memory = new RAM("32GB", 2600000);
        Disk storage = new Disk("SSD", "2TB", 6000000);
    
        // menghitung harga total
        int totalPrice = cpu.getPrice() + memory.getPrice() + storage.getPrice();

        // masukan semua komponen ke PC
        PC computer = new PC(cpu, memory, storage, totalPrice);

        // output
        computer.printPC();
    }
}