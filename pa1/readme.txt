1. 學號：b04901136
2. 姓名：張家銘
3. 使用之程式語言：< C++ >
4. 使用之編譯器：< GNU g++ >
5. 檔案壓縮方式: <zip -r b04901136_p1_v0.zip pa1>
6. 各檔案說明：
	 pa1/build/*          : cmake相關資料
	 pa1/data/*           : 測資
	 pa1/lib/*            : 純文字Library
	 pa1/src/*/*          : 純文字主程式
	 pa1/hw1.pdf          : 作業說明
	 pa1/CMakeLists.txt   : CMakeList
	 pa1/readme.txt       : readme

7. 編譯方式說明：        	
   主程式：pa1/src/
	 請創建build資料夾
     mkdir build
   在build目錄下，鍵入cmake指令
     cmake ..
   在build目錄下，鍵入make指令
     make
   即可完成編譯，
	 ( Makefile原先下的 Optimize 指令為 -O3 )
           . . . . . .  
8. 執行、使用方式說明：
   主程式：
   編譯完成後，在檔案目錄下會產生四個執行檔
     insertionSort
     mergeSort
     heapSort
     quickSort
   執行檔的命令格式為：
   <executable_file_name> <input file name> <output file name>
   例如：要對 case4.dat 作 insertionSort，並且寫入output.dat
   則在命令提示下鍵入
   bash insertionSort case4.dat output.dat

           . . . . . .         
9. 執行結果說明（說明執行結果的觀看方法，及解釋各項數據等）：
   主程式：
	 主程式執行時不會在 console 輸出sort結果。
	 輸出檔第一行為總共字串數量，之後為sort結果。
	
