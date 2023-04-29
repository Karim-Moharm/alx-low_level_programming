#include <stdio.h>

 /**
   * Apply the constructor attribute to print_before() so that it
   * is executed before main()
   */

void print_before(void)__attribute__ ((constructor));

/**
  * print_before - finction print something before main
  * Return: void
  */

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house\
	upon my back!\n");
}
