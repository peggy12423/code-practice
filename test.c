#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

void insert(Node** head, int data){
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode -> data = data;
    newnode -> next = *head;
    *head = newnode;
}

void append(Node** head, int data){
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode -> data = data;
    newnode -> next = NULL;
    if( *head == NULL){
        *head = newnode;
        return;
    }
    Node* curr = *head;
    while( curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = newnode;
}

void delete(Node** head, int key){
    Node* curr = *head;
    Node* prev = NULL;
    if( curr != NULL && curr -> data == key){
        *head = curr -> next;
        free(curr);
        return;
    }
    
    while( curr != NULL && curr -> data != key){
        prev = curr;
        curr = curr -> next;
    }
    prev -> next = curr -> next;
    free(curr);    
}

void deleteAll(Node** head, int key) {
    Node* curr = *head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (curr->data == key) {
            if (prev == NULL) {
                *head = curr->next;
            } else {
                prev->next = curr->next;
            }
            Node* temp = curr;
            curr = curr->next;
            free(temp);
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

void swap(Node** head, int x, int y){
    Node* prevX = NULL;
    Node* prevY = NULL;
    Node* currX = *head;
    Node* currY = *head;
    while( currX != NULL && currX -> data != x){
        prevX = currX;
        currX = currX -> next;
    }
    while( currY != NULL && currY -> data != y){
        prevY = currY;
        currY = currY -> next;
    }
    if( currX == NULL || currY == NULL) return;

    if( prevX != NULL){
        prevX -> next = currY;
    }
    else{
        *head = currY;    
    }
    if( prevY != NULL){
        prevY -> next = currX;
    }
    else{
        *head = currX;
    }

    Node* temp = currX -> next;
    currX -> next = currY -> next;
    currY -> next = temp;
}

void reverse(Node** head){
    Node* curr = *head;
    Node* prev = NULL;
    while( curr != NULL){
        Node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    *head = prev;
}

void printList(Node* head){
    while( head != NULL){
        printf("%d ", head -> data);
        head = head -> next;
    }
    printf("\n");
}

int main(){
    Node* head = NULL;
    for(int i = 1; i <= 6; i++){
        append( &head, i);
    }
    append( &head, 2);
    printList( head );
    deleteAll( &head, 2);
    printList( head );
    swap( &head, 3, 5);
    printList( head );
    reverse( &head );
    printList( head );
    return 0;    
}