#include<iostream>
#include<string>
#define n 10
using namespace std;
struct Company
{
string name, city;
};
struct Item
{
string name;
long ID;
float price;
Company company;
int amount;
};
int main ( )
{
Item I[n];
int choice;
string nameSearch;
int IDSearch;
int max;
int maxItem;
bool flag=false;
bool flag2=false;
bool flag3=false;
bool flag4=false;
bool flag5=false;
bool flag6=false;

do{
cout<<"Press 1 to fill data in dattabase"<<endl<<"Press 2 to output data in database"<<endl<<"Press 3 to search in item by name. "<<endl<<"Press 4 to search in item with price greter than 150 LE. "<<endl<<"Press 5 to search on item made from a 'El-araby' company "<<endl<<"Press 6 to search on item by ID"<<endl<<"Press 7 to search for item maximum amount"<<endl<<"Press 8 to search if there is items with 0 amount"<<endl<<"Press 9 to exit"<<endl<<"Press 10 to print all items with price more than 26 LE and made in company called 'johina'"<<endl;
cin>>choice;
switch (choice)
{
case 1:
	for(int i=0; i<n; i++)
	{
		cout<<"enter the data to fill database no."<<i+1<<endl;
		cout<<"enter the name"<<endl ;
		cin>>I[i].name;
		cout<<"enter the id"<<endl ;
		cin>>I[i].ID;
		cout<<"enter the price"<<endl ;
		cin>>I[i].price;
		cout<<"enter the company name"<<endl ;
		cin>>I[i].company.name;
		cout<<"enter the company city"<<endl ;
		cin>>I[i].company.city;
		cout<<"enter the amount"<<endl ;
		cin>>I[i].amount;
		cout<<endl; 
	}
break;
case 2: 
	for(int i=0; i<n; i++)
	{
		cout<<"the data in database no."<<i+1<<endl;
		cout<<"name: "<<I[i].name<<endl ;
		cout<<"id: "<<I[i].ID<<endl ;
		cout<<"price:  "<<I[i].price<<endl ;
		cout<<"company name: "<<I[i].company.name<<endl ;
		cout<<"company city: "<<I[i].company.city<<endl ;
		cout<<"amount: "<<I[i].amount<<endl ;
		cout<<endl;
	}
break;
case 3:
cout<<"enter the name for searching"<<endl ;
cin>>nameSearch;
for(int i=0; i<n; i++)
	{
		if(I[i].name == nameSearch)
		{
			cout<<"the item is found"<<endl ;
			cout<<"name: "<<I[i].name<<endl ;
			cout<<"id: "<<I[i].ID<<endl ;
			cout<<"price:  "<<I[i].price<<endl ;
			cout<<"company name: "<<I[i].company.name<<endl ;
			cout<<"company city: "<<I[i].company.city<<endl ;
			cout<<"amount: "<<I[i].amount<<endl ;
			cout<<endl;
			flag=true;
		}
	
	}
	if(flag==false)
	{
		cout<<"the item is not found"<<endl ;
	}
 break;
 case 4:
 for(int i=0; i<n; i++)
	{
		if(I[i].price > 150)
		{
			cout<<"the item is found"<<endl ;
			cout<<"name: "<<I[i].name<<endl ;
			cout<<"id: "<<I[i].ID<<endl ;
			cout<<"price:  "<<I[i].price<<endl ;
			cout<<"company name: "<<I[i].company.name<<endl ;
			cout<<"company city: "<<I[i].company.city<<endl ;
			cout<<"amount: "<<I[i].amount<<endl ;
			cout<<endl;
			flag2=true;
		}
	
	}
	if(flag2==false)
	{
		cout<<"the item is not found"<<endl ;
	}
 break;
 case 5: 
 for(int i=0; i<n; i++)
	{
		if(I[i].company.name == "El-araby")
		{
			cout<<"the item is found"<<endl ;
			cout<<"name: "<<I[i].name<<endl ;
			cout<<"id: "<<I[i].ID<<endl ;
			cout<<"price:  "<<I[i].price<<endl ;
			cout<<"company name: "<<I[i].company.name<<endl ;
			cout<<"company city: "<<I[i].company.city<<endl ;
			cout<<"amount: "<<I[i].amount<<endl ;

			cout<<endl;
			flag3=true;
		}
	
	}
	if(flag3==false)
	{
		cout<<"the item is not found"<<endl ;
	}
 break;
 case 6: 
 cout<<"enter the ID for searching"<<endl ;
cin>>IDSearch;
for(int i=0; i<n; i++)
	{
		if(I[i].ID == IDSearch)
		{
			cout<<"the item is found"<<endl ;
			cout<<"name: "<<I[i].name<<endl ;
			cout<<"id: "<<I[i].ID<<endl ;
			cout<<"price:  "<<I[i].price<<endl ;
			cout<<"company name: "<<I[i].company.name<<endl ;
			cout<<"company city: "<<I[i].company.city<<endl ;
			cout<<"amount: "<<I[i].amount<<endl ;

			cout<<endl;
			flag4=true;
		}
	
	}
	if(flag4==false)
	{
		cout<<"the item is not found"<<endl ;
	}
 break;
 case 7:
 max=I[0].amount;
 maxItem=0;
 for(int i=0; i<n; i++)
	{
		 if(max < I[i].amount)
        	 {
        	 	max = I[i].amount;
        		maxItem=i;
        	 	
        	 }
	}
	cout<<"the max amount is "<<max<<endl ;
	
	cout<<"the item is found"<<endl ;
	cout<<"name: "<<I[maxItem].name<<endl ;
	cout<<"id: "<<I[maxItem].ID<<endl ;
	cout<<"price:  "<<I[maxItem].price<<endl ;
	cout<<"company name: "<<I[maxItem].company.name<<endl ;
	cout<<"company city: "<<I[maxItem].company.city<<endl ;
	cout<<"amount: "<<I[maxItem].amount<<endl ;
	
 break;
 case 8:
 for(int i=0; i<n; i++)
	{
		if(I[i].amount == 0)
		{
			cout<<"the item is found"<<endl ;
			cout<<"name: "<<I[i].name<<endl ;
			cout<<"id: "<<I[i].ID<<endl ;
			cout<<"price:  "<<I[i].price<<endl ;
			cout<<"company name: "<<I[i].company.name<<endl ;
			cout<<"company city: "<<I[i].company.city<<endl ;
			cout<<"amount: "<<I[i].amount<<endl ;

			cout<<endl;
			flag5=true;
		}
	
	}
	if(flag5==false)
	{
		cout<<"the item is not found"<<endl ;
	}
 break;
case 9: exit(0);
 break;
 case 10:
 for(int i=0; i<n; i++)
	{
		if(I[i].price > 26 && I[i].company.name =="johina")
		{
			cout<<"the item is found"<<endl ;
			cout<<"name: "<<I[i].name<<endl ;
			cout<<"id: "<<I[i].ID<<endl ;
			cout<<"price:  "<<I[i].price<<endl ;
			cout<<"company name: "<<I[i].company.name<<endl ;
			cout<<"company city: "<<I[i].company.city<<endl ;
			cout<<"amount: "<<I[i].amount<<endl ;

			cout<<endl;
			flag6=true;
		}
	
	}
	if(flag6==false)
	{
		cout<<"the item is not found"<<endl ;
	}
 break;
default: cout<<" You entered a wrong choice"<<endl;
 // end of switch-case
}
}while(choice!=9);
return 0;
}
