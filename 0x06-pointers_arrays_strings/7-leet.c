/**
 * leet - Encode a string
 * @str: The string to be encoded
 * Return: A pointer to the modified string1~
 */
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '_', 'E', 'A', '_', '_', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)~
		{
			if (str[index1] == leet[index2] ||
			    str[index1] - 32 == leet[index2])
			{
				str[index1] = index2 + '0';
			}
		}
		index1++;
	}
	return (str);
}
