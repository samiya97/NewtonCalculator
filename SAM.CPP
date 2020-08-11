#include<stdio.h>
#include<conio.h>
#include<math.h>
void uc(void);
void ii(void);
int main ()
{ //clrscr();
printf("\n     !!  !!  !!  !!!!!!!!  !!      !!!!!!!  !!!!!!!!  !!!!!!!!!!  !!!!!!!! ");
printf("\n     !!  !!  !!  !!        !!      !!       !!    !!  !!  !!  !!  !!       ");
printf("\n     !!  !!  !!  !!!!!!!!  !!      !!       !!    !!  !!  !!  !!  !!!!!!!! ");
printf("\n     !!  !!  !!  !!        !!      !!       !!    !!  !!  !!  !!  !!       ");
printf("\n     !!!!!!!!!!  !!!!!!!!  !!!!!!! !!!!!!!  !!!!!!!!  !!  !!  !!  !!!!!!!! ");
printf("\n    ++===================================================================++  ");
printf("\n\n");
printf("@@@@@ @@@@  @@@@  @@@  @@@@   \n");
printf("  @   @  @  @  @   @   @     o \n");
printf("  @   @  @  @@@@   @   @     o  \n");
printf("  @   @@@@  @     @@@  @@@@       \n");
printf("\n");
printf("\t      %     %  %%%%%%  %  %  %  %%%%%%%  %%%%%%  %%     %       \n");

printf("\t      % %   %  %       %  %  %     %     %    %  % %    %       \n");

printf("\t      %  %  %  %%%%%%  %  %  %     %     %    %  %  %   %       \n");

printf("\t      %   % %  %       %  %  %     %     %    %  %    % %       \n");

printf("\t      %    %%  %%%%%%  %%%%%%%     %     %%%%%%  %     %%       \n");

printf("\n");

printf("\t\t          %      %%%%%  %  %  %  %%%%%        \n");

printf("\t\t          %      %   %  %  %  %  %        \n");

printf("\t\t          %      %%%%%  %  %  %  %%%%%             \n");

printf("\t\t          %      %   %  %  %  %      %            \n");

printf("\t\t          %%%%%  %   %  %%%%%%%  %%%%%               \n");
char a;
a=getch();
if(a=='\r')
{ //clrscr();
printf("\n\t :)*******************START THE PROGRAM***************** :) ");
}
  
  char chs,ex='1';
  while(ex!='0')
{  int x=999999;
   char c1,c2,c3,c4,c5;
   float vf=x,vi=x,ac=x,time=x,dis=x,at,vff=0,sa2,visq,vif=0,vfsq,sdt;
   float atf,st,mv,acf=0,s2,vfvi,vit,timesq,svit,timef=0,a2,disf=0;
 printf("\n\n+********Specify the values you're provided with:********+\n");
 printf("1. Do you have final velocity? Y or N\n");
 c1=getche();
 switch(c1)
{  case 'y':
    case 'Y':
    printf("\n~ ~ ~ ~ ~ ~Enter final velocity~ ~ ~ ~ ~ ~\n");
    scanf("%f",&vf);
    break;
    case 'n':
    case 'N':
    break;
   default:
   uc();    }
printf("\n2. Do you have initial velocity? Y or N\n");
c2=getche();
switch(c2)
{  case 'y':
    case 'Y':
    printf("\n-------------Enter initial velocity-----------\n");
    scanf("%f",&vi);
    break;
    case 'n':
    case 'N':
    break;
   default:
   uc();   }
printf("\n3. Do you have acceleration? Y or N\n");
c3=getche();
switch(c3)
{  case 'y':
    case 'Y':
    printf("\n~ ~ ~ ~ ~ ~ ~ ~Enter acceleration ~ ~ ~ ~ ~ ~\n");
    scanf("%f",&ac);
    break;
    case 'n':
    case 'N':
    break;
    default:
    uc();   }
printf("\n4. Do you have time? Y or N\n");
c4=getche();
switch(c4)
{  case 'y':
    case 'Y':
    printf("\n--------------Enter time-------------\n");
    scanf("%f",&time);
    break; 
    case 'n':
    case 'N':
    break;
   default:
   uc();   }
printf("\n5. Do you have distance? Y or N\n");
c5=getche();
switch(c5)
{  case 'y':
    case 'Y':
    printf("\n~ ~ ~ ~ ~ ~ ~ ~Enter distance~ ~ ~ ~ ~ ~ ~\n");
    scanf("%f",&dis);
    break;
    case 'n':
    case 'N':
    break;
   default:
   uc();   }
if(vf==x && vi==x && ac==x && time==x && dis==x)
{
printf("\n   You didn't provide anything   :( \n");
}
else if(vf!=x && vi!=x && ac!=x && time!=x && dis!=x)
{
printf("\n   You provided everything   :(  \n");
}
else
{  printf("\n============================================================");
   printf("\n\n  What do you want to calculate? 1, 2, 3, 4, 5 or 6\n");
    printf("1.Final Velocity\n2.Initial Velocity\n3.Acceleration\n4.Time\n5.Distance\n0.Exit\n");
    printf("\n============================================================");
    
    printf("\n********Choose******\n*");
    chs=getche();
  if (chs=='1'&& vf!=x)
{
printf("\n  You already provided final velocity :( \n");
}
if (chs=='2' && vi!=x)
{
printf("\n  You already provided initial velocity :( \n");
}
if (chs=='3' && ac!=x)
{
printf("\n  You already provided acceleration :( \n");
}
if (chs=='4'  && time!=x)
{
printf("\n  You already provided time :( \n");
}
if (chs=='5'  && dis!=x)
{
printf("\n  You already provided distance :( \n");
}
if (chs=='1' && vf==x)
{
if(time!=x && ac!=x && vi!=x)
	{     at=ac*time;
	       vff=vi+at;     }
	else if(dis!=x && vi!=x && ac!=x)
	{     sa2=ac*2*dis;
	       visq=vi*vi;
	       vff=sa2+visq;
	       vff=sqrt(vff);   }
	else
	{    ii();   }
printf("\n **********Final Velocity= %.2f********* :) ",vff);
}
if (chs=='2' && vi==x)
{
if (dis!=x && time!=x && ac!=x)
	{    st=dis/time;
	      at=ac*time;
	      at=at/2;
	      vif=st-at;    }
	else if (vf!=x && ac!=x && dis!=x)
	{    sa2=ac*dis*2;
	      vfsq=vf*vf;
	      vif=vfsq-sa2;
	      vif=sqrt(vif);    }
	else if (vf!=x && ac!=x && time!=x)
	{    at=ac*time;
		  vif=vf-at;        }
	else
	{    ii();    }
printf("\n~~~~~~~Initial Velocity= %.2f~~~~~~~ :) ",vif);
}
if (chs=='3' && ac==x)
{
if (vf!=x && vi!=x && time!=x)
	{    vfvi=vf-vi;
	      acf=vfvi/time;    }
	else if (vi!=x && time!=x && dis!=x)
	{    vit=vi*time*2;
	      timesq=time*time;
	      dis=dis*2;
	      svit=dis-vit;
	      acf=svit/timesq;    }
	else if(vf!=x && vi!=x && dis!=x)
	{     vfsq=vf*vf;
	      visq=vi*vi;
	      s2=dis*2;
	      vfvi=vfsq-visq;
	      acf=vfvi/s2;         }
	else
	{   ii();    }
printf("\n***********Acceleration= %.2f********** :) ",acf);
}
if (chs=='4'  && time==x)
{
if (vi!=x && ac!=x && vf!=x)
	{    vfvi=vf-vi;
	      timef=vfvi/ac;  }
	else
	{   ii();   }
printf("\n~~~~~~~Time= %.2f~~~~~~:) \n",timef);
}
if (chs=='5' && dis==x)
{
if (ac!=x && vf!=x && vi!=x)
	{    vfsq=vf*vf;
	     visq=vi*vi;
	     a2=ac*2;
	     vfvi=vfsq-visq;
	    disf=vfvi/a2;
	}
	else if (ac!=x && time!=x && vi!=x)
	{   vit=vi*time;
	     timesq=time*time;
	    at=timesq*ac;
	    at=at/2;
	    disf=vit+at;    }
	else
	{   ii();   }
printf("\n*********Distance= %.1f******* :) \n",disf);
}
}
printf("\n\n=======Press anykey to restart======= :) \n****0.Exit****:) \n");
ex=getche();
}
getch();
}
void uc(void)
{    printf("\n     Unknown Command    :( \n");    }
void ii(void)
{    printf("\n     Incomplete Information :( \n");   }
