#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


Node_t * CreatList(char * name, int id, float degree)
{
    Node_t * Head = (Node_t *) malloc(sizeof(Node_t));

    Head->Id = id;
    Head->Degree = degree;
    StringCopy(Head -> Name, name);

    Head->Next = NULL;
    return Head;
}


void prependNode(Node_t ** Head, char * name, int id, float degree)
{

    Node_t * Node = (Node_t *) malloc(sizeof(Node_t));

    Node -> Id = id;
    Node -> Degree = degree;
    StringCopy(Node -> Name, name);

    Node -> Next = *Head;
    *Head = Node;

}


void appendNode(Node_t * Head, char *name, int id, float degree)
{
    Node_t * Temp = Head;
    Node_t * Node = (Node_t *) malloc(sizeof(Node_t));

    Node->Id = id;
    Node->Degree = degree;
    StringCopy(Node -> Name, name);

    while(Temp -> Next != NULL){

        Temp = Temp->Next;

    }

    Temp -> Next = Node;
    Node -> Next = NULL;

}


void printList(Node_t * Head)
{
    Node_t Temp = *Head;
    while(Temp.Next != NULL)
    {

        printf("Student Name: %s\nStudent ID: %d\nStudent Degree: %.2f\n\n", Temp.Name, Temp.Id, Temp.Degree);
        Temp = *(Temp.Next);

    }

    printf("Student Name: %s\nStudent ID: %d\nStudent Degree: %.2f\n\n", Temp.Name, Temp.Id, Temp.Degree);

}


void printNode(Node_t * Head, int id)
{
    Node_t Temp = *Head;

    char Found = 0;
    while(Temp.Id != NULL)
    {
        if(Temp.Id == id)
        {
            Found = 1;
            break;
        }
        Temp = *Temp.Next;
    }

    if((Found)||(Temp.Id==id))
    {
        printf("Student Name: %s\nStudent ID: %d\nStudent Degree: %.2f\n", Temp.Name, Temp.Id, Temp.Degree);
    }
    else
    {
        printf("Student ID not found");
    }
}


void delNode(Node_t ** Head, int id)
{
    Node_t * Temp = *Head;

    if(Temp -> Id == id)
    {
        *Head = Temp -> Next;
        free(Temp);
    }
    else
    {
    char Found = 0;
    while(Temp->Next != NULL)
    {
        if(((Temp->Next) -> Id ) == id)
        {
            Found = 1;
            break;
        }
        Temp = Temp->Next;
    }

    if((Found)||(Temp->Id==id))
    {
        Node_t * Temp1 = Temp->Next;
        Temp -> Next = ((Temp->Next) -> Next );
        free(Temp1);
    }

    else
    {
        printf("Student ID not found");
    }

    }
}

void delList(Node_t ** Head)
{

    Node_t * Temp = *Head;;

    while(Temp != NULL)
    {

        *Head = Temp -> Next;
        free(Temp);
        Temp = *Head;

    }
    //*Head = Temp -> Next;
    //free(*Head);
}

void StringCopy(char * Str1, char * Str2)
{
    char index = 0;
    while(Str2[index] != '\0')
    {
        Str1[index] = Str2[index];
        index++;
    }
}
