/**
 * swap_int - swaping 2 integer using a pointer
 * using two input parameters
 *
 * @a:integer
 * @b:integer
 * 
 * Return:void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
