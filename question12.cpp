

//Algorithm
/*

    Step 1: Repeat Steps 2 to 4 while root != NULL
    Step 2: Write root -> data
    Step 3: preOrderTraversing(root -> left)
    Step 4: preOrderTraversing(root -> right)
    [end of loop]
    Step 5: exit
*/


#include <iostream>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};


void preOrderTraversing(struct Node *root){
    if(root == NULL){
        return;
    }
    std::cout << root->data << "\t";
    preOrderTraversing(root->left);
    preOrderTraversing(root->right);
}


int main(){


    struct Node *root = new (struct Node);
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    
    struct Node *node1, *node2;
    node1 = new (struct Node);
    node2 = new (struct Node);

    node1->data = 15;
    node1->left = NULL;
    node1->right = NULL;

    node2->data = 20;
    node2->left = NULL;
    node2->right = NULL;

    root->left = node1;
    root->right = node2;

    preOrderTraversing(root);



    return 0;
}