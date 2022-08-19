//Algorithm
/*

    deleteItem(head)
    Step-1: Initialize temp
    Step-2: if head != NULL
            temp = head->next
            head = temp
    Step-3: exit
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

void deleteItem(struct Node **head){
    struct Node *temp;
    temp = new (std::nothrow)(struct Node);
    if(*head != NULL){
        temp = (*head)->next;
        *head = temp;
    }

    std::cout << "item deleted\n";
}

int main(){
    struct Node *head = NULL;
    insert(&head, 50);
    insert(&head, 100);
    

    deleteItem(&head);

    std::cout << head->next->data << std::endl;

    return 0;
}