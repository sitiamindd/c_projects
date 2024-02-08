//idiom in implementing bubble sort in c
// by sitiamindd
#include <stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b  = temp;
}

void print_array(int data[], int size)
{
    int i;
    for(i=0; i < size; i++)
    {
        printf("%d\t", data[i]);
    }
}

void bubble_sort(int data[], int size)
{
    int i, j, temp;
    int go_on;

    for(i=0 ; i<size ;i++)
    {   print_array(data, size);
        printf("[%d], enter input to continuer", i);
        scanf("%d", &go_on);
        for(j=size-1; j > i; j--)
        {
            if(data[j-1] > data[j])
            {
                swap(&data[j-1], &data[j]);
            }
        }
    }
    
}


int main() {
  
  int data[5] = {4,2,9,12,3};
  //printf("Before sorting:");
 // print_array(data, 5);
 // printf("\n After Sorting:");
  bubble_sort(data,5);
 // print_array(data, 5);
  return 0;
}
