#!/usr/bin/python3
"""
island_perimeter(grid): returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    a method that loops through the grid and meaures perimeter
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    for i in range(rows):
        for j in range(cols):
            try:
                if grid[i - 1][j] == 0 and grid[i][j] > 0:
                    perimeter += 1
            except IndexError:
                if grid[i][j] > 0:
                    perimeter += 1
            try:
                if grid[i + 1][j] == 0 and grid[i][j] > 0:
                    perimeter += 1
            except IndexError:
                if grid[i][j] > 0:
                    perimeter += 1
            try:
                if grid[i][j - 1] == 0 and grid[i][j] > 0:
                    perimeter += 1
            except IndexError:
                if grid[i][j] > 0:
                    perimeter += 1
            try:
                if grid[i][j + 1] == 0 and grid[i][j] > 0:
                    perimeter += 1
            except IndexError:
                if grid[i][j] > 0:
                    perimeter += 1
    return perimeter
