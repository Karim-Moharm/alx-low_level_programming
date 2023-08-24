#!/usr/bin/python3
"""module to calculate the island perimeter
"""


def island_perimeter(grid):
    """return the perimeter of island

    Args:
        grid: 2D List of integer zeros and ones
    """

    row = len(grid)
    col = len(grid[0])
    perimeter = 0
    one_found = 0

    for r in range(row):
        for c in range(col):
            if grid[r][c]:
                perimeter += 4

                if r > 0 and grid[r - 1][c] == 1:
                    one_found += 1
                if c >  0 and grid[r][c - 1] == 1:
                    one_found += 1

    return perimeter - (2 * one_found)
