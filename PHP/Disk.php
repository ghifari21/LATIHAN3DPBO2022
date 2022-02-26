<?php

class Disk {
    private $type;      // menampung tipe
    private $capacity;  // menampung kapasitas
    private $price;     // menampung harga

    // constructor
    function __construct($type, $capacity, $price) {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // setter and getter
    function setType($type) {
        $this->type = $type;
    }

    function getType() {
        return $this->type;
    }

    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }

    function getCapacity() {
        return $this->capacity;
    }

    function setPrice($price) {
        $this->price = $price;
    }

    function getPrice() {
        return $this->price;
    }

    // method
    function printDisk() {
        echo "Disk Type         : ". $this->getType(). "<br/>";
        echo "Disk Capacity     : ". $this->getCapacity(). "<br/>";
        echo "Disk Price        : Rp ". $this->getPrice(). ",-<br/>";
    }
}

?>