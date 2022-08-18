



//Algorithm
/*
    insert(head, data)
    Step-1: Initialize ptr, temp
    Step-2: ptr->data = data
    Step-3: if head == NULL
            ptr->next = NULL
            head = ptr
            go to step-5
            [end of if]
    Step-4: set temp = head
            ptr->next = temp
            head = ptr
    Step-5: exit

*/

#include <iostream>


struct Node {
    int data;
    struct Node *next = NULL;
};

void insert(struct Node **head, int data){
    struct Node *ptr, *temp;
    ptr = new (std::nothrow) (struct Node);
    temp = new (std::nothrow)(struct Node);

    ptr->data = data;

    if(*head == NULL){
        ptr->next = NULL;
        *head = ptr;
    }else{
        temp = *head;
        ptr->next = temp;
        *head = ptr;
    }

    std::cout << "item inserted\n";
}

int main(){
    struct Node *head = NULL;
    insert(&head, 50);
    insert(&head, 100);

    return 0;
}