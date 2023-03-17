#include <stdio.h>
/**
 * main - Entry point
 * Description:it's a c program that execute a file
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("size of char is : %d byte(s)\n", sizeOf(char));
printf("size of int is : %d byte(s)\n", sizeOf(int));
printf("size of long is : %d byte(s)\n", sizeOf(long));
printf("size of float is : %d byte(s)\n", sizeOf(float));
return (0);
}
