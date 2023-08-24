#!/usr/bin/python3

""""
    calculate perimeters of the island described in grid
"""
def island_perimeter(grid):
    """
        calculate perimeter
    """
    perimeter = 0
    
    rows = len(grid)
    cols = len(grid[0])
    
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:  # Check if it's a land cell
                perimeter += 4  # Assume 4 edges
                
                # Check neighboring cells (up, down, left, right)
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Deduct 2 for shared edge
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Deduct 2 for shared edge
                    
    return perimeter
