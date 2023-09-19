/**
 * _strlen - returns the lenght of the string
 * @s :the string to calculate its lenght
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
