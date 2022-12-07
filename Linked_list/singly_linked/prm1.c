#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Movie{
        char mName[20];
        float rating;
        struct Movie*next;
}Mov;

   Mov * head = NULL;
void addNode(){
      Mov * newNode = (Mov*)malloc(sizeof(Mov));
      
      printf("Enter movie name\n");
      fgets(newNode->mName,15,stdin); 
      
      printf("Enter movie rating\n");
      scanf(" %f ",&newNode->rating);
     // getchar();
      newNode->next=NULL;
      //head=newNode;
      if(head == NULL){
            head = newNode;
      }else{
         Mov*temp =head;
         while(temp->next != NULL){
              temp = temp->next;
         }
         temp->next=newNode;
      }
 }
 void printll(){
         Mov*temp = head;
         while(temp!= NULL){
               printf("%s ",temp->mName);
               printf("%f ",temp->rating);
               
               temp = temp->next;
         }
         
}
void main(){
     addNode();
     addNode();
     addNode();
     printll();

}
         
         

