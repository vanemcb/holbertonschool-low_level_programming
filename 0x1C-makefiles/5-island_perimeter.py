#!/usr/bin/python3

def island_perimeter(grid):
    array_index = []
    for index, value in enumerate(grid):
        list_index = []
        for index2, value2 in enumerate(value):
            if value2 == 1:
                list_index.append(index2)
        array_index.append(list_index)
    print(array_index)
