/**
 * leet - translates string to 1337
 * 
 * @string: pointer to string
 * 
 * Return: returns translated string
 */

char *leet(char *s)
{
int i, c = 0;
int sI[] = {97, 101, 111, 116, 108};
int uI[] = {65, 69,79,84, 76};
int n[] = {52, 51, 48, 55, 49};

while (s[c] != '\0')
{
for (i = 0; i < 5; i++)
{
if (s[c] == sI[i] || s[c] == uI[i])
{
s[c] = n[i];
break;
}
}
c++;
}
return (s);
}
