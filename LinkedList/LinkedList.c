#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


Node_t * CreatList(char * name, int id, float degree)
{
    Node_t * Head = (Node_t *) malloc(sizeof(Node_t));

    Head->Id = id;
    Head->Degree = degree;
    char index = 0;
    while(name[index] != '\0')
    {
        Head->Name[index] = name[index];
        index++;
    }

    Head->Next = NULL;
    return Head;
}


void insertNode(Node_t ** Head, char * name, int id, float degree)
{

    Node_t * Node = (Node_t *) malloc(sizeof(Node_t));

    Node -> Id = id;
    Node -> Degree = degree;
    char index = 0;
    while(name[index] != '\0')
    {
        Node->Name[index] = name[index];
        index++;
    }

    Node -> Next = *Head;
    *Head = Node;

}


void appendNode(Node_t * Head, char *name, int id, float degree)
{
    Node_t * Temp = Head;
    Node_t * Node = (Node_t *) malloc(sizeof(Node_t));
    Node->Id = id;
    Node->Degree = degree;

    char index = 0;
    while(name[index] != '\0')
    {
        Node->Name[index] = name[index];
        index++;
    }

    while(Temp -> Next != NULL){

        Temp = Temp->Next;

    }

    Temp -> Next = Node;
    Node -> Next = NULL;

}


void printList(Node_t * Head)
{
    Node_t Temp = *Head;
    while(1){

    printf("Student Name: %s\nStudent ID: %d\nStudent Degree: %.2f\n\n", Temp.Name, Temp.Id, Temp.Degree);
    Temp = *(Temp.Next);

    if(Temp.Next == NULL)
        break;
    }

    //printf("Student Name: %s\nStudent ID: %d\nStudent Degree: %.2f\n\n", Temp.Name, Temp.Id, Temp.Degree);

}


void printNode(Node_t * Head, int id)
{
    Node_t Temp = *Head;

    char Found = 0;
    while(Temp.Next != NULL)
    {
        if(Temp.Id == id)
        {
            Found = 1;
            break;
        }
        Temp = *Temp.Next;
    }

    if((Found) || (Temp.Id == id))
    {
        printf("Student Name: %s\nStudent ID: %d\nStudent Degree: %.2f", Temp.Name, Temp.Id, Temp.Degree);
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

    if((Found) || (Temp->Id == id))
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

    while(Temp->Next != NULL)
    {

        *Head = Temp -> Next;
        free(Temp);
        Temp = *Head;

    }
    *Head = Temp -> Next;
    free(Temp);
}
