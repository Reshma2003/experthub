#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int midly,mdosa,mtea,mvada;
   int balance,bidly,bdosa,btea,bvada;
   //scanf("%d%d%d%d",&midly,&mdosa,&mtea,&mvada);
   printf("enter how many idly did monisha ate?\n:",midly);
   scanf("%d",&midly);
   printf("enter how many dosa did monisha ate?\n:",mdosa);
   scanf("%d",&mdosa);
   printf("enter how many tea did monisha drunk?\n:",mtea);
   scanf("%d",&mtea);
   printf("enter how many vada did monisha ate?\n:",mvada);
   scanf("%d",&mvada);
   bidly=idly-midly;
   bdosa=dosa-mdosa;
   btea=tea-mtea;
   bvada=vada-mvada;
   printf("balance idly: %d\n",bidly);
   printf("balance dosa: %d\n",bdosa);
   printf("balance tea: %d\n",btea);
   printf("balance vada: %d\n",bvada);
   getch();
}

