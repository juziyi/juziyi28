#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main(void)
{
int i,j,c,count=0,ans=0,flag=0,*ptr;
char a[1][6]={'d','o','g','o,','d','o'};


char b[10],alpha;
char d='_';
system("CLS");
c=strlen(&a[0][0]);
//printf("\n\t\t**************\n\n\t\t\t");
printf("\n\n\t\t\t ** HANGMAN ** \n");
	 printf("\n\t\t\t**************\t\t\t");	
		printf("\n\t\t\t..............\n\n\t\t\t  ");
		for(j=0;j<c;j++)	  { printf("%c ",d);
	  b[j]=d;}
	  //printf("\n\n\t\t*****************");
	 printf("\n\n\t\t\t..............\t\t\t");
	 printf("\n\n\t\t\t**************");
		// for(j=0;j<c;j++) printf("\n %c",b[j]);
		//{	   ptr=&b[j];
	 //  printf("\n %c",*ptr);
	 
	 while (ans<c)
	 { flag=0;
	 printf("\n\n\n\n\n\n\t enter a char");
	 alpha=getchar();
	 }
	 
	 for(i=0;i<c;i++)		{			if (alpha==a[0][i])		   {	b[i]=a[0][i];
	    flag=1;
	 	ans++; }
	
		system("CLS");
		printf("\n\n\t\t\t ** HANGMAN ** \n");		
		printf("\n\t\t\t**************\t\t\t");		
		printf("\n\t\t\t..............\n\n\t\t\t  ");		
		for(i=0;i<c;i++)		printf("%c ",b[i]);		
		printf("\n\n\t\t\t..............\t\t\t");		
		printf("\n\n\t\t\t**************");		
		if(flag==0)		
		{count++;		
		printf("\n\n\n\n\t\t%c is a wrong guess",alpha);		
		printf("\n\n\t\t (u have %d more guesses)",6-count);}		
		else{		printf("\n\n\t\t u r correct!!");	   
		printf("\n\t\t( u have %d more words to go)",c-ans);
		}	   
		//	printf("\n ans=%d",ans);	   
		//	printf("\n count=%d",count);		
		if(ans==c) break; 
		} 
		if(ans==c) printf("\n\n\n\t you won"); 
		else printf("\n\n\n\t\t  u lose.\n\n \t\t **SORRY  U R HANGED**");	  
		/*	if(output[i]!='_')		
		output[i]=a[0][i];		
		elseif(b[j]==a[0][i])		
		output[i]==a[0][i];		
		else		
		output[i]='_';		
		}		
		for(i=0;i<c;i++)		
		printf("%c",output[i]) 
		}      */
		getch();
		}
