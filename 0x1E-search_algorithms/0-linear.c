#include <stdio.h>

/**
 * linear_search - a function that performs linear search
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to search for
 * Return: value if found else return -1
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;
    for (i = 0; i < size; i++) {
        printf("Value checked array[%ld] = [%d]\n",i, array[i]);
        if (array[i] == value) {
            return array[i];
        }
    }
    return (-1);
}
