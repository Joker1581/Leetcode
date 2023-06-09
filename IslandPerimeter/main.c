#include <stdio.h>
#include <stdlib.h>
int dfs (int **grid, int r, int c, int gridSize, int *gridColSize){
    if (r < 0 || c < 0 || r >= gridSize || c >= *gridColSize || grid[r][c] == 0)
        return 1;
    if (grid[r][c] == 2)
        return 0;
    
    grid[r][c] = 2;
    return dfs(grid, r+1, c, gridSize, gridColSize) + dfs(grid, r-1, c, gridSize, gridColSize) +
        dfs(grid, r, c+1, gridSize, gridColSize) + dfs(grid, r, c-1, gridSize, gridColSize);
}

int islandPerimeter(int** grid, int gridSize, int* gridColSize){
    for (int r = 0; r < gridSize; r++){
        for (int c = 0; c < *gridColSize; c++){
            if (grid[r][c] == 1)
                return dfs(grid, r, c, gridSize, gridColSize);
        }
    }
    return 0;
}