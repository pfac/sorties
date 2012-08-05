/**
 * Sorts an array using the merge sort algorithm
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10
#define MAX 100

#define min(a,b) ( (a) < (b) ? (a) : (b) )

void merge ( long * array , long unsigned piecesize , long unsigned size )
{
	long unsigned i;
	long unsigned j;
	long unsigned k;
	long * ordered;

	ordered = (long *) malloc( sizeof(long) * size );
	j = 0;
	k = piecesize;
	for ( i = 0 ; i < size ; ++i )
	{
		if ( j == piecesize )
			ordered[i] = array[k++];
		else if ( k == size )
			ordered[i] = array[j++];
		else if ( array[j] < array[k] )
			ordered[i] = array[j++];
		else
			ordered[i] = array[k++];
	}
	memcpy(array,ordered,sizeof(long)*size);
	free(ordered);
}


void sort ( long * array , long unsigned size )
{
	long unsigned i;
	long unsigned j;

	for ( i = 1 ; i < size ; i *= 2 )//	piece size
	{
		long unsigned npieces = size - i;
		for ( j = 0 ; j < npieces ; j += 2*i )
			merge( array+j , i , min( 2 * i , size - j ) );
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

