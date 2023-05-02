#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
double average(int* salary, int salarySize){
    double max=salary[0], min=salary[0],sum=0;
    for(int i=0; i<salarySize; i++){
        if(max<salary[i]) max = salary[i];
        if(min>salary[i]) min = salary[i];
        sum += salary[i];
    }

    double ans = (sum-max-min)/(salarySize-2);
    return ans;
}