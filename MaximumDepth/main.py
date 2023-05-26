class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        def rec(root):
            if root:
                curr = 1
                for node in root.children:
                    curr = max(curr, 1+rec(node))
                return curr
            return 0
        return rec(root)