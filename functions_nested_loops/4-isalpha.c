#include "main.h"
/**
 * _isalpha - entry point for check alphabetic character
 * @c: thecharacter to check
 * Return: 1 if uppercase, 0 if lowercase
 *
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
else if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
