#include <stdio.h>
#include <stdlib.h>
#include "add_last.h"
#include "display.h"

struct Box 
{
    int unique_ID, length,breadth, height, weight;
    char color[20];
    struct Box *next;  
};
struct Box *head; 
ptr=(struct Box*)malloc(sizeof(struct Box)*50);
void add_last();  
void display(); 
int main()
{
    int choice =0;  
    while(choice != 3)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.add at last\n2.display\n3.Exit\n"); 
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            add_last();      
            break;  
            case 2:  
            display();
            break;  
            case 3:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
} 