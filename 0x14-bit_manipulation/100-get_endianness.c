#include "main.h"

/**
  * get_endianness - check if little endian or big endian
  * Description: if last bit (MSB) is 0 it will be big endian
  * else will be little endian
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;
	/* if c points to 0 it will be big endian, else it will be little */

	if (*c)
		return (1);
	return (0);
}
