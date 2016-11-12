/* This c program demontstrates the basics of pointers. It explains:               */
/* - pointers                                                                      */
/* - pointer declarations by the * prefix                                          */
/* - the & operator                                                                */
/* - the * prefix                                                                  */
/* - the main advantage of using pointers by passing memory locations rather       */
/*   than tossing around the data between functions                                */
/* This example originated from: http://cslibrary.stanford.edu/102/                */

#include <stdio.h>		// needed for printf

void Swap(int* a, int* b)	// a and b are pointers to an integer
{
	int temp;

	printf("*a=%i, *b=%i, a=%p, b=%p \n",*a, *b, a, b);
				// * indicates the value the pointer is pointing to
	temp = *a;
	*a = *b;
	*b = temp;
}

void SwapCaller()
{
	int x = 1;
	int y = 2;

	printf("x=%i, y=%i, &x=%p, &y=%p \n",x,y,&x,&y);

	Swap(&x, &y);		// & indicates the memory address of the variable

	printf("x=%i, y=%i, &x=%p, &y=%p \n",x,y,&x,&y);
}

void main()
{
	SwapCaller();
}
