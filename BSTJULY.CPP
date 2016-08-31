#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
    };

 void create(struct node **root,int data)
 {
    struct node*temp;

  if(*(root)==NULL)
  {
      //cout<<"i worked root ";
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
      *(root)=temp;
  }

  else if(data<(*root)->data)
  {
      //cout<<"i worked leftt";
        create(&(*root)->left,data);
  }
  else{
  //cout<<"i worked left ";
    create(&(*root)->right,data);
  }


return ;
 }


 void inorder(struct node* root)
      {
           if(root!=NULL)
           {
               inorder(root->left);
               cout<<root->data;
               inorder(root->right);


           }


      }


int main()
{

struct node*root=NULL;
if(root==NULL)
{
   // cout<<"rootNULL";
}
create(&root,10);

//cout<<root->data;
create(&root,15);

create(&root,6);//
//cout<<root->right->data;
//cout<<root->right->right->data;
create(&root,5);
//cout<<root->left->data;
inorder(root);

if(root->left==NULL)
   cout<<"NULL";






return 0 ;

}
