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

void heap_add ( long * heap , long unsigned next , long item )
{
	heap[next] = item;
	while ( (parent = (next-1)/2) && heap[parent] < item )
	{
		heap[next] = heap[parent];
		heap[parent] = item;
		next = parent;
	}
}



void heap_order ( long * heap , long unsigned size )
{
	i = 1;
	y = 2 * i;
	x = y - 1;
	while ( y < size )
		



void sort ( long * array , long unsigned size )
{
	long * heap;
	heap = (long *) malloc( sizeof(long) * size );
	for ( i = 0 ; i < size ; ++i )
		heap_add( heap , i , item );
	heap_order( heap , size );
	memcpy( array , heap , sizeof(long) * size );
	free(heap);
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

