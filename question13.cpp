

//Algorithm
/*


    Step 1: Repeat Steps 2 to 3 while root != NULL
    Step 2: postOrderTraversing(root -> left)
    Step 3: postOrderTraversing(root -> right)
    Step 4: Write root -> data
    [end of loop]
    Step 5: exit


*/


#include <iostream>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

void insert(struct Node **root, int data){
    if((*root)->data > data){
        if((*root)->left == NULL){
            struct Node *node = new (struct Node);
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            (*root)->left = node;
            return;
        }else{
            insert(&((*root)->left), data);
        }
        
    }else{
        if((*root)->right == NULL){
            struct Node *node = new (struct Node);
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            (*root)->right = node;
            return;
        }else{
            insert(&((*root)->right), data);
        }
    }
}


void postOrderTraversing(struct Node *root){
    if(root == NULL){
        return;
    }
    
    postOrderTraversing(root->left);
    postOrderTraversing(root->right);
    std::cout << root->data << "\t";
}


int main(){


    struct Node *root = new (struct Node);
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    
    insert(&root, 5);
    insert(&root, 15);
    insert(&root, 3);
    insert(&root, 13);

    postOrderTraversing(root);


    return 0;
}