
export exe=${1:-time}
export output=${2:-output}
time ./insertionSort data/case4.dat ${output}_insertion
valgrind ./insertionSort data/case4.dat ${output}_insertion
echo ""
time ./mergeSort data/case4.dat ${output}_merge
valgrind ./mergeSort data/case4.dat ${output}_merge
echo ""
time ./heapSort data/case4.dat ${output}_heap
valgrind ./heapSort data/case4.dat ${output}_heap
echo ""
time ./quickSort data/case4.dat ${output}_quick
valgrind ./quickSort data/case4.dat ${output}_quick
