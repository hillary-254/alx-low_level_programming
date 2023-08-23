#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists of integers where 0 represents
        water and 1 represents land.

    Returns:
        int: The perimeter of the island.

    Notes:
        - One cell is a square with a side length of 1.
        - Grid cells are connected horizontally/vertically (not diagonally).
        - The grid is rectangular, with a width and height that don't exceed
        100.
        - The grid is completely surrounded by water, and there is one island
        (or nothing).
        - The island doesn't have "lakes" (water inside that isn't connected
        to the water around the island).
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
