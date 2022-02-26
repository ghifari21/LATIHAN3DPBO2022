class Disk:
    __type = ""     # menampung tipe
    __capacity = "" # menampung capacity
    __price = 0     # menampung harga

    # constructor
    def __init__(self, type = "", capacity = "", price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    # setter and getter
    def setType(self, type):
        self.__type = type
    
    def getType(self):
        return self.__type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
    
    def setPrice(self, price):
        self.__price = price
    
    def getPrice(self):
        return self.__price

    # method
    def printDisk(self):
        print("Disk Type        : " + str(self.getType()))
        print("Disk Capacity    : " + str(self.getCapacity()))
        print("Disk Price       : Rp " + str(self.getPrice()) + ",-")