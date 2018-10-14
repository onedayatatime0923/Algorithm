
export exe=${1:-data/case4.dat}
export output=${2:-output}
time ./insertionSort ${exe} ${output}_insertion
valgrind ./insertionSort ${exe} ${output}_insertion
echo ""
time ./mergeSort ${exe} ${output}_merge
valgrind ./mergeSort ${exe} ${output}_merge
echo ""
time ./heapSort ${exe} ${output}_heap
valgrind ./heapSort ${exe} ${output}_heap
echo ""
time ./quickSort ${exe} ${output}_quick
valgrind ./quickSort ${exe} ${output}_quick
