#include<bits/stdc++.h>
#include<windows.h>
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


void DFS(int V,int S,GRAPH* G)
{
     bool VISITED[V];
    for(int i=0;i<V;i++)
    {
        VISITED[V]=false;// MAKE ALL VERTICES ZERO

    }

     VISITED[S]=true; // MAKE SOURCE VERTEX VISTED AND PRINT IT
     cout<<S<<" ";
     stack <int> mystack;

     mystack.push(S);
     NODE* TEMP=G->A[S].HEAD;// THIS WILL HOLD D ADDRESS OF SOURCE LINKED LIST EX 0------>2->4

     while(!mystack.empty())
     {
          while(TEMP)
          {
              if(VISITED[TEMP->DEST]==false)
                 {
                    cout<<" "<<TEMP->DEST;
                    mystack.push(TEMP->DEST);
                     VISITED[TEMP->DEST]=true;
                    TEMP=G->A[TEMP->DEST].HEAD; //KEEP CHANGING THE SOURCE NODE AS U VISIT IT ...0->2->3 SO GO TO 2 AFTER ITERANTIO 2->4->5 GO TO 4

                 }

                 else{

                    TEMP=TEMP->NEXT; //WHILE RECURSING ...SO WEN DER IS NO NODE AHEAD TO BE SCANNED WE BACKTRACK SO DT WE CAN MOVE TO THE ODER  VERTEX LIKE 2->4->5
                      // SO 4->x SO AFTR VISITING 4 GET BACK TO 2 AND GOT TO 5(THIS WILL BE DONE AFTER POPPING)





                 }
                         }

                     mystack.pop();//POP THE LAST ELEMNT AS ALL NODES ARE VISTED OF IT
                     if(mystack.size()!=0)// WE CAN ONLY POP TILL WE HAVE ELEMNT IN STACK ..SO WEN LAST NODE IS  POPPED THER IS NO ELEMNT LEFT TO BE ASSIGNED
                     {S=mystack.top();
                     TEMP=G->A[S].HEAD;// ASSIGN THE TOP VALUES TO RECURSE

                     }




//            cout<<"aakadjadjahsjhasf";Sleep(100);


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

DFS(V,0,G);




return 0 ;
}
