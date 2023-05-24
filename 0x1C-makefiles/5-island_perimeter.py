#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list[list[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    if not grid or not grid[0]:
        return 0

    rows = len(grid)
    cols = len(grid[0])

    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Add 4 to the perimeter for each land cell

                # Check neighboring cells
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 if there is a neighboring land cell to the top
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 if there is a neighboring land cell to the left

    return perimeter
