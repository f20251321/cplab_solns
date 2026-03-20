gcc -c student1.c -o student1.o
gcc -c student2.c -o student2.o
gcc -c student3.c -o student3.o

gcc -c checkAnswers.c -o checkAnswers.o

gcc checkAnswers.o student1.o -o test_student1
gcc checkAnswers.o student2.o -o test_student2
gcc checkAnswers.o student3.o -o test_student3

echo "Student 1:"
./test_student1

echo "Student 2:"
./test_student2

echo "Student 3:"
./test_student3