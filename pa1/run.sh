
export exe=${1:-time}
export output=${2:-output}
${exe} ./insertionSort.bin data/case4.dat ${output}_insertion
echo ""
${exe} ./mergeSort.bin data/case4.dat ${output}_merge
echo ""
${exe} ./heapSort.bin data/case4.dat ${output}_heap
echo ""
${exe} ./quickSort.bin data/case4.dat ${output}_quick

