
import matplotlib.pyplot as plt
import numpy as np

assert np

x = np.array([1362, 9216, 82360, 185462])
insertionTime = np.array([0.028, 0.299, 19.13, 89.969])
mergeTime = np.array([0.016, 0.037, 0.203, 0.547])
heapTime = np.array([0.016, 0.044, 0.306, 0.6])
quickTime = np.array([0.016, 0.039, 0.265, 0.54])

insertionMem = np.array([0.147886, 0.937044, 7.622129, 16.160612])
mergeMem = np.array([0.20507, 1.424468, 13.027761, 29.207148])
heapMem = np.array([0.147886, 0.937044, 7.622129, 16.160612])
quickMem = np.array([0.147886, 0.937044, 7.622129, 16.160612])


fig, axs = plt.subplots(2, 2, constrained_layout=True)
axs[0,0].plot(x,insertionMem)
axs[0,0].set_title('Insertion Sort')
axs[0,0].set_xlabel('input size')
axs[0,0].set_ylabel('Memory(MB)')

axs[0,1].plot(x,mergeMem)
axs[0,1].set_title('Merge Sort')
axs[0,1].set_xlabel('input size')
axs[0,1].set_ylabel('Memory(MB)')

axs[1,0].plot(x,heapMem)
axs[1,0].set_title('Heap Sort')
axs[1,0].set_xlabel('input size')
axs[1,0].set_ylabel('Memory(MB)')

axs[1,1].plot(x,quickMem)
axs[1,1].set_title('Quick Sort')
axs[1,1].set_xlabel('input size')
axs[1,1].set_ylabel('Memory(MB)')

fig.suptitle('Space Complexity', fontsize=16)
plt.show()
