#!/usr/bin/python3

def island_perimeter(grid):
    """return the perimeter of island

    Args:
        grid: 2D List of integer zeros and ones
    """

    row = len(grid)
    col = len(grid[0])
    perimeter = 0

    for r in range(row):
        for c in range(col):
            if grid[r][c]:
                if grid[r - 1][c] == 0:
                    perimeter += 1
                if grid[r + 1][c] == 0:
                    perimeter += 1
                if grid[r][c - 1] == 0:
                    perimeter += 1
                if grid[r][c + 1] == 0:
                    perimeter += 1
    return perimeter
