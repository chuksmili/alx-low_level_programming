#include "main.h"

/**
* _islower - checks lowercase character
*@c: character to be checked
*Return 1 for lower chracter or 0 anything
*/
int _islower(int c)
{
	if (c >= 97 && c<= 122)
	{
		return (1);
	}
	return (0);
}
