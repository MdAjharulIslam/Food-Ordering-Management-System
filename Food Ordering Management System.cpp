#include<iostream>
#include<conio.h>
#include<string>
#include<ctime>
using namespace std;
time_t tt;
struct tm * ti;
char name[10],ch;
int qnty,sum,opt,n,a;
int burger()
{
	burger:
	b:
	cout<<"\t\t\t\t\t    *------BURGER------*"<<endl;
	cout<<"\t\t\t\tPress '1' Spicy Chicken Burger ................BDT:299"<<endl;
	cout<<"\t\t\t\tPress '2' Spicy Chicken Burger with Cheese ....BDT:349"<<endl;
	cout<<"\t\t\t\tPress '3' Classic Chicken Burger...............BDT:220"<<endl;
	cout<<"\t\t\t\tPress '4' Classic Chicken Burger with Cheese...BDT:280"<<endl;
	cout<<"\t\t\t\tPress '5' Dhaka Tower Burger...................BDT:380"<<endl;
	cout<<"\t\t\t\tPress 'Backspace' To Go Back To Menu\n"<<endl;
	cout<<"Please select any option:";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=53)
	{
		cout<<"How much quantity do you want? ";
		cin>>qnty;
		cout<<endl;
		switch(a)
		{
			case 49:
			{
				cout<<"You Entered "<<qnty<<" Spicy Chicken Burger "<<endl;
				sum=299*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas0:
				cout<<"If you want to go back to 'Burger' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto b;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas0;
				}
				break;
			}

			case 50:
			{
				cout<<"You Entered "<<qnty<<" Spicy Chicken Burger With Cheese "<<endl;
				sum=349*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas1:
				cout<<"If you want to go back to 'Burger' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto b;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas1;
				}
				break;
			}

			case 51:
			{
				cout<<"You Entered "<<qnty<<" Classic Chicken Burger "<<endl;
				sum=220*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas2:
				cout<<"If you want to go back to 'Burger' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto b;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas2;
				}
				break;
			}
			case 52:
			{
				cout<<"You Entered "<<qnty<<" Classic Chicken Burger With Cheese "<<endl;
				sum=280*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas3:
				cout<<"If you want to go back to 'Burger' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto b;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas3;
				}
				break;
			}

			case 53:
			{
				cout<<"You Entered "<<qnty<<" Dhaka Tower Burger "<<endl;
				sum=380*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas4:
				cout<<"If you want to go back to 'Burger' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto b;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas4;
				}
				break;
			}
		}
	}
	else if(a==8)
	{
		system("cls");
		return a;
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 5\n\n";
		goto burger;
	}
}


int paratha()
{
	paratha:
	p:
	cout<<"\t\t\t\t\t   *----PARATHA ROLLS----*"<<endl;
	cout<<"\t\t\t\tPress '1' Shahi Paratha Roll..................BDT:299"<<endl;
	cout<<"\t\t\t\tPress '2' Shahi Cheese Paratha Roll...........BDT:360"<<endl;
	cout<<"\t\t\t\tPress '3' Chicken Paratha Roll................BDT:260"<<endl;
	cout<<"\t\t\t\tPress '4' Vegetable Paratha Roll..............BDT:150"<<endl;
	cout<<"\t\t\t\tPress 'Backspace' To Go Back To Menu\n"<<endl;
	cout<<"Please select any option:";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=52)
	{
		cout<<"How much quantity do you want? ";
		cin>>qnty;
		cout<<endl;
		switch(a)
		{
			case 49:
			{
				cout<<"You Entered "<<qnty<<" Shahi Paratha Roll "<<endl;
				sum=299*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas0:
				cout<<"If you want to go back to 'PARATHA ROLLS' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto p;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas0;
				}
				break;
			}
			case 50:
			{
				cout<<"You Entered "<<qnty<<" Shahi Cheese Paratha Roll "<<endl;
				sum=360*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas1:
				cout<<"If you want to go back to 'PARATHA ROLLS' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto p;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas1;
				}
				break;
			}
			case 51:
			{
				cout<<"You Entered "<<qnty<<" Chicken Paratha Roll "<<endl;
				sum=260*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas2:
				cout<<"If you want to go back to 'PARATHA ROLLS' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto p;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas2;
				}
				break;
			}
			case 52:
			{
				cout<<"You Entered "<<qnty<<" Vegetable Paratha Roll "<<endl;
				sum=150*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas3:
				cout<<"If you want to go back to 'PARATHA ROLLS' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto p;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas3;
				}
				break;
			}
		}
	}
	else if(a==8)
	{
		system("CLS");
		return a;
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n";
		goto paratha;
	}
}


