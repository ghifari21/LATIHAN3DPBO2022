<?php

class Processor {
    private $name;  // menampung nama processor
    private $price; // menampung harga

    // constructor
    function __construct($name, $price) {
        $this->name = $name;
        $this->price = $price;
    }

    // setter and getter
    function setName($name) {
        $this->name = $name;
    }

    function getName() {
        return $this->name;
    }

    function setPrice($price) {
        $this->price = $price;
    }

    function getPrice() {
        return $this->price;
    }

    // method
    function printProcessor() {
        echo "Processor Name    : ". $this->getName(). "<br/>";
        echo "Processor Price   : Rp ". $this->getPrice(). ",-<br/>";
    }
}

?>