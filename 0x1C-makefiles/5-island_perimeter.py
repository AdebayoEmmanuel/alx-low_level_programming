#!/usr/bin/env python3
"""
island_perimeter(grid): returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    a method that loops through the grid and meaures perimeter
    """
    perimeter = 0
    rows = len(grid) - 1
    cols = len(grid[0]) - 1
    for i in range(1, rows):
        for j in range(1, cols):
            if grid[i-1][j] == 0 and grid[i][j] > 0:
                perimeter += 1
            if grid[i+1][j] == 0 and grid[i][j] > 0:
                perimeter += 1
            if grid[i][j-1] == 0 and grid[i][j] > 0:
                perimeter += 1
            if grid[i][j + 1] == 0 and grid[i][j] > 0:
                perimeter += 1
    return perimeter
