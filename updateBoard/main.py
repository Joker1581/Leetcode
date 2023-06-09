from typing import List

class Solution:
    def updateBoard(self, board: List[List[str]], click: List[int]) -> List[List[str]]:

        def adjacent_mines(i, j):
            mines = 0
            for x, y in directions:
                if 0 <= i + x < M and 0 <= j + y < N and board[i + x][j + y] == "M":
                    mines += 1
            return mines
        
        def dfs(i, j):
            
            
            mines = adjacent_mines(i, j)
            if mines:
                board[i][j] = str(mines)
                return board
            
            
            board[i][j] = "B"
            
            for x, y in directions:
                if 0 <= i + x < M and 0 <= j + y < N and board[i + x][j + y] == "E":
                    dfs(i + x, j + y)
            return board
            
        
        if not board: return board
        M = len(board)
        N = len(board[0])
        
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0), (1,1), (1,-1), (-1,1), (-1,-1)]
        
        
        if board[click[0]][click[1]] == "M":
            board[click[0]][click[1]] = "X"
            return board
        
        if board[click[0]][click[1]] == "E":
            return dfs(click[0], click[1])