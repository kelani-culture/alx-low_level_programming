#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 as success 
 */
int main(void) {
write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 55);
return 1;
}
