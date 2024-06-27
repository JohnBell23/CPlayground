#include "main.h"

int main(void)
{
   printf("Hello\n");

   Value v;
   v.value = 1;
   Node *startNode = MyLinkedList_init(v);

   for (int i = 2; i < 10; i++)
   {
      v.value = i;
      Node *newNode = MyLinkedList_add(startNode, v);
   }

   MyLinkedList_printValues(startNode);

   MyLinkedList_destroy(startNode);

   printf("Goodbye\n");

   return 0;
}
