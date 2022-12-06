// singly linked list functions => addnode(),addFirst(),addAtpost() => with all test cases
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
 //addAtpos => add at given position
int addAtpos(int pos){             //int parameter (at which position)
          int count = countNode();
          if(pos<=0 || pos >count+2){
              printf("invalid position of node \n");
              return -1;
          }else if(pos == count+1){
                  addNode();
          }else if(pos == 1){
                   addFirst();
          }else{
                 struct demo* newNode = createNode();
          struct demo* temp = head;
          while(pos-2){
            temp=temp->next;
            pos--;
         }
         newNode->next=temp->next;    // segmentation fault(if we take poistion no > total nodes)
         temp->next=newNode;
}
             
}
int countNode(){
       struct demo * temp = head;
       int count =0;
       while(temp != NULL){
             count++;
             temp = temp->next;
       }
       printf("\nCount = %d\n",count);
}
void printLL(){
      struct demo* temp = head;
      while(temp != NULL){
          printf("|%d|" ,temp->data);
          temp=temp->next;
       }
 }
void main(){
        int countNode;
     printf("enter number of node to add:\n");
     scanf("%d",&countNode);
     
     for(int i=0;i<countNode;i++){
           addNode();
     }
        char choice;
        //int pos;
        do{
           printf("1.addNode \n");
           printf("2.addFirst \n");
           printf("3.addAtpos \n");
           printf("4.printLL \n");
            int ch;
           printf("Enter chice no :\n");
           scanf("%d",&ch);
           
           switch(ch){
                  case 1:
                       addNode();
                       break;
                  case 2:
                        addFirst();
                        break;
                  case 3:
                       {                                           // more lines so put into the body
                         int pos;
                         printf("enter position  number:\n");
                         scanf("%d",&pos);
                         
                        addAtpos(pos);
                       }
                        break;
                  case 4:
                        printLL();
                        break;
                        defualt:
                       printf("wrong choice\n");
          }
          getchar();
          printf("\n");
          printf("Do you want to continue \n");
          scanf("%c",&choice);
         }while(choice == 'y' || choice == 'Y');
  }         
