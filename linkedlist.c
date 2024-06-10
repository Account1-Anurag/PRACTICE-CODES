#include <stdio.h>
#include<stdlib.h>
 struct node;
    int data;
    struct node *next;

}*head;

void createlist(int n);
void deletefirstnode();
void deletemiddlenode(int position);
void deletelist();
void displaylist();

int main(){
    int n,choice,position;
    printf("Enter the total number of nodes\n");
    scanf("%d",&n);
    createlist(n);

    printf("\n Data in the list \n");
    displaylist();
    while(1){
        printf("\n Press 1 to delete first node:");
        printf("\n press 2 to delete the last node:");
        printf("\n press 3 to delete the all node:");
        printf("\n press 4 to exit:\n");
        scanf("%d",&choice);
  

    if(choice==1)
    deletefirstnode();
    elseif(choice==2){
        printf("\n enter the node you want to delete :\n");
        scanf("%d,&position");
            }
            elseif(choice==3)
            {
                deletelist();
            }
            elseif(choice==4)
            break;
            printf("\ndata in the list :");
            displaylist();
     }

     void createlist(int n){
        struct node *newnode, *temp;
        int data,i;
        head=(struct node *)malloc(sizeof(struct node));

        if(head==NULL){
            printf("\n Unable to allocate memory.");
        }
        else{
            printf("Enter the data of node1:");
            scanf("%d",&data);
            head->data=data;
            head->next=NULL;

            temp=head;
            for(int i=2;i<=n;i++){
                newnode=(struct node*)malloc(sizeof(struct node));
                if(newnode==NULL){
                    printf("Unable to allocate memory.");
                    break;
                }
                else{
                    printf("Enter the data of node")
                }
            }
        }
     }


    return 0;
}