rm *.o
rm exe
gcc -c marks.c
gcc -c student_funcs.c
gcc -o exe marks.o student_funcs.o
./exe
