#include <stdio.h>
#include <stdlib.h>
# ifndef _ADD_LAST_H__
# define _ADD_LAST_H__


void add_last()
{
struct Box *ptr, *temp;
    int unique_ID_, length_,breadth_, height_, weight_;
    char color_[20];
	ptr=(struct Box*)malloc(sizeof(struct Box));
    if(ptr==NULL)
    {
	    printf("Overflow\n");
    }
    else
    {
	    printf("\nEnter Unique ID for the BOX :\n");
        scanf("%d",&unique_ID_);
        ptr->unique_ID=&unique_ID_;
    
         printf("\nEnter Length for the BOX :\n");
         scanf("%d",&length_);
        ptr->length=&length_;
    
         printf("\nEnter Breadth for the BOX :\n");
         scanf("%d",&breadth_);
        ptr->length=&breadth_;
    
        printf("\nEnter Height for the BOX :\n");
        scanf("%d",&height_);
        ptr->length=&height_;

        printf("\nEnter Color for the BOX :\n");
        scanf("%s",&color_);
        ptr->length=&color_;

        printf("\nEnter Height for the BOX :\n");
        scanf("%d",&height_);
        ptr->length=&height_;
        if(head==NULL)
        {
	        ptr->next=NULL;
	        head=ptr;
	        printf("\nBox Inserted");
        }
        else
        
        {
	        temp=head;
	        while (temp -> next != NULL) 
	        {
		        temp=temp->next;
	        }
	        temp->next=ptr;
	        ptr->next=NULL;
	        printf("\n Box Inserted");
	    }
    }
}

# endif
