#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int cmp(const void* a, const void* b) {
    const int* pa = *(const int**) a;
    const int* pb = *(const int**) b;
    if (pa[1] == pb[1]) return pa[0] - pb[0];
    return pb[1] - pa[1];
}

int maximumUnits(int** boxTypes, int boxTypesSize, int* boxTypesColSize, int truckSize) {
    qsort(boxTypes, boxTypesSize, sizeof(int*), cmp);
    int cnt = 0, num = 0;
    for (int i = 0; i < boxTypesSize; i++) {
        if (num + boxTypes[i][0] <= truckSize) {
            cnt += (boxTypes[i][0] * boxTypes[i][1]);
            num += boxTypes[i][0];
        } else {
            int diff = truckSize - num;
            num += diff;
            cnt += diff * boxTypes[i][1];
        }
        if (num == truckSize) break;
    }
    return cnt;
}