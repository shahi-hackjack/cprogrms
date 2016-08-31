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

  /*   struct NODE* TEMP2=(struct NODE*)malloc(sizeof(struct NODE*));
   TEMP2->NEXT=NULL;
   TEMP2->DEST=S;


   TEMP2->NEXT=G->A[D].HEAD;
   G->A[D].HEAD=TEMP2;
*/



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

void TOPOLOGICAL(int V,GRAPH *G)
{  int i;
   stack <int> mystack;
   stack <int> printstack;
    bool VISITED[V];
    for(i=0;i<V;i++)
    {
        VISITED[i]=false;
    }

    for(i=0;i<V;i++) // THE GRAPH IS DIRECTED THER CAN BE CHNCE DT SOME NODE CANNTO BE TRACED BACK SO WE NEED TO TRAVERSE EVERY NODE
    {
        if(!VISITED[i])
        {
            mystack.push(i);
            NODE* TEMP=G->A[i].HEAD;
         while(!mystack.empty()){
            while(TEMP)
            {
                if(!VISITED[TEMP->DEST])
                { //cout<<"AAKANAKANU";
                mystack.push(TEMP->DEST);
                VISITED[TEMP->DEST]=true; // INSTEAD OF PRINTING HERE LIKE DFS WE PUUSH IT AND WE PRINT IT WEN THERE IS NO CHIL NODE
                TEMP=G->A[TEMP->DEST].HEAD;
                }
                else{
                        TEMP=TEMP->NEXT;
                    }

            }

    //cout<<mystack.top();
          printstack.push(mystack.top());//STACK TO REVERSE THE SEQUENCE ALL NODE HAS BEEN TRAVERSED
          mystack.pop();
          if(mystack.size()!=0){
                int S=mystack.top();
                 TEMP=G->A[S].HEAD;

          }
        }
              }}

cout<<"\n SORTED ";
    while(printstack.empty()== false)
    {
        cout <<printstack.top()<< " ";
        printstack.pop();
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

TOPOLOGICAL(V,G);




return 0 ;
}
