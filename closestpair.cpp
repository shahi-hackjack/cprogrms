#include<bits/stdc++.h>

using namespace std;


struct Point{
int x ;
int y;

};


int compareX(const void* a, const void* b)
{
    Point *p1 = (Point *)a,  *p2 = (Point *)b;
    return (p1->x - p2->x);
}
// Needed to sort array of points according to Y coordinate
int compareY(const void* a, const void* b)
{
    Point *p1 = (Point *)a,   *p2 = (Point *)b;
    return (p1->y - p2->y);
}
float dist(Point X,Point Y)
     {
        return sqrt( (X.x-Y.x)*(X.x-Y.x)+(Y.y-X.y)*(Y.y-X.y));

     }

float brute(Point P[],int n)
  { int d=FLT_MAX;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(dist(P[i],P[j])<d)
              d=dist(P[i],P[j]);

       }

 }
return d;
}


float closestpair(Point Px[],Point Py[],int n )
{
if(n<=3)
{
    return brute(Py,n);
}

int mid=n/2;
Point midpoint=Px[mid];

Point Pyl[mid+1];//take both side pyr pyl soryed ones and continue







}




int main()
{
Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
int n =sizeof(P)/sizeof(P[0]);

Point Px[n];
Point Py[n];

for(int i=0;i<n;i++)
{
    Px[i]=P[i];
    Py[i]=P[i];
}
    qsort(Px, n, sizeof(Point), compareX);
    qsort(Py, n, sizeof(Point), compareY);

float dist=closestpair(Px,Py,n);

return 0;}
