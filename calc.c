#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
void fmenu()
{
	printf("CALCULATOR MENU\n");
	printf("[A]ddition\n");
	printf("[S]ubtraction\n");
	printf("[M]ultiplication\n");
	printf("[D]ivision\n");
	printf("[E]xit\n");
	
	printf("Choice? ");
}
void addMod(int x, int y)
{
		system("cls");
		printf("ADDITION CALCULATOR\n");
		printf("Enter x: ");
		scanf("%d", &x);
		printf("Enter y: ");
		scanf("%d", &y);
		int s = add(x,y);
		system("cls");
		printf("The answer is %d\n", s);
}
void subMod(int x, int y)
{
	system("cls");
	printf("SUBTRACTION CALCULATOR\n");
			printf("Enter x: ");
			scanf("%d", &x);
			printf("Enter y: ");
			scanf("%d", &y);
			int d = sub(x,y); 
			system("cls");
			printf("The answer is %d\n", d);
}
void multMod(int x, int y)
{
	system("cls");
	printf("MULTIPLICATION CALCULATOR\n");
			printf("Enter x: ");
			scanf("%d", &x);
			printf("Enter y: ");
			scanf("%d", &y);
			int p = mul(x,y);
			system("cls");
			printf("The answer is %d\n", p);
}
void divMod(int x, int y)
{
	system("cls");
	printf("DIVISION CALCULATOR\n");
			printf("Enter x: ");
			scanf("%d", &x);
			printf("Enter y: ");
			scanf("%d", &y);
			float q = divi(x,y);
			system("cls");
			printf("The answer is %.2f\n", q);
}

int main()
{
	char menu, smenu;
	int x, y, s, d, p, q;
	
	do{
	fmenu();
	
	scanf("%c", &menu);
	menu = toupper(menu);

	switch (menu)
	{
		case 'A':	
			do 
			{
				addMod(x, y);
				printf("Try Again? [Y/N]\n");
				getchar();
				scanf("%c", &smenu);
				smenu = toupper(smenu);
			}while(smenu=='Y');
		break;
			
		case 'S':
			do 
			{
				subMod(x, y);
				printf("Try Again? [Y/N]\n");
				getchar();
				scanf("%c", &smenu);
				smenu = toupper(smenu);
			}while(smenu=='Y');
		break;
			
		case 'M':
			do 
			{
				multMod(x, y);
				printf("Try Again? [Y/N]\n");
				getchar();
				scanf("%c", &smenu);
				smenu = toupper(smenu);
			}while(smenu=='Y');
		break;
			
		case 'D':
			do 
			{
				divMod(x, y);	
				printf("Try Again? [Y/N]\n");
				getchar();
				scanf("%c", &smenu);
				smenu = toupper(smenu);
			}while(smenu=='Y');
		break;
			
		default:
		 break;
		}
		system("cls");
}while(menu!='E' && menu!='e');

return 0;
}
