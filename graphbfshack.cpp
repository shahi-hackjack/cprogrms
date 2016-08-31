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
//UNCOOMENT THIS TO MAKE GRAPH UNDIRECTED

     /*struct NODE* TEMP2=(struct NODE*)malloc(sizeof(struct NODE*));
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


void BFS(int V,int S,GRAPH* G)
{
     bool VISITED[V];
    for(int i=0;i<V;i++)
    {
        VISITED[V]=false;//MAKE ALL NODE UNVISTED

    }


    queue <int> myqueue;

    VISITED[S]=true;
    myqueue.push(S);//PUSH THE SOURCE NODE INTO QUEUE

    //vector<int>::iterator it;
     while(!myqueue.empty())
     {
         S=myqueue.front();
         cout<<S<<" ";//PRINT THE  TOP ELEMNT
         myqueue.pop();
         NODE *TEMP=G->A[S].HEAD;//GET THE LINKED LIST ADDRESS TO TEMP 0---->2->4->5
         while(TEMP)
         {
            if(!VISITED[TEMP->DEST])
            {
                VISITED[TEMP->DEST]=true;
                myqueue.push(TEMP->DEST);// KEEP PUSHING THE ADJACENT NODE
            }

            TEMP=TEMP->NEXT; //KEEP GOING TO ADJACENT NODE POP IT WEN ALL NODES OF PARENT IS TRAVERSED 0->2-4->5 NOW GET OUT OF THE LOOP PRINT 2 AND ADD ITS ADJCENT ELEMNT TO LAST

         }

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

BFS(V,0,G);




return 0 ;
}
