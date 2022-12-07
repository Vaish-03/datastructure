#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct demo{
        int data;
        struct demo* next;
};      
   struct demo * head =NULL;
   struct demo* createNode(){
         struct demo* newNode = (struct demo*)malloc(sizeof(struct demo));
      printf("enter data:\n");
      scanf("%d",&newNode->data);
      
      newNode->next = NULL;
      return newNode;
 }
//addnode function => add node at last
 void addNode(){
           struct demo* newNode = createNode();
           if(head==NULL){
               head= newNode;
           }else{
                struct demo* temp = head;
                while(temp->next !=NULL){
                      temp=temp->next;
               }
                temp->next=newNode;
           }
 }
 
 //addfirst => add node at first position
 void addFirst(){
            struct demo* newNode = createNode();
            if(head==NULL){
               head= newNode;
           }else{
                newNode->next = head;
                head=newNode;
            }
}
 //printLL => print nodes
void printLL(){
      struct demo* temp = head;
      while(temp != NULL){
          printf("|%d|" ,temp->data);
          temp=temp->next;
       }
 }
     
 //main
 void main(){
     int countnode;
     printf("enter number of node to add:\n");
     scanf("%d",&countnode);
     
     for(int i=0;i<countnode;i++){
           addNode();
     }
     printLL();
     addFirst();
     printLL();
    
}
