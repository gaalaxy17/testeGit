#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct tree Tree;

struct tree{

    int data;
    Tree *right;
    Tree *left;

};

Tree *insertNode(Tree *tree,int value){

    if (tree == NULL) {
        Tree *aux = malloc(sizeof(Tree));
        aux->data = value;
        aux->right = NULL;
        aux->left = NULL;
        return aux;
    }
    if (value > tree->data) {
        tree->right = insertNode(tree->right,value);
    }
    if (value < tree->data) {
        tree->left = insertNode(tree->left,value);
    }
    return tree;
    
}

Tree *removeNode(Tree *tree,int value){

    if (tree == NULL){
        return NULL;
    }

    //CASES

}

void printTree(Tree *tree){

    if (tree == NULL) {
        return;
    }
    
    printTree(tree->left);
    printf("%d ",tree->data);
    printTree(tree->right);

}



int main(void){

    setlocale(LC_ALL,"Portuguese");

    int n;

    Tree *tree = NULL;

    while(1){
        printf("Insira um INT ");
        scanf("%d", &n);
        if (n==-1) {
            break;
        }
        tree = insertNode(tree,n);
    }
    printTree(tree);

    return 0;
}