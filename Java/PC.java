public class PC {
    private Processor processorObj;  // menampung processor
    private RAM ramObj;     // menampung RAM
    private Disk diskObj;   // menampung disk
    private int totalPrice; // menampung total harga

    // constructor
    public PC() {
    }

    public PC(Processor processorObj, RAM ramObj, Disk diskObj, int totalPrice) {
        this.processorObj = processorObj;
        this.ramObj = ramObj;
        this.diskObj = diskObj;
        this.totalPrice = totalPrice;
    }

    // setter and getter
    public void setProcessor(Processor processorObj)
    {
        this.processorObj = processorObj;
    }

    public Processor getProcessor()
    {
        return this.processorObj;
    }

    public void setDisk(Disk diskObj)
    {
        this.diskObj = diskObj;
    }

    public Disk getDisk()
    {
        return this.diskObj;
    }

    public void setRAM(RAM ramObj)
    {
        this.ramObj = ramObj;
    }

    public RAM getRAM()
    {
        return this.ramObj;
    }

    public void setTotalPrice(int totalPrice)
    {
        this.totalPrice = totalPrice;
    }

    public int getTotalPrice()
    {
        return this.totalPrice;
    }

    // method
    public void printPC() {
        System.out.println("Computer Specification :");
        this.processorObj.printProcessor();
        this.ramObj.printRAM();
        this.diskObj.printDisk();
        System.out.println("Total Price         : Rp " + this.getTotalPrice() + ",-");
    }
}
