
cd build
cmake ..
make
cd ..
export exe=${1:-time}
export output=${2:-output}
$1 ./insertionSort.bin data/case4.dat ${output}_insertion
$1 ./mergeSort.bin data/case4.dat ${output}_merge
$1 ./heapSort.bin data/case4.dat ${output}_heap
$1 ./quickSort.bin data/case4.dat ${output}_quick

