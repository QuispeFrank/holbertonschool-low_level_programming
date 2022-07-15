#!/usr/bin/python3
""" 5. Island Perimeter """


def island_perimeter(grid):
    """ Perimeter of my square """
    Perimeter = 0
    max_x = len(grid)
    max_y = len(grid[0])
    land = 1
    for y in range(max_y):
        for x in range(max_x):
            if grid[x][y] == land:
                Perimeter += 4
                if x > 0 and grid[x - 1][y]:
                    Perimeter -= 1
                if x + 1 < max_x and grid[x + 1][y]:
                    Perimeter -= 1
                if y > 0 and grid[x][y - 1]:
                    Perimeter -= 1
                if y + 1 < max_y and grid[x][y + 1]:
                    Perimeter -= 1

    return Perimeter
