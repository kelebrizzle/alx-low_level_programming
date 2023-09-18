#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to standard output
 * @c: The character to write
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _islower - Checks for a lowercase character
 * @c: The character to check
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks for an alphabetic character
 * @c: The character to check
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
    return _islower(c) || _isupper(c);
}

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer
 * Return: The absolute value of n
 */
int _abs(int n)
{
    return (n < 0) ? -n : n;
}

/**
 * _isupper - Checks for an uppercase character
 * @c: The character to check
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks for a digit (0-9)
 * @c: The character to check
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The string
 * Return: The length of s
 */
int _strlen(char *s)
{
    int length = 0;
    while (*s)
    {
        length++;
        s++;
    }
    return length;
}

/**
 * _puts - Writes a string to standard output
 * @s: The string to write
 */
void _puts(char *s)
{
    while (*s)
    {
        _putchar(*s);
        s++;
    }
}

/**
 * _strcpy - Copies a string to a destination
 * @dest: The destination
 * @src: The source string
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  /* Add null terminator */
    return start;
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }

    while (*s)
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}
