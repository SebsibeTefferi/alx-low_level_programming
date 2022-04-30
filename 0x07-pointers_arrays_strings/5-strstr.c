#include "main.h"
/**
 * _strstr - prints  the conscuetive characters of s1 that are in s2
 * @haystack: source string
 * @needle: searching string
 * Retrun: new string
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
{
return (haystack);
}
else
{
haystack++;
}
}
return (0);
}

int coincidence(char *a, char *b)
{
while (*b && *b == *a)
{
b++;
a++;
}
if (*b == '\0')
return (1);
else
return (0);
}
