"""Problem Statement:- 
Find the minimum number of dice throws required to reach the destination(last cell) from the source(first cell) in the given snake and ladder board."""

# It is implemented similar to finding the shortest path between source and destination using BFS approach.

# Class for an entry used in BFS.
class queueEntry(object):
    def __init__(self, v=0, dist=0):
        self.v = v
        self.dist = dist


# Function to find minimum number of dice throws, move is the array of size n , where n is the total number of cells on the board.
# if there is no ladder or snake from cell i, move[i] contains -1, otherwise, move[i] contains the cell number to which the snake or ladder takes to.


def minThrows(move, n):
    visited = False * n
    queue = []
    visited[0] = True
    queue.append(queueEntry(0, 0))

    front = queueEntry()
    while queue:
        que = queue.pop(0)
        v = front.v

        if v == n - 1:
            break

        j = v + 1
        while j <= v + 6 and j < n:
            if visited[j] is False:
                a = queueEntry()
                a.dist = front.dist + 1
                visited[j] = True

                a.v = move[j] if move[j] != -1 else j
                queue.append(a)
            j += 1
    return front.dist


# Driver Program to test above code
n = 30
entries = [-1] * n

# Ladders
entries[2] = 21
entries[4] = 7
entries[10] = 25
entries[19] = 28

# Snakes
entries[26] = 0
entries[20] = 8
entries[16] = 3
entries[18] = 6

print("Minimum number of dice throws required is {0}.".format(minThrows(entries, n)))


# Output
# Minimum number of dice throws required is 3.

# Time Complexity- O(N)
