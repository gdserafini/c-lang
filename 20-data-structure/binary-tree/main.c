/* BINARY TREE 
exemple - 10 numbers - ordered binary tree 
and binary search*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TSIZE 10 //tree size
#define NMAX 100 //n° max in rand()

//element of binary tree
typedef struct node_binary_tree{
    int data; 

    struct node *right; 
    struct node *left;
} Node;

Node *insert(Node *root, int data){
    Node *current = NULL;
    Node *parent = NULL;
    Node *temp = (Node*)malloc(sizeof(Node));

    //temporary struct Node -> root
    temp->data = data; 
    temp->right = NULL;
    temp->left = NULL;

    if(root = NULL){
        root = temp;
    }
    else{
        *current = root;
        *parent = NULL;

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

    return root;
}

void print_tree(Node *root){
    if(root){
        print_tree(root->left);
        printf("%d ", root->data);
        print_tree(root->right);
    }
}

int main(void){
    int aleat_num;

    /* MAIN ALGORITM */
    srand(time(0));

    //create a binary tree
    Node *root = NULL;

    for(int i = 0; i < TSIZE; i++){ //create a number and insert in the tree
        aleat_num = rand() % NMAX;
        root = insert(root, aleat_num);
    }

    print_tree(root);

    return 0;
}
