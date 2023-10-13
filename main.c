#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  void *data;
  struct Node *next;
} Node;

Node *
t_create_node (void *data)
{
  Node *node = (Node *)malloc (sizeof (Node));
  node->data = data;
  node->next = NULL;
  return node;
}

int
main (void)
{
  Node *head = t_create_node ("root");
  Node *second = t_create_node ("subnode1");
  head->next = second;
  head->next->next = t_create_node ("subnode2");
  printf ("%s\n", (char *)head->next->next->data);
}
