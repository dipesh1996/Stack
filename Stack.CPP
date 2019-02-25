#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{
		int ary[5]={0},temp;
		clrscr();
	
		int co=0;
		Menu:
		cout<<" \n Press 1 for push operation";
		cout<<" \n Press 2 for pop operation";
		cout<<" \n Press 3 for dispay the aray";
		cout<<" \n Press 4 for exit";
		cout<<" \n Enter you option => ";
		int choice;
		cin>>choice;
		if(choice == 1)
		{
			if(co == 5)
			{
			cout<<"\n Stack is full please perform Pop function";
			goto Menu;
			}
			else
			{
			cout<<"\n Enter number to be inserted => ";
			cin>>temp;
			ary[co]=temp;
			co++;
			goto Menu;
			}
		}
		else if(choice == 2)
		{
			co--;
				if(co < 0)
				{
				cout<<"\n Stack is empty please perform Push function";
				goto Menu;
				}
				else
				{
				cout<<"\n "<< ary[co]<< "Has been Poped out";
				ary[co]=0;

				}
				goto Menu;
		}
		else if(choice == 3)
		{
			for(co=0;co<5;co++)
				{
					cout << "\n"<< ary[co];
				}
		goto Menu;
		}
		else if(choice == 4)
		{
		exit(0);
		}
		else
		{
		cout<<"\n Enter a valid option";
		goto Menu;
		}
		getch();
}

