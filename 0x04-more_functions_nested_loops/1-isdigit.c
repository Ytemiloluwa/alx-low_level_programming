/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{   
    int upper = 1;
    int lower = 0;
    if (c >= '0' && c <= '9')
		return upper;
    else
		return lower;
}
