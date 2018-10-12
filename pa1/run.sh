
cd build
make
cd ..
export output=${1:-output}
./insertionSort data/case4.dat ${output}_insertion
./mergeSort data/case4.dat ${output}_merge
./heapSort data/case4.dat ${output}_heap
./quickSort data/case4.dat ${output}_quick

