#include<stdio.h>
#include<stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node* next;
// } linkedlist;

// linkedlist* createNode( int data){
//     linkedlist* newNode = (linkedlist*)malloc(sizeof(linkedlist));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// linkedlist* deleteNode( linkedlist* head, int target){
//     linkedlist* current = head;
//     linkedlist* previous = NULL;

//     while( current != NULL && current->data != target){
//         previous = current;
//         current = current->next;
//     }

//     if( current != NULL ){
//         if( previous != NULL){
//             previous->data = current->data;
//         }
//         else{
//             head = current->data;
//         }
//         free(current);
//     }
//     retr
// }

// linkedlist* swapNode( linkedlist* head, int value1, int value2){
//     linkedlist* curr1 = head;
//     linkedlist* curr2 = head;
//     linkedlist* prev1 = NULL;
//     linkedlist* prev2 = NULL;

//     while( curr1 != NULL && curr1->data != value1){
//         prev1 = curr1;
//         curr1 = curr1-> next;
//     }
//     while( curr2 != NULL && curr2->data != value2){
//         prev2 = curr2;
//         curr2 = curr2->next;
//     }

//     if( curr1 != NULL && curr2 != NULL ){
//         if( prev1 != NULL ){
//             prev1->next = curr2;
//         }
//         else{
//             head = curr2;
//         }
//     }
    
// }


typedef struct Node{
    int data;
    struct Node* next;
} linkedlist;

linkedlist* createNode(int data){
    linkedlist* newNode = (linkedlist*)malloc(sizeof(linkedlist));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

linkedlist* deleteNode(linkedlist* head, int target){
    linkedlist* current = head;
    linkedlist* previous = NULL;
    while(current != NULL && current->data != target){
        previous = current;
        current = current->next;
    }
    if( current != NULL){
        if( previous != NULL){
            previous->next= current->next;
        }
        else{
            head = current->next;
        }
        free(current);
    }
    return head;
}

linkedlist* swapNode(linkedlist* head, int value1, int value2){
    linkedlist* curr1 = head;
    linkedlist* curr2 = head;
    linkedlist* prev1 = NULL;
    linkedlist* prev2 = NULL;
    while( curr1 != NULL && curr1->data != value1){
        prev1 = curr1;
        curr1 = curr1->next;
    }
    while( curr2 != NULL && curr2->data != value2){
        prev2 = curr2;
        curr2 = curr2->next;
    }
    if(curr1 != NULL && curr2 != NULL){
        if(prev1 != NULL){
            prev1->next = curr2;
        }
        else{
            head = curr2;
        }
        if(prev2 != NULL){
            prev2->next = curr1;
        }
        else{
            head = curr1;
        }
        linkedlist* temp = curr1->next;
        curr1->next = curr2->next;
        curr2->next = temp;
    }
    return head;

}
