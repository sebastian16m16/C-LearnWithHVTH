gcc -c main.c -o Obj/main.o
gcc -c Increment/Increment.c -o Obj/Increment.o
gcc -c Arrays/ArrayFunctions.c -o Obj/ArrayFunctions.o
gcc Obj/main.o Obj/Increment.o Obj/ArrayFunctions.o -o Run_Learning
./Run_Learning