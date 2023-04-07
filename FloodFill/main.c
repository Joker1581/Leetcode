#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void fill(int** image, int imageSize,int* imageColSize, int sr, int sc, int color, int newColor) 
{
    if (sr < 0 || sr >= imageSize || sc < 0 || sc >= *imageColSize || image[sr][sc] != color) return;
    image[sr][sc] = newColor;
    fill(image, imageSize, imageColSize, sr + 1, sc, color, newColor);
    fill(image, imageSize, imageColSize, sr - 1, sc, color, newColor);
    fill(image, imageSize, imageColSize, sr, sc + 1, color, newColor);
    fill(image, imageSize, imageColSize, sr, sc - 1, color, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes) 
{
    int newColor = color;
    color = image[sr][sc];
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    if (image[sr][sc] == newColor) return image;
    fill(image, imageSize, imageColSize, sr , sc, color, newColor);
    return image;
}