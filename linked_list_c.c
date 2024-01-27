/* Created by sitiamindd. 
1) the program do is generate random 100 integers and placed it in a linear linked list. 
2) after that, it sort the linked list by comparing the adjacent by using buble sort
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARRAY_SIZE 100
#define ROW_SIZE 5

typedef struct node{
    int data;
    struct node *next;
}node;

//function create a new node/list
node *create_node(int data){
    node* node_n = malloc(sizeof(node));
    node_n->data = data;
    node_n->next = NULL;
    
    return node_n;
}

//function to add the value in the current head
node *add_to_front(int d, node* current_head){
    node* head = create_node(d);
    head -> next= current_head; //import part to add the next value to next node
    return head;
}

//function create list linked. linking the node
node *link_node(int data[], int size_data){
    node *head=NULL;
  
    int i=0;
    
    for(i; i < size_data; i++){
       head = add_to_front(data[i], head);
    }
    
    return head;
}

//function to print list node
void print_list(node *h){
    int count =0;
    while(h != NULL){
        printf("%d|", h->data);
        h = h->next;
        count++;
        
        if (count == ROW_SIZE){
            printf("\n");
            count = 0;
        }
    }
}

int *random_number(){
    static int numbers[ARRAY_SIZE];
    srand(time(NULL));

    // Filling the array with random numbers between 0 and 100
    for (int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = rand() % 100;
    }
   return numbers;
}

//function to swap nodes
void swap_node(node *node1, node* node2){
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
    
}

//main function to sort the list and print it
node *buble_sort(node *head){
    int swapped;
    node *ptr1;
    node *lptr = NULL;
    
    if (head == NULL){
        return;
    }
    
     do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) { 
                swap_node(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
    
    return ptr1;
}

int main(void){
    node *head;
    int *data=NULL;
  
    data = random_number();
    head = link_node(data, ARRAY_SIZE);
    head =  buble_sort(head); //sorting the linked list
    print_list(head);
     
    
    return 0;
}
