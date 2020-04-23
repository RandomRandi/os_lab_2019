#include "swap.h"

void Swap(char *left, char *right)
{
     *right = *left + *right; //  = a +b
    *left = *right - *left;  // = 
    *right = *right - *left; //

}
