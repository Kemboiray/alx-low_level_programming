#!/usr/bin/python3
"""
Defines functions to calculate the perimeter of an island defined by
a 2-D matrix of integers (grid) with 0's representing water and 1's
representing land.

One cell is a square of unit side length. Grid cells are connected
horizontally and vertically, not diagonally. The grid has no more than
100 rows or columns.
"""


def island_perimeter(grid: list):
    """Return the perimeter of ``grid`` """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 3 - grid[i-1][j] - grid[i+1][j]
                - grid[i][j-1] - grid[i][j+1]
    return perimeter + 1
