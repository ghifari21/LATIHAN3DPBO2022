class Processor:
    __name = "" # menampung nama processor
    __price = 0 # menampung harga

    # constructor
    def __init__(self, name = "", price = 0):
        self.__name = name
        self.__price = price

    # setter and getter
    def setName(self, name):
        self.__name = name
    
    def getName(self):
        return self.__name

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price

    # method
    def printProcessor(self):
        print("Processor Name   : " + str(self.getName()))
        print("Processor Price  : Rp " + str(self.getPrice()) + ",-")