#include<stdio.h>
/*
This linked list definition uses a typedef. However, you must fully define the linked list without the typedef first before you can use it inside the structure. So therefore, the linked list should be defined like one of the example below:
*/

typedef struct node { struct node * next;

 uint32_t data;} Node_t;

struct node { struct node * next;

 uint32_t data;};

/*
This example using a double dereference has numerous errors and instead you should reference the previous slides for an example. Typically linked list add functions return a point to a linked list that way if you create one, or add a new element, you can return a reference the list you are working with. Alternatively, you could allocate the node before the append function is even called. In this case, you would pass in your list and your new node to add without having to call malloc inside the append function. An example is seen below:
*/
/* Function Declaration for Append Node */

void LL_Append ( struct * list, struct * node);

struct node my list;

struct node * my list_p = &my_list;

struct node * new_node = (struct node *) malloc ( sizeof(struct node));

LL_Append (&my_list, new_node);

/* Alternatively *;

LL_Append (my_list_p, new_node);


