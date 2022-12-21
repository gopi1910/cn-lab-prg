#include<stdio.h>
#include<conio.h>
struct node
{
  unsigned dist[20];
  unsigned form[20];
 }rt[10];
 void main()
 {
   int costmat[20][20];
   int nodes,i,j,k,count=0;
   printf("\nEnter the number of nodes:");
   scanf("%d",&nodes);
   printf("\Enter the cost matrix:\n");
   for(i=0;i<nodes;i++)
   {
     for(j=0;j<nodes;j++)
     {
       scanf("%d",&costmat[i][j]);
       costmat[i][i]=0;
       rt[i].dist[j]=costmat[i][j];
       rt[i].form[j]=j;
     }
    }
     do
     {
     count=0;
     for(i=0;i<nodes;i++)
     for(j=0;i<nodes;j++)
       if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
     {
       rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
       rt[i].form[j]=k;
       count++;
     }
    }while(count!=0);
     for(i=0;i<nodes;i++)
     {
       printf("\n\n for router %d\n",i+1);
       for(j=0;j<nodes;j++)
       {
	printf("\n node %d via %d distance %d",j+1,rt[i].form[j]+1,rt[i].dist[j]);
	}
      }
     printf("\n\n");
     getch();
}


