int shawarma()
{
	shawarma:
	s:
	cout<<"\t\t\t\t\t    *------SHAWARMA-----*"<<endl;
	cout<<"\t\t\t\tPress '1' Shahi Shawarma.....................BDT:260"<<endl;
	cout<<"\t\t\t\tPress '2' Shahi Cheese Shawarma..............BDT:299"<<endl;
	cout<<"\t\t\t\tPress '3' Deshi Chicken Shawarma.............BDT:180"<<endl;
	cout<<"\t\t\t\tPress '4' Deshi Vegetarian Shawarma..........BDT:160"<<endl;
	cout<<"\t\t\t\tPress 'Backspace' To Go Back To Menu\n"<<endl;
	cout<<"Please select any option:";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=52)
	{
		cout<<"How much quantity do you want? ";
		cin>>qnty;
		cout<<endl;
		switch(a)
		{
			case 49:
			{
				cout<<"You Entered "<<qnty<<" Shahi Shawarma "<<endl;
				sum=260*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas0:
				cout<<"If you want to go back to 'SHAWARMA' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto s;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas0;
				}
				break;
			}
			case 50:
			{
				cout<<"You Entered "<<qnty<<" Shahi Cheese Shawarma "<<endl;
				sum=299*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas1:
				cout<<"If you want to go back to 'SHAWARMA' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto s;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas1;
				}
				break;
			}
			case 51:
			{
				cout<<"You Entered "<<qnty<<" Deshi Chicken Shawarma "<<endl;
				sum=180*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas2:
				cout<<"If you want to go back to 'SHAWARMA' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto s;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas2;
				}
				break;
			}
			case 52:
			{
				cout<<"You Entered "<<qnty<<" Deshi Vegetarian Shawarma "<<endl;
				sum=160*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas3:
				cout<<"If you want to go back to 'SHAWARMA' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto s;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas3;
				}
				break;
			}
		}
	}
	else if(a==8)
	{
		system("CLS");
		return a;
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n";
		goto shawarma;
	}
}

int biryani()

{
	biryani:
	bi:
	cout<<"\t\t\t\t\t     *-----BIRYANI-----*"<<endl;
	cout<<"\t\t\t\tPress '1' Kacchi Biryani..................BDT:150"<<endl;
	cout<<"\t\t\t\tPress '2' Tehari Biryani..................BDT:130"<<endl;
	cout<<"\t\t\t\tPress '3' Dhaka Chicken Biryani...........BDT:170"<<endl;
	cout<<"\t\t\t\tPress '4' Beef Biryani....................BDT:200"<<endl;
	cout<<"\t\t\t\tPress 'Backspace' To Go Back To Menu\n"<<endl;
	cout<<"Please select any option:";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=52)
	{
		cout<<"How much quantity do you want? ";
		cin>>qnty;
		cout<<endl;
		switch(a)
		{
			case 49:
			{
				cout<<"You Entered "<<qnty<<" Kacchi Biryani "<<endl;
				sum=150*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas0:
				cout<<"If you want to go back to 'BIRYANI' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto bi;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Enter Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas0;
				}
				break;
			}
			case 50:
			{
				cout<<"You Entered "<<qnty<<" Tehari Biryani "<<endl;
				sum=130*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas1:
				cout<<"If you want to go back to 'BIRYANI' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto bi;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Enter Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas1;
				}
				break;
			}
			case 51:
			{
				cout<<"You Entered "<<qnty<<" Dhaka Chicken Biryani "<<endl;
				sum=170*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas2:
				cout<<"If you want to go back to 'BIRYANI' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto bi;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Enter Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas2;
				}
				break;
			}
			case 52:
			{
				cout<<"You Entered "<<qnty<<" Beef Biryani "<<endl;
				sum=200*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas3:
				cout<<"If you want to go back to 'BIRYANI' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto bi;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Enter Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas3;
				}
				break;
			}
		}
	}
	else if(a==8)
	{
		system("CLS");
		return a;
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter value between 1 to 4\n\n";
		goto biryani;
	}
}

