#include<stdio.h>
#include<stdlib.h>
struct BinaryTreeNode{
int data;
struct BinaryTreeNode* left;
struct BinaryTreeNode* right;
                     };


struct llnode{

struct BinaryTreeNode*r;
struct llnode*next;
             };

struct BinaryTreeNode* root=NULL;
struct llnode*front=NULL;
struct llnode*rear=NULL;

void levelorder(struct  BinaryTreeNode* temp ){
	while(1){
          
	   
	   if(front==NULL && rear==NULL){

           struct llnode*n=(struct llnode*)malloc(sizeof(struct llnode));
           n->r=temp;
	   n->next=NULL;
	   front=n;
	   rear=n;
                
  
	}
	
	if(temp->left!=NULL){
             struct llnode*n=(struct llnode*)malloc(sizeof(struct llnode));	
             n->r=temp->left;
	     n->next=NULL;
	     rear->next=n;
	     rear=rear->next;
	
	}

	if(temp->right!=NULL){
             struct llnode*n=(struct llnode*)malloc(sizeof(struct llnode));
             n->r=temp->right;
             n->next=NULL;
	     rear->next=n;
	     rear=rear->next;

	
	}

       printf("%d",front->r->data);
       front=front->next;
       if(front==NULL){
       rear=NULL;
       }
      if(front==NULL&&rear==NULL){
      break;
      }
      
       temp=front->r;

              }
	
	}


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
       while(1){
       if(temp->data >d){
       if(temp->left==NULL){
             temp->left=n;
             break;
       }
       temp=temp->left;
      
       }
       else if(temp->data<d){
                  if(temp->right==NULL){
			  temp->right=n;
		           break;
		  }
		  temp=temp->right;
       }
       
       
       }
         }

}
  void Inorder(struct BinaryTreeNode*temp){
  if(temp){
  Inorder(temp->left);
  printf("%d",temp->data);
  Inorder(temp->right);
  }
  
  }             
void Preorder(struct BinaryTreeNode * temp){
	if(temp){
	printf("%d",temp->data);
	Preorder(temp->left);
	Preorder(temp->right);
	}


}
void PostOrder(struct BinaryTreeNode *temp){
if(temp){
	PostOrder(temp->left);
	PostOrder(temp->right);
        printf("%d",temp->data);

}

}

int main(){

while(1){

	int choice;
	printf("Press 1 to inseert node in BinarySearchTree-\n");
        printf("Press 2 to print the value in Inorder\n");
	printf("Press 3 to print the value in PreOrder\n");
        printf("Press 4 to print the value in Postorder\n");
	printf("Press 5 to print the values in levelorder\n");
scanf("%d",&choice);

switch(choice){
	case 1:
		insert(root);
                break;
        case 2:
		Inorder(root);
                break;
	case 3:
	        Preorder(root);
	        break;	
	case 4:
	       PostOrder(root);	
	       break;
        case 5:
	       levelorder(root);
	      break; 

}

}


}
