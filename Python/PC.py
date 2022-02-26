from functools import total_ordering
from platform import processor
from Processor import Processor
from RAM import RAM
from Disk import Disk

class PC:
    __processorObj = Processor()    # menampung processor
    __ramObj = RAM()                # menampung ram
    __diskObj = Disk()              # menampung disk
    __totalPrice = 0                # menampung harga total

    # constructor
    def __init__(self, ProcessorObj, ramObj, diskObj, totalPrice = 0):
        self.__processorObj = ProcessorObj
        self.__ramObj = ramObj
        self.__diskObj = diskObj
        self.__totalPrice = totalPrice

    # setter and getter
    def setProcessor(self, processorObj):
        self.__processorObj = processorObj
    
    def getProcessor(self):
        return self.__processorObj

    def setRAM(self, ramObj):
        self.__ramObj = ramObj

    def getRAM(self):
        return self.__ramObj

    def setDisk(self, diskObj):
        self.__diskObj = diskObj
    
    def getDisk(self):
        return self.__diskObj
    
    def setTotalPrice(self, totalPrice):
        self.__totalPrice = totalPrice
    
    def getTotalPrice(self):
        return self.__totalPrice

    # method
    def printPC(self):
        print("Computer Specification:")
        self.__processorObj.printProcessor()
        self.__ramObj.printRAM()
        self.__diskObj.printDisk()
        print("Total Price      : Rp " + str(self.getTotalPrice()) + ",-")