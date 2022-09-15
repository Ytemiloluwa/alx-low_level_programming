#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{ 
    int upper = 1;
    int lower = 0;
    if (c >= 'A' && c <= 'Z')
        return upper;
    else
        return lower;
}
