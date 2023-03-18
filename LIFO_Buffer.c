/* A clarification:

This buffer will always track the next available head spot. However, this can cause out of range buffer indexing which could create compile-time warnings and errors. An alternative and better way to build this would be to have the head track the last item added. This way you never index out of range with your structure. An example definition is below:
*/
#include <stdio.h>

typedef struct LIFO_Buf
{

   uint32_t length;

   uint8_t *base;

   uint8_t *head;

} LIFO_Buf_t;

typedef enum LB
{
   LB_FULL,
   LB_NOT_FULL,
   LB_EMPTY,
   LB_NOT_EMPTY,
   LB_NULL,
   LB_NO_ERROR
} LB_Status;

LB_Status LIFO_Is_Buf_Full(LIFO_Buf_t *lbuf)
{

   /* Checks if buffer is initialized */

   if (!lbuf || !lbuf->head || !lbuf->base)
   {

      return LB_NULL;
   }

   /* Checks if in the ragen of buf[0] < index < buf[length] */

   if (lbuf->head == lbuf->base + (lbuf->length - 1))
   {

      return LB_FULL;
   }

   else
   {

      return LB_NOT_FULL;
   }
}

LB_Status LIFO_Add_Item(LIFO_Buf_t *lbuf, uint8_t item)
{

   /* Checks if buffer is initialized */

   if (!lbuf || !lbuf->head || !lbuf->base)
   {

      return LB_NULL;
   }

   /* Checks if buffer is full */

   if (LIFO_Is_Buf_Full(lbuf) == LB_FULL)
   {

      return LB_FULL;
   }

   lbuf->head++;

   *lbuf->head = item;

   return LB_NO_ERROR;
}
