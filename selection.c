/**
 * Sorts an array using the bubble sort algorithm
 *
 ** Bubble sort:
 * For each element in the array, compare it with the next one. If the current one is larger, swap; this will push the largest element to the end of the array. Repeat until all the elements are ordered.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10
#define MAX 100

#define min(a,b) ( (a) < (b) ? (a) : (b) )

void sort ( long * array , long unsigned size )
{
	long aux;
	long unsigned i;
	long unsigned j;
	long unsigned k;
	long min;

	for ( i = 0 ; i < size ; ++i )
	{
		k = i;
		min = array[i];
		for ( j = i + 1 ; j < size ; ++j )
		{
			if ( array[j] < min )
			{
				k = j;
				min = array[j];
			}
		}
		aux = array[i];
		array[i] = min;
		array[k] = aux;
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

