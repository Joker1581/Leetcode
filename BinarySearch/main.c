#include <stdio.h>
#include <stdlib.h>
int search(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;
    
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        
        if (nums[middle] == target)
            return middle;
        
        else if (nums[middle] < target)
            left = middle + 1;
        
        else
            right = middle - 1;
    }
    return -1;
}
int find(int a[], int r, int l, int key)
{
	int mid = 0;
	while (l<=r)//n=r的时候，有且仅有一个数字，要讨论
	{
		mid = (l + r) / 2;
		if (a[mid] < key)
			return	find(a, r, mid + 1, key);
		else if (a[mid] > key)
			return find(a, mid - 1, l, key);
		else
			return mid;
	}
	return -1;
}
