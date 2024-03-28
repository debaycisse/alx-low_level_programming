#!/usr/bin/env python3
"""This module contains the definition of
island_perimeter function"""

def island_perimeter(grid):
    """This function computes the perimeter of a given
    island and returns the result of the computation

    Args:
        grid - a list of list of the integers 
        that represent land and water

    Returns:
        The result of the computation of obtaining 
        the perimeter
    """
    last_land_i = None
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (j == 0) and (i == 0):
                if grid[i][j] == 1:
                    perimeter += 4
                    last_land_i = j
            elif (j > 0) and (i == 0):
                if grid[i][j] == 1:
                    perimeter += 4
                    if grid[i][j - 1] == 1:
                        perimeter -= 2
            elif (j == 0) and (i > 0):
                if grid[i][j] == 1:
                    perimeter += 4
                    if grid[i][j + 1] == 1:
                        perimeter -= 2
                    if grid[i - 1][j] == 1:
                        perimeter -= 2
            elif (j > 0) and (i > 0):
                if grid[i][j] == 1:
                    perimeter += 4
                    if grid[i][j - 1] == 1:
                        perimeter -= 2
                    if grid[i - 1][j] == 1:
                        perimeter -= 2
    return perimeter