int pizza()
{
	pizza:
	pi:
	cout<<"\t\t\t\t\t     *------PIZZA-----*"<<endl;
	cout<<"\t\t\t\tPress '1' Panta Pizza...!"<<endl;
	cout<<"\t\t\t\tPress '2' Bhuna Khichuri Pizza...!"<<endl;
	cout<<"\t\t\t\tPress '3' Kacchi Biryani Pizza...!"<<endl;
	cout<<"\t\t\t\tPress 'Backspace' To Go Back To Menu\n"<<endl;
	cout<<"Please select any option:";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=51)
	{
		size:
		cout<<"\nPress '1' Small Pizza BDT: 350"<<"\nPress '2' Medium Pizza BDT: 700 "<<"\nPress '3' Large Pizza BDT: 1500"<<"\nPress 'Backspace' To Go Back To Pizza\n";
		cout<<"\nChoose Size Please: ";
		ch=getch();
		a=ch;
		cout<<endl;
		if(a>=49 && a<=51)
		{
			cout<<"How much quantity do you want? ";
			cin>>qnty;
			cout<<endl;
			switch(a)
			{
				case 49:
				{
					cout<<"You Entered "<<qnty<<" Small Pizza  "<<endl;
					sum=350*qnty;
					cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
					cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
					cas0:
					cout<<"If you want to go back to 'PIZZA' Press 'Backspace'";
					ch=getch();
					a=ch;
					if(a==8)
					{
						system("cls");
						goto pi;
					}
					else
					{
						cout<<endl;
						cout<<endl;
						cout<<"You Entered the Wrong Keyword...!";
						cout<<endl;
						cout<<endl;
						goto cas0;
					}
					break;
				}
				case 50:
				{
					cout<<"You Entered "<<qnty<<" Medium Pizza "<<endl;
					sum=700*qnty;
					cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
					cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
					cas1:
					cout<<"If you want to go back to 'PIZZA' Press 'Backspace'";
					ch=getch();
					a=ch;
					if(a==8)
					{
						system("cls");
						goto pi;
					}
					else
					{
						cout<<endl;
						cout<<endl;
						cout<<"You Entered the Wrong Keyword...!";
						cout<<endl;
						cout<<endl;
						goto cas1;
					}
					break;
				}
				case 51:
				{
					cout<<"You Entered "<<qnty<<" Large Pizza "<<endl;
					sum=1500*qnty;
					cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
					cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
					cas2:
					cout<<"If you want to go back to 'PIZZA' Press 'Backspace'";
					ch=getch();
					a=ch;
					if(a==8)
					{
						system("cls");
						goto pi;
					}
					else
					{
						cout<<endl;
						cout<<endl;
						cout<<"You Entered the Wrong Keyword...!";
						cout<<endl;
						cout<<endl;
						goto cas2;
					}
					break;
				}
			}
		}
		else if(a==8)
		{
			system("CLS");
			goto pizza;
		}
		else
		{
			system("cls");
			cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
			goto size;
		}
	}
	else if(a==8)
	{
		system("CLS");
		return a;
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
		goto pizza;
	}
}

