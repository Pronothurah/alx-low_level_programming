#!/usr/bin/python3
"""
This module calculates the island perimeter
"""


def island_perimeter(grid):
    if not grid or not grid[0]:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Assume all sides are contributing

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Reduce 2 if left neighbor is land

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Reduce 2 if top neighbor is land

    return perimeter
