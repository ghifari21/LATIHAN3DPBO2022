<?php

include "PC.php";

// inisialisasi
$cpu = new Processor("Ryzen 9 5900X", 8495000);
$memory = new RAM("32GB", 2600000);
$storage = new Disk("SSD", "2TB", 6000000);

// menghitung harga total
$totalPrice = $cpu->getPrice() + $memory->getPrice() + $storage->getPrice();

// masukan komponen ke pc
$computer = new PC($cpu, $memory, $storage, $totalPrice);

// output
$computer->printPC();

?>