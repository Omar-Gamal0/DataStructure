#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct Node{

    char Name[50];                                                      // Student name
    int Id;                                                             // Student id
    float Degree;                                                       // Student degree
    struct Node * Next;                                                 // pointer to struct node type which will carry the address of the next node in the list

}Node_t;

/*
    CreatList:- Function used to create new list
        Return:- The address of the created head of the new list / Type:- Pointer to Node_t type
        Arguments:-
            * name (Student name) / Type:- pointer to char
            * id (Student id) / Type:- int
            * degree (Student degree) / Type:- float
*/
Node_t * CreatList(char * name, int id, float degree);

/*
    prependNode:- Function used to add new node at the beginning of a list
        Return type:- void
        Arguments:-
            * Head (Address of the Head node of the list) / Type:- pointer to pointer to Node_t type
            * name (Student name) / Type:- pointer to char
            * id (Student id) / Type:- int
            * degree (Student degree) / Type:- float
*/
void prependNode(Node_t ** Head, char *name, int id, float degree);

/*
    appendNode:- Function used to add new node at the end of a list
        Return type:- void
        Arguments:-
            * Head (The Head node of the list) / Type:- pointer to Node_t type
            * name (Student name) / Type:- pointer to char
            * id (Student id) / Type:- int
            * degree (Student degree) / Type:- float
*/
void appendNode(Node_t * Head, char *name, int id, float degree);

/*
    printList:- Function used to print a list
        Return type:- void
        Arguments:-
            * Head (The Head node of the list) / Type:- pointer to Node_t type
*/
void printList(Node_t * Head);

/*
    printNode:- Function used to print a node of a list
        Return type:- void
        Arguments:-
            * Head (The Head node of the list) / Type:- pointer to Node_t type
            * id (Student id which we want to print there node (data)) / Type:- int
*/
void printNode(Node_t * Head, int id);

/*
    delList:- Function used to delete a list
        Return type:- void
        Arguments:-
            * Head (Address of the Head node of the list) / Type:- pointer to pointer to Node_t type
*/
void delList(Node_t ** Head);

/*
    delNode:- Function used to delete a node of a list
        Return type:- void
        Arguments:-
            * Head (Address of the Head node of the list) / Type:- pointer to pointer to Node_t type
            * id (Student id which we want to delete there node (data)) / Type:- int
*/
void delNode(Node_t ** Head, int id);

/*
    StringCopy:- Function used to copy string from the second parameter to the first one
        Return type:- void
        Arguments:-
            * Str1 (Address of the first element of the first string) / Type:- pointer char type
            * Str2 (Address of the first element of the second string) / Type:- pointer char type
*/
void StringCopy(char * Str1, char * Str2);

#endif // _LINKED_LIST_H
