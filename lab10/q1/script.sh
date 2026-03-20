gcc -c circle.c -o circle.o
gcc -c circle_main.c -o circle_main.o
gcc circle_main.o circle.o -o circle_program
./circle_program