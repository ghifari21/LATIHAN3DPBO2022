public class RAM {
    private String capacity;    // menampung kapasitas
    private int price;          // menampung harga

    // constructor
    public RAM() {
    }

    public RAM(String capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    // setter and getter
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }

    public String getCapacity() {
        return this.capacity;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

    // method
    public void printRAM() {
        System.out.println("RAM Capacity        : " + this.getCapacity());
        System.out.println("RAM Price           : Rp " + this.getPrice() + ",-");
    }
} 
