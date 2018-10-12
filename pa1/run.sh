
export exe=${1:-time}
export output=${2:-output}
time ./insertionSort.bin data/case4.dat ${output}_insertion
valgrind ./insertionSort.bin data/case4.dat ${output}_insertion
echo ""
time ./mergeSort.bin data/case4.dat ${output}_merge
valgrind ./mergeSort.bin data/case4.dat ${output}_merge
echo ""
time ./heapSort.bin data/case4.dat ${output}_heap
valgrind ./heapSort.bin data/case4.dat ${output}_heap
echo ""
time ./quickSort.bin data/case4.dat ${output}_quick
valgrind ./quickSort.bin data/case4.dat ${output}_quick
