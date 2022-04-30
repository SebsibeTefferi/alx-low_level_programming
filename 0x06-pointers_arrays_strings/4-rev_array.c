/**
 * reverse_array - reverses content of an array of integers
 * 
 * @a: array of integers
 * @n: numbers of elements of array
 * 
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
int temp, s, e;

s = 0;
e = n - 1;
while (s < e)
{
temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
