public class Disk {
    private String type;        // menampung tipe
    private String capacity;    // menampung kapasitas
    private int price;          // menampung harga

    // constructor
    public Disk() {
    }

    public Disk(String type, String capacity, int price) {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    // setter and getter
    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return this.type;
    }

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
    public void printDisk() {
        System.out.println("Disk Type           : " + this.getType());
        System.out.println("Disk Capacity       : " + this.getCapacity());
        System.out.println("Disk Price          : Rp " + this.getPrice() + ",-");
    }
}
