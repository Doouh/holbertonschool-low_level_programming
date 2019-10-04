#include "holberton.h"

/**
* infinite_add - Entry point
* @n1: char variable
* @n2: char variable
* @r: char variable
* @size_r: int variable
*
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int tm1 = 0, tm2 = 0, i1, i2, ir, nag, ban = 0, iu;

        while (n1[tm1])
                tm1++;
        while (n2[tm2])
                tm2++;
                
        i1 = tm1 - 1;
        i2 = tm2 - 1;
        ir = 0;
        while (i1 >= 0 && i2 >= 0)
        {
            if (!ban)
                nag = (n1[i1] - '0') + (n2[i2] - '0');
            else
                nag = (n1[i1] - '0') + (n2[i2] - '0') + 1;
            ban = 0;
            if (nag > 9)
            {
                if (ir == size_r - 1)
                    return (0);
                r[ir] = '0' + (nag % 10);
                ban = 1;
            }
            else
                r[ir] = '0' + nag;
                
            ir++;
            i1--;
            i2--;
            if (ir == (size_r - 1) && i1 > 0)
                return (0);
        }
        
        if (tm1 > tm2)
        {
            iu = tm1 - tm2;
            while (ir < size_r && iu >= 0)
            {
                r[ir] = n1[iu];
                iu--;
                ir++;
            }
        }  
            
        if (tm2 > tm1)
        {
            iu = tm2 - tm1;
            while (ir < size_r && iu >= 0)
            {
                r[ir] = n2[iu];
                iu--;
                ir++;
            }
        }    

        return (r);
}
