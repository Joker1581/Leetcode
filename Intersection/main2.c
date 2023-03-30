#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
int count1[1001] = {0};
for(int i = 0 ; i < nums1Size ; i++){
count1[nums1[i]]++;
}
int ptr = 0;
int* ans = (int*)malloc(sizeof(int)*1001);
for(int i = 0 ; i < nums2Size ; i++){
if(count1[nums2[i]]!=0){
count1[nums2[i]]--;
ans[ptr++] = nums2[i];
}
}
*returnSize = ptr;
return ans;
}