int salad()
{
	salad:
	sa:
	cout<<"\t\t\t\t\t     *------SALAD------*"<<endl;
	cout<<"\t\t\t\tPress '1' Bhapa Pitha Salad................BDT:349"<<endl;
	cout<<"\t\t\t\tPress '2' Deshi Chicken Salad...............BDT:449"<<endl;
	cout<<"\t\t\t\tPress '3' Kacha Aam Salad...................BDT:480"<<endl;
	cout<<"\t\t\t\tPress 'Backspace' To Go Back To Menu\n"<<endl;
	cout<<"Please select any option:";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=51)
	{
		cout<<"How much quantity do you want? ";
		cin>>qnty;
		cout<<endl;
		switch(a)
		{
			case 49:
			{
				cout<<"You Entered "<<qnty<<" Bhapa Pitha Salad "<<endl;
				sum=349*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas0:
				cout<<"If you want to go back to 'SALAD' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto sa;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas0;
				}
				break;
			}
			case 50:
			{
				cout<<"You Entered "<<qnty<<" Deshi Chicken Salad "<<endl;
				sum=449*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas1:
				cout<<"If you want to go back to 'SALAD' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto sa;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas1;
				}
				break;
			}
			case 51:
			{
				cout<<"You Entered "<<qnty<<" Kacha Aam Salad "<<endl;
				sum=480*qnty;
				cout<<"The bill is: "<<sum<<"\t\t\t\t\t\tDate & Time"<<endl;
				cout<<"\t\t\t\t\t\t\t\t"<<asctime(ti)<<endl;
				cas2:
				cout<<"If you want to go back to 'SALAD' Press 'Backspace'";
				ch=getch();
				a=ch;
				if(a==8)
				{
					system("cls");
					goto sa;
				}
				else
				{
					cout<<endl;
					cout<<endl;
					cout<<"You Entered the Wrong Keyword...!";
					cout<<endl;
					cout<<endl;
					goto cas2;
				}
				break;
			}
		}
	}
	else if(a==8)
	{
		system("CLS");
		return a;
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n";
		goto salad;
	}
}


int main()

{
	int b;
	time(&tt);
	ti=localtime(&tt);
	cout<<"\n\t\t\t\t*--------FOOD ORDERING MANAGEMENT SYSTEM--------*\n\n"<<endl;
	cout<<"  Please enter your name: ";
	gets(name);
	b:
	cout<<"\n\n  As-salamu Alaikom..! "<<name<<"."<<"\n  What would you like to order?\n\n";
	correct:
	cout<<"\n\t\t\t\t\t  *----------MENU----------*\n"<<endl;
	cout<<"Press '1' BURGER"<<endl;
	cout<<"Press '2' PARATHA ROLLS"<<endl;
	cout<<"Press '3' SHAWARMA"<<endl;
	cout<<"Press '4' BIRYANI"<<endl;
	cout<<"Press '5' PIZZA"<<endl;
	cout<<"Press '6' SALAD"<<endl;
	cout<<"\nPlease enter your choice: ";
	ch=getch();
	a=ch;
	cout<<endl;
	if(a>=49 && a<=54)
	{
		switch(a)
		{
			case 49:
			{
				b=burger();
				goto b;
				break;
			}
			case 50:
			{
				b=paratha();
				goto b;
				break;
			}
				case 51:
			{
				b=shawarma();
				goto b;
				break;
			}
				case 52:
			{
				b=biryani();
				goto b;
				break;
			}
				case 53:
			{
				b=pizza();
				goto b;
				break;
			}
				case 54:
			{
				b=salad();
				goto b;
				break;
			}
		}
	}
	else
	{
		system("cls");
		cout<<"\n\t\t\t\tInvalid Input..!!! Please Enter value between 1 to 6\n";
		goto b;
	}
    getch();
	return 0;
}
