# ifndef _DISPLAY_H__
# define _DISPLAY_H__

# include<stdio.h>

void display()
{
    struct Box *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Print Empty");
    }
    else
    {
        printf("\nvalues are printing ....\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->unique_ID);
            printf("\n%d",ptr->length);
            printf("\n%d",ptr->breadth);
            printf("n%d",ptr->height);
            printf("\n%d",ptr->weight);
            printf("\n%s",ptr->color);
            ptr=ptr->next;
        }
    }

}
#endif
