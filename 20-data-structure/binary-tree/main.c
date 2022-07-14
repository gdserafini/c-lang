/* BINARY TREE 
exemple - 10 numbers - ordered binary tree 
and binary search*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TSIZE 10 //tree size
#define NMAX 100 //n° max in rand()

typedef struct node{
    int data; 

    struct node *right; 
    struct node *left;
} NODE;

/* place a aleatory number in each array position */
void init_array(int *array){
    for(int i = 0; i < TSIZE; i++){
        array[i] = rand() % NMAX;
    }
}

NODE *insert(NODE *root, int data){
    NODE *temp = (NODE*)malloc(sizeof(NODE));

    temp->data = data; //enter a number and clean the pointers
    temp->right = NULL;
    temp->left = NULL;

    if(root = NULL){
        root = temp;
    }
    else{
        NODE *current = root;
        NODE *parent = NULL;

        while(1){
            parent = current;
            
            if(data < parent->data){
                current = current->left;

                if(current = NULL){
                    parent->left = temp;
                    return root;
                }
            }
            else{
                current = current->right;

                if(current = NULL){
                    parent->right = temp;
                    return root;
                }
            }
        }
    }

    return root; //return root pointer
}

void print_inorder(NODE *root){
    if(root != NULL){
        print_inorder(root->left);
        printf("%d ", root->data);
        print_inorder(root->right);
    }
}

int main(void){
    NODE n[TSIZE];
    int array[TSIZE];

    /* MAIN ALGORITM */
    srand(time(0));
    init_array(array);

    //create a binary tree
    int i;
    NODE *root = NULL;

    for(i = 0; i < TSIZE; i++){
        root = insert(root, array[i]);
    }

    print_inorder(root);

    return 0;
}