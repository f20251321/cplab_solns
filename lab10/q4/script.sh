gcc -c reverseByRef.c -o reverseByRef.o
gcc -c reverseByPtr.c -o reverseByPtr.o
gcc -c reverseMain.c -o reverseMain.o
gcc reverseMain.o reverseByRef.o reverseByPtr.o -o reverse_program
./reverse_program
