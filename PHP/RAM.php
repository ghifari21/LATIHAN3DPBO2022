<?php

class RAM {
    private $capacity;  // menampung kapasitas
    private $price;     // menampung harga

    // constructor
    function __construct($capacity, $price) {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // setter and getter
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
    function printRAM() {
        echo "RAM Capacity      : ". $this->getCapacity(). "<br/>";
        echo "RAM Price         : Rp ". $this->getPrice(). ",-<br/>";
    }
}

?>