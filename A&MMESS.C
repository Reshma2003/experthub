#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int aidly,adosa,atea,avada;
   int midly,mdosa,mtea,mvada;
   clrscr();
   //scanf("%d%d%d%d",&aidly,&adosa,atea,avada);
   //scanf("%d%d%d%d",&midly,&mdosa,&mtea,&mvada);
   printf("enter alagu's idly\n:",aidly);
   scanf("%d",&aidly);
   printf("enter alagu's dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("enter alagu's tea\n:",atea);
   scanf("%d",&atea);
   printf("enter alagu's vada\n:",avada);
   scanf("%d",&avada);
   printf("enter moni's idly\n:",midly);
   scanf("%d",&midly);
   printf("enter moni's dosa\n:",mdosa);
   scanf("%d",&mdosa);
   printf("enter moni's tea\n:",mtea);
   scanf("%d",&mtea);
   printf("enter moni's vada\n:",mvada);
   scanf("%d",&mvada);

   idly=idly-aidly;
   dosa=dosa-adosa;
   tea=tea-atea;
   vada=vada-avada;

   idly=idly-midly;
   dosa=dosa-mdosa;
   tea=tea-mtea;
   vada=vada-mvada;
   printf("idly: %d\n",idly);
   printf("dosa: %d\n",dosa);
   printf("tea: %d\n",tea);
   printf("vada: %d\n",vada);

   getch();
}

