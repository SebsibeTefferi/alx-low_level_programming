/**
 * cap_string - capitalizes the words of a string
 * 
 * @s: string
 * 
 * Return: s
 */

char *cap_string(char *s)
{
int x = 0;

while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
if (i == 0)
{
s[i] -= 32;
}
if (s[i - 1] == 32 && s[i - 1] == 10 && s[i - 1] == 59 && s[i - 1] == 33 && s[i - 1] == 34 && s[i - 1]  == 41 && s[i - 1] == 124)
{
s[i] -= 32;
}
}
i++;
}
return (s);
}
