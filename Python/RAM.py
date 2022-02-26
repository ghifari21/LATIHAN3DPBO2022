class RAM:
    __capacity = "" # menampung kapasitas
    __price = 0     # menampung harga

    # constructor
    def __init__(self, capacity = "", price = 0):
        self.__capacity = capacity
        self.__price = price

    # setter and getter
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
    
    def setPrice(self, price):
        self.__price = price
    
    def getPrice(self):
        return self.__price

    # method
    def printRAM(self):
        print("RAM Capacity     : " + str(self.getCapacity()))
        print("RAM Price        : Rp " + str(self.getPrice()) + ",-")