public class Processor {
    private String name;    // menampung nama processor
    private int price;      // menampung harga

    // constructor
    public Processor() {
    }

    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    // setter and getter
    public void setName(String name) {
        this.name = name;
    } 

    public String getName() {
        return this.name;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

    // method
    public void printProcessor() {
        System.out.println("Processor Name      : " + this.getName());
        System.out.println("Processor Price     : Rp " + this.getPrice() + ",-");
    }
}
