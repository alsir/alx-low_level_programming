/**
 * swap_int - Swap the values of two integers
 * @a: The first element to be swapped
 * @b: The second elementto be swapped
 *
 *  Return:void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b =tmp;
}
