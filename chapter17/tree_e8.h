/* tree.h -- binary search tree */
/*           no dublicate items are allowed in this tree */
#ifndef _TREE_E8_H_
#define _TREE_E8_H_
#include <stdbool.h>


// Exercise 08
typedef struct adjunct {
    char petkind[20];
    struct adjunct * next;
} Adj;

// Exercise 08
typedef struct item
{
    char petname[20];
    char petkind[20];
    Adj * next;
} Item;

#define MAXITEMS 2000

typedef struct trnode
{
    Item item;
    struct trnode * left;
    struct trnode * right;
} Trnode;

typedef struct tree
{
    Trnode * root;
    int size;
    int entry_size;
} Tree;


void InitializeTree(Tree * ptree);
bool TreeIsEmpty(const Tree * ptree);
bool TreeIsFull(const Tree * ptree);
int TreeItemCount(const Tree * ptree);
bool AddItem(const Item * pi, Tree * ptree);
bool InTree(const Item * pi, const Tree * ptree);
bool DeleteItem(const Item * pi, Tree * ptree);
void Traverse(const Tree * ptree, void (*pfun)(Item item));
void DeleteAll(Tree * ptree);
Item * QueryItem(const Item *pi, const Tree *ptree);
void PrintOtherItemsInTheSameNode(const Item *pi, const Tree * ptree);

#endif