#include<stdio.h>

typedef struct binarytree{
    int data;
    struct binarytree *left;
    struct binarytree *right;
}tree;

tree* createNode(int data){
    tree* newNode = (tree *)malloc(sizeof(tree));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int height(tree *root){
    while( root != NULL){
        int left = height(root->left);
        int right = height(root->right);
        if( left >= right ){
            return 1+left;
        }
        else{
            return 1+right;
        }
    }
    return 0;
}

int node(tree *root){
    while( root != NULL ){
        return 1+node(root->left)+node(root->right);
    }
    return 0;
}