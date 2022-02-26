<?php

include "Processor.php";
include "RAM.php";
include "Disk.php";

class PC {
    private $processorObj;  // menampung processor
    private $ramObj;        // menampung ram
    private $diskObj;       // menampung disk
    private $totalPrice;    // menampung harga total

    // constructor
    function __construct($processorObj, $ramObj, $diskObj, $totalPrice) {
        $this->processorObj = $processorObj;
        $this->ramObj = $ramObj;
        $this->diskObj = $diskObj;
        $this->totalPrice = $totalPrice;
    }

    // setter and getter
    function setProcessor($processorObj) {
        $this->processorObj = $processorObj;
    }

    function getProcessor() {
        return $this->processorObj;
    }

    function setRAM($ramObj) {
        $this->ramObj = $ramObj;
    }

    function getRAM() {
        return $this->ramObj;
    }

    function setDisk($diskObj) {
        $this->diskObj = $diskObj;
    }

    function getDisk() {
        return $this->diskObj;
    }

    function setTotalPrice($totalPrice) {
        $this->totalPrice = $totalPrice;
    }

    function getTotalPrice() {
        return $this->totalPrice;
    }

    // method
    function printPC() {
        echo "Computer Specification :<br/>";
        $this->processorObj->printProcessor();
        $this->ramObj->printRAM();
        $this->diskObj->printDisk();
        echo "Total Price       : Rp ". $this->getTotalPrice(). ",-<br/>";
    }
}

?>