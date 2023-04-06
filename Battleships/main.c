#include <stdio.h>
#include <stdlib.h>

void dfs (char **board, int r, int c, int boardSize, int *boardColSize){
    if (r < 0 || c < 0 || r >= boardSize || c >= *boardColSize || board[r][c] != 'X')
        return;
    
    board[r][c] = 'Z';
    dfs(board, r+1, c, boardSize, boardColSize) ; dfs(board, r-1, c, boardSize, boardColSize);
    dfs(board, r, c+1, boardSize, boardColSize) ; dfs(board, r, c-1, boardSize, boardColSize);
}

int countBattleships(char** board, int boardSize, int* boardColSize){
    int res = 0;
    for (int r = 0; r < boardSize; r++){
        for (int c = 0; c < *boardColSize; c++){
            if (board[r][c] == 'X')
            {
                res ++;
                dfs(board, r, c, boardSize, boardColSize);
            }
        }
    }
    return res;
}

int main()
{
    int a = 2;
    int* p = &a;
    char a1[2][2] = {{'X','.'},{'.','X'}};
    char** p1 = (char**)a1;
    printf("%d", countBattleships(p1, 2, p));
    return 0;
}
