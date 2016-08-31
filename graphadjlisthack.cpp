#include<bits/stdc++.h>
using namespace std;
//ALL VARIBLES AND STRUCT IN CAPS SHAHI SWAG
struct NODE{
int DEST;
struct NODE* NEXT;// thisIS SIMPLE LINKED LIST

};

struct NODEARRAY{

    NODE* HEAD; // THIS CONTAINS HEAD ADDRESS OF

};

struct GRAPH{

    int V;
    NODEARRAY *A ;

};

struct GRAPH* CREATEGRAPH(int V)
  {
      struct GRAPH* G = (struct GRAPH*) malloc(sizeof(struct GRAPH));
      G->V=V;
      G->A=(struct NODEARRAY*)malloc(V*sizeof(NODEARRAY));

      for(int i=0;i<V;i++)
      {
          G->A[i].HEAD=NULL;


      }
      return G;
  }

void ADDEDGE(GRAPH *G,int S,int D)
{
   struct NODE* TEMP=(struct NODE*)malloc(sizeof(struct NODE*));
   TEMP->NEXT=NULL;
   TEMP->DEST=D;

   TEMP->NEXT=G->A[S].HEAD;
   G->A[S].HEAD=TEMP;

     struct NODE* TEMP2=(struct NODE*)malloc(sizeof(struct NODE*));
   TEMP2->NEXT=NULL;
   TEMP2->DEST=S;


   TEMP2->NEXT=G->A[D].HEAD;
   G->A[D].HEAD=TEMP2;




}

void PRINT(GRAPH*G,int V)
{

  for(int i=0;i<V;i++)
  {
      NODE *DISPLAY=G->A[i].HEAD;
      cout<<i;
      while(DISPLAY)
      {
          cout<<"->"<<DISPLAY->DEST;
          DISPLAY=DISPLAY->NEXT;
      }
        cout<<"\n";
  }



}



int main()
{

  int V;
  cout<<"\nENTER NO OF VERTICES ";
  cin>>V;
GRAPH *G=CREATEGRAPH(V);
//ADDEDGE(G,0,1);
//ADDEDGE(G,0,1);
//ADDEDGE(G,1,2);
   int E;
   cout<<"\nENTER NO OF  EDGES ";
    cin>>E;
   int X,Y;
    for(int i=0;i<E;i++)
    {
        cout<<"ENTER VERTEX X :";
        cin>>X;
        cout<<"ENTER VERTEX Y :";
        cin>>Y;
        ADDEDGE(G,X,Y);

    }


PRINT(G,V);






return 0 ;
}
