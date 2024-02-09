//simple merge sort execution
/*
 ============================================================================
 Name        : bubble_sort.c
 Author      : Siti Aminah Abdullah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


#define SIZE 8

void print_array(int size, int data[], char *str)
{
	int i;
	printf("%s",str);

	for(i=0; i<size; i++)
	{
		printf("%d\t", data[i]);
	}
}


//a and b same size, c is more than both
void merge(int a[], int b[], int c[], int size)
{
	int i=0, j=0, k=0; //k is index for the merge
	//merge array is c
	while(i < size && j < size)
	{
		if (a[i] < b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}

	while (i < size)
	{
		c[k++] = a[i++];
	}

	while(j < size)
	{
		c[k++] = b[j++];
	}
}

void mergesort(int key[], int size)
{
	//a power of 2

	int j,k;
	int w[size];

	for(k=1; k < size; k *=2){
		for(j=0; j <size -k; j +=2 *k){
			merge(key + j, key +j + k, w +j, k);
		}
		for(j=0; j < size; j++)
		{
			key[j] = w[j];
		}

	}
}
int main(void) {


	/*int a[SIZE] = {67,82,83,88,99};
	int b[SIZE] = {58,69,72,81,88};
	int c[2*SIZE] ;
	print_array(SIZE, a, "My grades\n");
	printf("\n");
	print_array(SIZE, b, "More grades\n");
	printf("\n\n");
	merge(a,b,c, SIZE);
	print_array(2*SIZE, c, "My sorted grades\n");
	printf("\n\n");
	*/

	int a[SIZE] = {99,82, 74, 85, 92, 67,76,49};
	print_array(SIZE, a, "My grades\n");
	printf("\n");
	mergesort(a,SIZE);
	print_array(SIZE, a, "My sorted grades\n");
	printf("\n\n");




	return 0;
}
