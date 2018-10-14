
export exe=${1:-1}
export output=${2:-output}
time ./insertionSort data/case${1}.dat ${output}_insertion
valgrind ./insertionSort data/case${1}.dat ${output}_insertion
echo ""
time ./mergeSort data/case${1}.dat ${output}_merge
valgrind ./mergeSort data/case${1}.dat ${output}_merge
echo ""
time ./heapSort data/case${1}.dat ${output}_heap
valgrind ./heapSort data/case${1}.dat ${output}_heap
echo ""
time ./quickSort data/case${1}.dat ${output}_quick
valgrind ./quickSort data/case${1}.dat ${output}_quick
