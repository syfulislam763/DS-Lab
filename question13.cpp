

//Algorithm
/*


    Step 1: Repeat Steps 2 to 5  while root != NULL
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


    postOrderTraversing(root);


    return 0;
}