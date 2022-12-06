#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Menu_card{
        char menu_name[20];
        float menu_price;
        struct Menu_card * next;
}menu;

   menu * head = NULL;
void addNode(){
      menu * newNode = (menu *)malloc(sizeof(menu));
      
      printf("Enter menu name\n");
      fgets(newNode->menu_name,15,stdin); 
      
      printf("Enter menu price\n");
      scanf(" %f ",&newNode->menu_price);
       getchar();
      newNode->next=NULL;
      //head=newNode;
      if(head == NULL){
            head = newNode;
      }else{
         menu * temp =head;
         while(temp->next != NULL){
              temp = temp->next;
         }
         temp->next=newNode;
      }
 }
 void printLL(){
        menu * temp = head;
         while(temp!= NULL){
               printf("%s",temp->menu_name);
               printf("%f",temp->menu_price);
               
               temp = temp->next;
         }
         
}
void main(){
     addNode();
     addNode();
     addNode();
     printLL();

}
         
         

