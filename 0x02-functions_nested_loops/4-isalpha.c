#include "main.h"

/**
* _isalpha - checkes for alphabet
* @c: the alphabet to be checked
* Return: 1 for alphabet or 0 anything else
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
