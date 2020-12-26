#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct Node{

    char Name[50];
    int Id;
    float Degree;
    struct Node * Next;

}Node_t;

Node_t * CreatList(char * name, int id, float degree);
void insertNode(Node_t ** Head, char *name, int id, float degree);
void appendNode(Node_t * Head, char *name, int id, float degree);
void printList(Node_t * Head);
void printNode(Node_t * Head, int id);
void delNode(Node_t ** Head, int id);
void delList(Node_t ** Head);


#endif // _LINKED_LIST_H
