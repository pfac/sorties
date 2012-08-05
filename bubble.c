/**
 * Sorts an array using the bubble sort algorithm
 *
 ** Bubble sort:
 * For each element in the array, compare it with the next one. If the current one is larger, swap; this will push the largest element to the end of the array. Repeat until all the elements are ordered.
 */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10
#define MAX 100

void sort ( long * array , long unsigned size )
{
	long unsigned i;
//	long unsigned ilast = size - 1;
	long unsigned j;
	long unsigned jlast;

	for ( i = size ; i ; --i )
	{
		jlast = i - 1;
		for ( j = 0 ; j < jlast ; ++j )
			if ( array[j] > array[j+1] )
			{
				long aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
	}
}

int main ()
{
	long array[ARRAY_SIZE];
	long unsigned i;
	
	printf("Array:\n\t");
	
	for ( i = 0 ; i < ARRAY_SIZE ; ++i ) {
		array[i] = rand() % MAX;
		printf("%ld ",array[i]);
	}
	printf("\n");

	getchar();

	printf("Sorting...\n");
	sort( array , ARRAY_SIZE );

	printf("Result:\n\t");
	
	for ( i = 0 ; i < ARRAY_SIZE ; ++i )
		printf("%ld ",array[i]);
	printf("\n");

	return 0;
}

