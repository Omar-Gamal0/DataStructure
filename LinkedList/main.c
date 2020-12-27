#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main()
{
    Node_t * Head1 = CreatList("Omar1", 1, 995.25656);
    appendNode(Head1, "Omar2", 2, 1000.5562);
    prependNode(&Head1, "Omar0", 0, 995.25656);
    appendNode(Head1, "Omar3", 3, 1000.5264);

    Node_t * Head2 = CreatList("Ahmed1", 1, 995.25656);
    appendNode(Head2, "Ahmed2", 2, 1000.5562);
    prependNode(&Head2, "Ahmed0", 0, 995.25656);
    appendNode(Head2, "Ahmed3", 3, 1000.5264);

    Node_t * Head3 = CreatList("Hosam1", 1, 995.25656);
    appendNode(Head3, "Hosam2", 2, 1000.5562);
    prependNode(&Head3, "Hosam0", 0, 995.25656);
    appendNode(Head3, "Hosam3", 3, 1000.5264);


    printNode(Head1,0);
    printf("\n________________________________\n");
    delList(&Head1);
    printList(Head2);


    return 0;
}
