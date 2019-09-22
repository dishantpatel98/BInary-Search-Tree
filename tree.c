#include<stdio.h>
#include<stdlib.h>
struct BinaryTreeNode{
int data;
struct BinaryTreeNode* left;
struct BinaryTreeNode* right;
                     };


struct BinaryTreeNode* root=NULL;

void insert(struct BinaryTreeNode* temp){
      printf("Enter the value you want to insert\n");
      int d;
      scanf("%d",&d);
	       
	struct BinaryTreeNode *n=(struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
	n->left=NULL;
	n->right=NULL;
        n->data=d;      
if(root==NULL){
       root=n;
              }

else {
      // while(temp!=NULL){
       if(temp->data >d){
       if(temp->left==NULL)
	       temp->left=n;
       temp=temp->left;
       
       }
       else if(temp->data<d){
                  if(temp->right==NULL)
			  temp->right=n;
		  temp=temp->right;
       }
       
       
      // }
         }

}
                                                

int main(){

while(1){

	int choice;
	printf("Press 1 to inseert node in BinarySearchTree-");


scanf("%d",&choice);

switch(choice){
	case 1:
		insert(root);
                break;


}

}


}
