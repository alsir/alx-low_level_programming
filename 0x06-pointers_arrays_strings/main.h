#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c);
/**
 * _strcat - Concatenate two strings
 * @src: The string to be appended
 * @dest: The string to append to it
 * Return: The pointer to the destination.~
 */
char *_strcat(char *dest, char *src);
/**
 *  _strncat - Concatenate two strings
 *  @src: The string to be appended
 *  @dest: The string to append to it
 *  @n: The number of the concatenated chracters
 *  Return: The pointer to the destination.~
 */
char *_strncat(char *dest, char *src, int n);
#endif
