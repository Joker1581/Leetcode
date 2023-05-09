#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize){
    qsort(seats, seatsSize, sizeof(int), cmpfunc);
    qsort(students, studentsSize, sizeof(int), cmpfunc);
    int res = 0;
    for (int i = 0; i < seatsSize; i++)
    {
        /* code */
        res += abs(seats[i] - students[i]);
    }
    return res;
}
