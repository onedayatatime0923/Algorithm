
cd build
cmake ..
make
cd ..
export exe=${1:-time}
export output=${2:-output}
$1 ./insertionSort data/case4.dat ${output}_insertion
$1 ./mergeSort data/case4.dat ${output}_merge
$1 ./heapSort data/case4.dat ${output}_heap
$1 ./quickSort data/case4.dat ${output}_quick

