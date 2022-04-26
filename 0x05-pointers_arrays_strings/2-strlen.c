#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 *
 * Return:int
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
