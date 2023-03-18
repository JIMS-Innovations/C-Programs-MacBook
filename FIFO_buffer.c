#include <stdio.h>
/*

This buffer shows that it will add the item in before it adjusts the pointer. Instead to be consistent with our definition of CB_Is_Buf_Full(), the line that adds the item in should come after the check for the head pointer. In this corrected definition, the head always tracks the last added item, where in the slides it tracks the next available spot.

An example definition is below:
*/
typedef enum CB
{
   CB_FULL,
   CB_NOT_FULL,
   CB_EMPTY,
   CB_NOT_EMPTY,
   CB_NULL,
   CB_NO_ERROR
} CB_Status;

typedef struct FIFO_Buf
{

   uint32_t length;

   uint32_t count;

   uint8_t *base;

   uint8_t *head;

   uint8_t *tail;

} CB_Buf_t;

   CB_Status CB_Add_Item(CB_Buf_t * cbuf, uint8_t item) {

     /* Checks if buffer is initialized */

     if ( ! cbuf || ! cbuf->head || ! cbuf->base) {

       return CB_NULL;

     }

     /* Checks if the buffer is Full */

     if ( CB_Is_Buf_Full(cbuf) == CB_FULL ){

        return CB_FULL;

     }

     /* Checks if buffer is at the end of the allocated region, moves to beginning if so */

     if ( cbuf->head == cbuf->head + (cbuf->length -1 )  ) {

       cbuf->head = cbuf->base;

     }

     else {

       cbuf->head++;

     }

     *cbuf->head = item;

     return CB_NO_ERROR;

   }

