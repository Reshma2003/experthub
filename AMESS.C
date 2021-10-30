#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int aidly,adosa,atea,avada;
   int balance ,bidly,bdosa,btea,bvada;
   //scanf("%d%d%d%d",&aidly,&adosa,&atea,&avada);
   printf("enter alagu's idly\n:",aidly);
   scanf("%d",&aidly);
   printf("enter alagu's dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("enter alagu's tea\n:",atea);
   scanf("%d",&atea);
   printf("enter alagu's vada\n:",avada);
   scanf("%d",&avada);
   bidly=idly-aidly;
   bdosa=dosa-adosa;
   btea=tea-atea;
   bvada=vada-avada;
   printf("balance idly: %d \n",bidly);
   printf("balance dosa: %d \n",bdosa);
   printf("balance tea: %d \n",btea);
   printf("balance vada:%d\n",bvada);
   getch();
}


