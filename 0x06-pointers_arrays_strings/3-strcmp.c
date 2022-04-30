/**
 * _strcmp - function that compares two strings
 * 
 * @s1: string to be compared
 * @s2: string to be compared
 * 
 * Return: negative if s1 <s2; 0 if matching and postivie int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, r;

/**
 * iterate through src and compare it with dest
 */
while (s1[i] != '\0' && s2[i] != '\0')
{
/**
 * if they differ by a single character don't iterate further
 */
if (s1[i] != s2[i])
{
/**
 * return the difference between the two charachters
 */
r = s1[i] - s2[i];
break;
}
else
{
r = s1[i] - s2[i];
}
i++;
}
return (r);
}
