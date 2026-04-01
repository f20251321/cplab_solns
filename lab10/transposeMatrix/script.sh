gcc -c transpose.c
gcc -c transposeMain.c
gcc -o exe transpose.o transposeMain.c
./exe
