/**
 * @file item.c
 * @author Jesutofunmi Kupoluyi(jimsufficiency@gmail.com)
 * @brief   This is a program that creates and uses and item
 *          oriented data structure.
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Including necessary libraries */
#include <stdio.h>
#include <stdlib.h>

/* Creating the item structure */
struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount; /* quantity * price */
};

typedef struct item item_t;

void readItem(item_t *);
void printItem(item_t *);


int main(int argc, char const *argv[])
{
    item_t itemInst;

    itemInst.itemName = (char *)malloc(32*sizeof(char));

    readItem(&itemInst);

    printItem(&itemInst);

    /* Freeing allocated memory */
    free(itemInst.itemName);

    return 0;
}

/* Custom functions */

/**
 * @brief   This function prompts user to fill in the 
 *          necessary details for the item struct.
 * 
 * @param itemPtr 
 */
void readItem(item_t *itemPtr)
{
    printf("Please enter the item name : ");
    scanf("%s", itemPtr->itemName);

    printf("Please enter item quantity : ");
    scanf("%d", &itemPtr->quantity);

    printf("Please enter item price : ");
    scanf("%f", &itemPtr->price);

    itemPtr->amount = itemPtr->price * itemPtr->quantity;

    return;
}

/**
 * @brief   This function prints out data that has been
 *          passed in to the referenced struct.
 * 
 * @param itemPtr 
 */
void printItem(item_t *itemPtr)
{
    printf("\n\t\t********** Item data **********\n\n\tItem name: %s\n\tItem quantity: %d\n\tItem price: %.2f\n\tItem amount: %.2f\n\n", 
            itemPtr->itemName, 
            itemPtr->quantity,
            itemPtr->price,
            itemPtr->amount);
            
    return;
}