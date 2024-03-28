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

    perimeter = 0
    edges = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += 1
                if (col > 0) and (grid[row][col - 1] == 1):
                    edges += 1
                if (row > 0) and (grid[row - 1][col] == 1):
                    edges += 1
    return ((perimeter * 4) - (edges * 2))
