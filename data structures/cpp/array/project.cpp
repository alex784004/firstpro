
//**********************************************************
//	PROJECT SHOPPING MALL
//**********************************************************

//**********************************************************
//	INCLUDED HEADER FILES
//**********************************************************

#include <iostream>
#include <fstream>
#include <process.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>
using namespace std;
//**********************************************************
// THIS CLASS CONTROL ALL THE FUNCTIONS IN THE MENU
//**********************************************************
class MENU
{
	public :
			void main_menu(void) ;
			void introduction(void) ;
	private :
			void edit_menu(void) ;
			void edit_item(void) ;
			void edit_shop(void) ;
} ;
//**********************************************************
// THIS CLASS CONTAINS FUNCTIONS RELATED TO BOOKS
//**********************************************************
class ITEM
{
	public :
			void list(void) ;
			char *itemname(int) ;
	protected :
			void add_new_item(int, char tname[33], char tbrand[26], float) ;
			void deletion(void) ;
			int  item_found(int) ;
			int  itemname_found(char []) ;
			int  recordno(int) ;
			char *brandname(int) ;
			float itemprice(int) ;
			int  itemcodeof(char[]) ;
			void display(int) ;
			int  reccount(void) ;
			void delete_rec(int) ;
	private :
			int   itemcode ;
			char  name[33], brand[26] ;
			float price ;
} ;
//**********************************************************
// THIS CLASS CONTAINS FUNCTIONS RELATED TO MEMBERS
//**********************************************************
class SHOP
{
	public :
			void list(void) ;
	protected :
			void add_shop(int, int, char [], char [], char[]) ;
			int  shop_found(int) ;
			char *shopname(int) ;
			char *shopphone(int) ;
			char *shopaddress(int) ;
			int  recordno(int) ;
			void display(int) ;
			void delete_rec(int) ;
	private :
			int  shopcode, itemcode ;
			char name[26], phone[10], address[33] ;
} ;
//**********************************************************
// THIS IS DERIVED FROM CLASS BOOK & MEMBER AND CONTAINS
// FUNCTIONS FOR WORKING
//**********************************************************
class WORKING : public ITEM, public SHOP
{
	public :
			void add_item(void) ;
			void add_shop(void) ;
			void delete_item(void) ;
			void delete_shop(void) ;
} ;
//**********************************************************
// FUNCTION TO DISPLAY MAIN MENU & CONTROL ALL THE FUNCTION
// IN THE MAIN MENU.
//**********************************************************
void MENU :: main_menu(void)
{
	char ch ;
	while (1)
	{
		clrscr() ;
		gotoxy(29,6) ;
		cout <<"S H O P P I N G   M A L L" ;
		gotoxy(29,7) ;
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
		gotoxy(30,10) ;
		cout <<"1. INTRODUCTION" ;
		gotoxy(30,11) ;
		cout <<"2. ADD NEW ITEM" ;
		gotoxy(30,12) ;
		cout <<"3. ADD NEW SHOP" ;
		gotoxy(30,13) ;
		cout <<"4. LIST OF ITEMS" ;
		gotoxy(30,14) ;
		cout <<"5. LIST OF SHOPS" ;
		gotoxy(30,15) ;
		cout <<"6. EDIT" ;
		gotoxy(30,16) ;
		cout <<"0. QUIT" ;
		gotoxy(30,20) ;
		cout <<"Enter your choice : " ;
		ch = getche() ;
		if (ch == 27)
			break ;
		else
		if (ch == '1')
			introduction() ;
		else
		if (ch == '2')
		{
			WORKING W ;
			W.add_item() ;
		}
		else
		if (ch == '3')
		{
			WORKING W ;
			W.add_shop() ;
		}
		else
		if (ch == '4')
		{
			ITEM I;
			I.list() ;
		}
		else
		if (ch == '5')
		{
		SHOP S ;
		S.list() ;
		}

		else
		if (ch == '6')
			edit_menu() ;
		else
		if (ch == '0')
			break ;
	}
}
//**********************************************************
// FUNCTION TO DISPLAY EDIT MENU
//**********************************************************

void MENU :: edit_menu(void)
{
	char ch ;
	while (1)
	{
		clrscr() ;
		gotoxy(32,9) ;
		cout <<"E D I T  M E N U";
		gotoxy(32,10) ;
		cout <<"~~~~~~~~~~~~~~~~" ;
		gotoxy(34,13) ;
		cout <<"1. ITEMS" ;
		gotoxy(34,14) ;
		cout <<"2. SHOPS" ;
		gotoxy(34,15) ;
		cout <<"0. EXIT" ;
		gotoxy(31,17) ;
		cout <<"Enter your choice : " ;
		ch = getche() ;
		if (ch == 27)
			break ;
		else
		if (ch =='1')
			edit_item() ;
		else
		if (ch == '2')
			edit_shop() ;
		else
		if (ch == '0')
			break ;
	}
}
//**********************************************************
// FUNCTION TO DISPLAY EDIT MENU FOR BOOK & CONTROL
// ALL THE FUNCTION IN THE EDIT MENU.
//**********************************************************

void MENU :: edit_item(void)
{
	char ch ;
	while (1)
	{
		clrscr() ;
		gotoxy(31,9) ;
		cout <<"E D I T  I T E M S";
		gotoxy(31,10) ;
		cout <<"~~~~~~~~~~~~~~~~~~" ;
		gotoxy(34,14) ;
		cout <<"1. DELETE" ;
		gotoxy(34,15) ;
		cout <<"0. EXIT" ;
		gotoxy(31,17) ;
		cout <<"Enter your choice : " ;
		ch = getche() ;
		if (ch == 27)
			break ;
		else
		if (ch == '1')
		{
			WORKING W ;
			W.delete_item() ;
		}
		else
		if (ch == '0')
			break ;
	}
}
//**********************************************************
// FUNCTION TO DISPLAY EDIT MENU FOR MEMBERS & CONTROL
// ALL THE FUNCTION IN THE EDIT MENU.
//**********************************************************

void MENU :: edit_shop(void)
{
	char ch ;
	while (1)
	{
		clrscr() ;
		gotoxy(29,9) ;
		cout <<"E D I T  S H O P S";
		gotoxy(31,10);
		cout<<"------------------------";
		gotoxy(34,14) ;
		cout <<"1. DELETE" ;
		gotoxy(34,15) ;
		cout <<"0. EXIT" ;
		gotoxy(29,17) ;
		cout <<"Enter your choice : " ;
		ch = getche() ;
		if (ch == 27)
			break ;
		else
		if (ch == '1')
		{
			WORKING W ;
			W.delete_shop() ;
		}
		else
		if (ch == '0')
			break ;
	}
}
//**********************************************************
// FUNCTION TO DISPLAY THE INTRODUCTION FOR THE PROJECT.
//**********************************************************

void MENU :: introduction(void)
{
	clrscr() ;
	gotoxy(31,5) ;
	cout <<"Welcome to Project" ;
	textcolor(BLACK+BLINK) ; textbackground(WHITE) ;
	gotoxy(33,7) ;
	cprintf(" SHOPPING MALL ") ;
	textcolor(LIGHTGRAY) ; textbackground(BLACK) ;
	gotoxy(15,10) ;
	cout <<"This  project has facility of maintaining  records" ;
	gotoxy(15,11) ;
	cout <<"of SHOPS and their ITEMS." ;
	textcolor(LIGHTGRAY+BLINK) ;
	gotoxy(27,24) ;
	cprintf("Press any key to continue") ;
	textcolor(LIGHTGRAY) ;
	getch() ;
}
//**********************************************************
// THIS FUNCTION RETURN 0 IF GIVEN BOOK CODE NOT FOUND
//**********************************************************

int ITEM :: item_found(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int found=0 ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (itemcode == tcode)
		{
			found = 1 ;
			break ;
		}
	}
	file.close() ;
	return found ;
}


//**********************************************************
// THIS FUNCTION RETURN 0 IF GIVEN BOOK NAME NOT FOUND
//**********************************************************

int ITEM :: itemname_found(char t1code[33])
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int found=0 ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (!strcmpi(name,t1code))
		{
			found = 1 ;
			break ;
		}
	}
	file.close() ;
	return found ;
}


//**********************************************************
// THIS FUNCTION RETURN RECORD NO. FOR THE BOOK CODE
//**********************************************************

int ITEM :: recordno(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int count=0 ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		count++ ;
		if (itemcode == tcode)
			break ;
	}
	file.close() ;
	return count ;
}
//**********************************************************
// THIS FUNCTION RETURNS THE BOOK NAME OF THE GIVEN BOOK
// CODE.
//**********************************************************

char *ITEM :: itemname(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	char tname[33] ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (itemcode == tcode)
		{
			strcpy(tname,name) ;
			break ;
		}
	}
	file.close() ;
	return tname ;
}


//**********************************************************
// THIS FUNCTION RETURNS THE AUTHOR NAME OF THE GIVEN BOOK
// CODE.
//**********************************************************

char *ITEM :: brandname(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	char tbrand[26] ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (itemcode == tcode)
		{
			strcpy(tbrand,brand) ;
			break ;
		}
	}
	file.close() ;
	return tbrand ;
}


//**********************************************************
// THIS FUNCTION RETURNS THE BOOK PRICE OF THE GIVEN BOOK
// CODE.
//**********************************************************

float ITEM :: itemprice(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	float tprice=0.0 ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (itemcode == tcode)
		{
			tprice = price ;
			break ;
		}
	}
	file.close() ;
	return tprice ;
}


//**********************************************************
// THIS FUNCTION RETURNS THE BOOK CODE OF THE GIVEN BOOK
// NAME.
//**********************************************************

int ITEM :: itemcodeof(char t1code[33])
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int tcode=0 ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (!strcmpi(name,t1code))
		{
			tcode = itemcode ;
			break ;
		}
	}
	file.close() ;
	return tcode ;
}
//**********************************************************
// THIS FUNCTION RETURNS THE NO. OF THE RECORDS IN THE BOOK
// FILE.
//**********************************************************

int ITEM :: reccount(void)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int count=0 ;
	while (file.read((char *) this, sizeof(ITEM)))
		count++ ;
	file.close() ;
	return count ;
}
//**********************************************************
// THIS FUNCTION DELETES THE RECORD OF THE GIVEN BOOK CODE.
//**********************************************************

void ITEM :: delete_rec(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	fstream temp ;
	temp.open("temp.dat", ios::out) ;
	file.seekg(0,ios::beg) ;
	while ( !file.eof() )
	{
		file.read((char *) this, sizeof(ITEM)) ;
		if ( file.eof() )
			break ;
		if ( itemcode != tcode )
			temp.write((char *) this, sizeof(ITEM)) ;
	}
	file.close() ;
	temp.close() ;
	file.open("ITEM.DAT", ios::out) ;
	temp.open("temp.dat", ios::in) ;
	temp.seekg(0,ios::beg) ;
	while ( !temp.eof() )
	{
		temp.read((char *) this, sizeof(ITEM)) ;
		if ( temp.eof() )
			break ;
		file.write((char *) this, sizeof(ITEM)) ;
	}
	file.close() ;
	temp.close() ;
}

//**********************************************************
// THIS FUNCTION ADD THE RECORD IN THE BOOK FILE
//**********************************************************
void ITEM :: add_new_item(int tcode,char tname[33], char tbrand[26], float tprice)
{
	fstream file ;
	file.open("ITEM.DAT", ios::app) ;
	itemcode = tcode ;
	strcpy(name,tname) ;
	strcpy(brand,tbrand) ;
	price = tprice ;
	file.write((char *) this, sizeof(ITEM)) ;
	file.close() ;
}
//**********************************************************
// THIS FUNCTION DISPLAY THE RECORD FROM THE BOOK FILE
// FOR THE GIVEN BOOK CODE
//**********************************************************

void ITEM :: display(int tcode)
{
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		if (itemcode == tcode)
		{
			gotoxy(5,5) ;
			cout <<"item Code   : " <<itemcode ;
			gotoxy(5,7) ;
			cout <<"item Name   : " <<name ;
			gotoxy(5,8) ;
			cout <<"brand Name : " <<brand ;
			gotoxy(5,9) ;
			cout <<"Price       : Rs." <<price ;
			break ;
		}

}
	file.close() ;
}
//**********************************************************
// THIS FUNCTION DISPLAY THE LIST OF BOOKS.
//**********************************************************

void ITEM :: list(void)
{
	clrscr() ;
	int row = 6 , found=0, flag=0 ;
	char ch ;
	gotoxy(33,2) ;
	cout <<"LIST OF ITEMS" ;
	gotoxy(32,3) ;
	cout <<"~~~~~~~~~~~~~~~" ;
	gotoxy(1,4) ;
	cout <<"CODE  ITEM NAME                        BRAND                    PRICE         " ;
	gotoxy(1,5) ;
	cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
	fstream file ;
	file.open("ITEM.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(ITEM)))
	{
		flag = 0 ;
		delay(20) ;
		found = 1 ;
		gotoxy(2,row) ;
		cout <<itemcode ;
		gotoxy(7,row) ;
		cout	<<name ;
		gotoxy(40,row) ;
		cout	<<brand ;
		gotoxy(66,row) ;
		cout	<<price ;
		textbackground(BLACK) ; textcolor(LIGHTGRAY) ;
		if ( row == 22 )
		{
			flag = 1 ;
			row = 6 ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue or Press <ESC> to exit" ;
			ch = getch() ;
			if (ch == 27)
				break ;
			clrscr() ;
			gotoxy(33,2) ;
			cout <<"LIST OF ITEMS" ;
			gotoxy(32,3) ;
			cout <<"~~~~~~~~~~~~~~~" ;
			gotoxy(1,4) ;
			cout <<"CODE  ITEM NAME                        BRAND                    PRICE         " ;
			gotoxy(1,5) ;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
		}
		else
			row = row + 2 ;
	}
	if (!found)
	{
		gotoxy(5,10) ;
		cout <<"\7Records not found" ;
	}
	if (!flag)
	{
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getche() ;
	}
	file.close () ;
}
//**********************************************************
// THIS FUNCTION RETURN 0 IF THE GIVEN MEMBER CODE NOT FOUND
//**********************************************************

int SHOP :: shop_found(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int found=0 ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		if (shopcode == mcode)
		{
			found = 1 ;
			break ;
		}
	}
	file.close() ;
	return found ;
}
//**********************************************************
// THIS FUNCTION RETURNS MEMBER NAME OF THE GIVEN MEMBER
// CODE.
//**********************************************************

char *SHOP :: shopname(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	char mname[26] ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		if (shopcode == mcode)
		{
			strcpy(mname,name) ;
			break ;
		}
	}
	file.close() ;
	return mname ;
}


//**********************************************************
// THIS FUNCTION RETURNS MEMBER PHONE OF THE GIVEN MEMBER
// CODE.
//**********************************************************

char *SHOP :: shopphone(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	char mphone[10] ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		if (shopcode == mcode)
		{
			strcpy(mphone,phone) ;
			break ;
		}
	}
	file.close() ;
	return mphone ;
}


//**********************************************************
// THIS FUNCTION RETURNS MEMBER ADDRESS OF THE GIVEN MEMBER
// CODE.
//**********************************************************

char *SHOP :: shopaddress(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	char maddress[33] ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		if (shopcode == mcode)
		{
			strcpy(maddress,address) ;
			break ;
		}
	}
	file.close() ;
	return maddress ;
}
//**********************************************************
// THIS FUNCTION RETURNS RECORD NO. OF THE GIVEN MEMBER
// CODE.
//**********************************************************

int SHOP :: recordno(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	int count=0 ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		count++ ;
		if (shopcode == mcode)
			break ;
	}
	file.close() ;
	return count ;
}
//**********************************************************
// THIS FUNCTION DELETE RECORD FOR THE GIVEN MEMBER CODE.
//**********************************************************
void SHOP :: delete_rec(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	fstream temp ;
	temp.open("temp.dat", ios::out) ;
	file.seekg(0,ios::beg) ;
	while ( !file.eof() )
	{
		file.read((char *) this, sizeof(SHOP)) ;
		if ( file.eof() )
			break ;
		if ( shopcode != mcode )
			temp.write((char *) this, sizeof(SHOP)) ;
	}
	file.close() ;
	temp.close() ;
	file.open("SHOP.DAT", ios::out) ;
	temp.open("temp.dat", ios::in) ;
	temp.seekg(0,ios::beg) ;
	while ( !temp.eof() )
	{
		temp.read((char *) this, sizeof(SHOP)) ;
		if ( temp.eof() )
			break ;
		file.write((char *) this, sizeof(SHOP)) ;
	}
	file.close() ;
	temp.close() ;
}
//**********************************************************
// THIS FUNCTION ADD RECORD IN THE FILE FOR THE GIVEN
// MEMBER CODE.
//**********************************************************
void SHOP :: add_shop(int mcode, int bcode, char mname[26], char maddress[33], char mphone[10])
{
	fstream file ;
	file.open("SHOP.DAT", ios::app) ;
	shopcode = mcode ;
	shopcode = bcode ;
	strcpy(name,mname) ;
	strcpy(address,maddress) ;
	strcpy(phone,mphone) ;
	file.write((char *) this, sizeof(SHOP)) ;
	file.close() ;
}
//**********************************************************
// THIS FUNCTION DISPLAY THE RECORD FOR THE GIVEN MEMBER
// CODE.
//**********************************************************

void SHOP :: display(int mcode)
{
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		if (shopcode == mcode)
		{
			gotoxy(5,3) ;
			cout <<"shop Code # " <<mcode ;
			gotoxy(5,4) ;
			cout <<"~~~~~~~~~~~~~~~~~" ;
			gotoxy(5,6) ;
			cout <<"Name    : " <<name ;
			gotoxy(5,7) ;
			cout <<"Phone   : " <<phone ;
			gotoxy(5,8) ;
			cout <<"Address : " <<address ;
			break ;
		}
	}
	file.close() ;
}
//**********************************************************
// THIS FUNCTION DISPLAY THE LIST OF THE MEMBERS
//**********************************************************

void SHOP :: list(void)
{
	clrscr() ;
	ITEM I ;
	int row = 6 , found=0, flag=0 ;
	char ch ;
	gotoxy(32,2) ;
	cout <<"LIST OF SHOPS" ;
	gotoxy(31,3) ;
	cout <<"~~~~~~~~~~~~~~~~~" ;
	gotoxy(1,4) ;
	cout <<"CODE  SHOP CODE   NAME                         PHONE" ;
	gotoxy(1,5) ;
	cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
	fstream file ;
	file.open("SHOP.DAT", ios::in) ;
	file.seekg(0,ios::beg) ;
	while (file.read((char *) this, sizeof(SHOP)))
	{
		flag = 0 ;
		delay(20) ;
		found = 1 ;
		gotoxy(2,row) ;
		cout <<shopcode ;
		gotoxy(10,row) ;
		cout <<shopcode ;
		gotoxy(19,row) ;
		cout	<<name ;
		gotoxy(48,row) ;
		cout <<phone ;
		textbackground(BLACK) ; textcolor(LIGHTGRAY) ;
		if ( row == 22 )
		{
			flag = 1 ;
			row = 6 ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue or Press <ESC> to exit" ;
			ch = getch() ;
			if (ch == 27)
				break ;
			clrscr() ;
			gotoxy(32,2) ;
			cout <<"LIST OF SHOPS" ;
			gotoxy(31,3) ;
			cout <<"~~~~~~~~~~~~~~~~~" ;
			gotoxy(1,4) ;
			cout <<"CODE  SHOP CODE   NAME                         PHONE" ;
			gotoxy(1,5) ;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
		}
		else
			row = row + 2 ;
	}
	if (!found)
	{
		gotoxy(5,10) ;
		cout <<"\nRecords not found" ;
	}
	if (!flag)
	{
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getche() ;
	}
	file.close () ;
}
//**********************************************************
// THIS FUNCTION GIVES DATA TO ADD RECORD IN THE BOOK FILE.
//**********************************************************
void WORKING :: add_item(void)
{
	if (!reccount())  // MEMBER FUNCTION OF BOOK
	{
		add_new_item(0,"null","null",0.0) ;
		ITEM::delete_rec(0) ;
	}
	char ch ;
	int tcode;
	char tname[33], tbrand[26] ;
	float tprice=0.0 ;
	do
	{
		int found=0, valid=0 ;
		int tc ;
		float t2=0.0 ;
		char t[10], t1[10] ;
		clrscr() ;
		gotoxy(29,3) ;
		cout <<"ADDITION OF THE ITEMS" ;
		gotoxy(29,4) ;
		cout <<"~~~~~~~~~~~~~~~~~~~~~" ;
		gotoxy(72,1) ;
		cout <<"<0>=Exit" ;
		gotoxy(5,25) ;
		cout <<"Enter code no. of the item" ;
		gotoxy(5,5) ;
		cout <<"Code no. " ;
		gets(t) ;
		tc = atoi(t) ;
		tcode = tc ;
		if (tcode == 0)
			return ;
		if (item_found(tcode))
		{
			found = 1 ;
			gotoxy(19,8) ;
			cout <<itemname(tcode) ;
			gotoxy(19,9) ;
			cout <<brandname(tcode) ;
			gotoxy(22,10) ;
			cout <<itemprice(tcode) ;
		}
		gotoxy(5,8) ;
		cout <<"item Name   : " ;
		gotoxy(5,9) ;
		cout <<"brand Name : " ;
		gotoxy(5,10) ;
		cout <<"Price       : Rs." ;
		valid = 0 ;
		while (!valid && !found)
		{
			valid = 1 ;
			gotoxy(5,25) ; clreol() ;
			cout <<"Enter the name of the item" ;
			gotoxy(19,8) ; clreol() ;
			gets(tname) ;
			strupr(tname) ;
			if (tname[0] == '0')
				return ;
			if (strlen(tname) < 1 || strlen(tname) > 32)
			{
				valid = 0 ;
				gotoxy(5,25) ; clreol() ;
				cout <<"\nEnter correctly (Range: 1..32)" ;
				getch() ;
			}
		}
		valid = 0 ;
		while (!valid && !found)
		{
			valid = 1 ;
			gotoxy(5,25) ; clreol() ;
			cout <<"Enter the brand`s name of the book" ;
			gotoxy(19,9) ; clreol() ;
			gets(tbrand) ;
			strupr(tbrand) ;
			if (tbrand[0] == '0')
				return ;
			if (strlen(tbrand) < 1 || strlen(tbrand) > 25)
			{
				valid = 0 ;
				gotoxy(5,25) ; clreol() ;
				cout <<"\7Enter correctly (Range: 1..25)" ;
				getch() ;
			}
		}
		valid = 0 ;
		while (!valid && !found)
		{
			valid = 1 ;
			gotoxy(5,25) ; clreol() ;
			cout <<"Enter the price of the item" ;
			gotoxy(22,10) ; clreol() ;
			gets(t1) ;
			t2 = atof(t1) ;
			tprice = t2 ;
			if (t1[0] == '0')
				return ;
			if (tprice < 1 || tprice > 9999)
			{
				valid = 0 ;
				gotoxy(5,25) ; clreol() ;
				cout <<"\7Enter correctly" ;
				getch() ;
			}
		}
		valid = 0 ;
		gotoxy(5,25) ; clreol() ;
		do
		{
			gotoxy(5,15) ; clreol() ;
			cout <<"Do you want to save (y/n) : " ;
			ch = getche() ;
			ch = toupper(ch) ;
		} while (ch != 'Y' && ch != 'N') ;

		if (ch == 'Y')
		{
			add_new_item(tcode,tname,tbrand,tprice) ;
		}
		do
		{
			gotoxy(5,17) ; clreol() ;
			cout <<"Do you want to add more (y/n) : " ;
			ch = getche() ;
			ch = toupper(ch) ;
		} while (ch != 'Y' && ch != 'N') ;
	} while (ch == 'Y') ;
}
//**********************************************************
// THIS FUNCTION GIVES DATA TO ADD RECORD IN THE MEMBER FILE
//**********************************************************

void WORKING :: add_shop(void)
{
	char ch ;
	int mcode, bcode ;
	char mname[26], mphone[10], maddress[33] ;
	do
	{
		int valid=0 ;
		clrscr() ;
		gotoxy(28,3) ;
		cout <<"ADDITION OF THE SHOPS" ;
		gotoxy(28,4) ;
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~" ;
		gotoxy(72,1) ;
		cout <<"<0>=Exit" ;
		gotoxy(5,7) ;
		cout <<"SHOP Code # " <<mcode ;
		gotoxy(5,8) ;
		cout <<"~~~~~~~~~~~~~~~~~" ;
		gotoxy(5,10) ;
		cout <<"Name    : " ;
		gotoxy(5,12) ;
		cout <<"Phone   : " ;
		gotoxy(5,14) ;
		cout <<"Address : " ;
		do
		{
			valid = 1 ;
			gotoxy(5,25) ; clreol() ;
			cout <<"Enter the name of the New Shop" ;
			gotoxy(15,10) ; clreol() ;
			gets(mname) ;
			strupr(mname) ;
			if (mname[0] == '0')
				return ;
			if (strlen(mname) < 1 || strlen(mname) > 25)
			{
				valid = 0 ;
				gotoxy(5,25) ; clreol() ;
				cout <<"\7Enter correctly (Range: 1..25)" ;
				getch() ;
			}
		} while (!valid) ;
		do
		{
			valid = 1 ;
			gotoxy(5,25) ; clreol() ;
			cout <<"Enter Phone no. of the Member or Press <ENTER> for none" ;
			gotoxy(15,12) ; clreol() ;
			gets(mphone) ;
			if (mphone[0] == '0')
				return ;
			if ((strlen(mphone) < 7 && strlen(mphone) > 0) || (strlen(mphone) > 9))
			{
				valid = 0 ;
				gotoxy(5,25) ; clreol() ;
				cout <<"\7Enter correctly" ;
				getch() ;
			}
		} while (!valid) ;
		if (strlen(mphone) == 0)
			strcpy(mphone,"-") ;
		do
		{
			valid = 1 ;
			gotoxy(5,25) ; clreol() ;
			cout <<"Enter the address of the New Shop" ;
			gotoxy(15,14) ; clreol() ;
			gets(maddress) ;
			strupr(maddress) ;
			if (maddress[0] == '0')
				return ;
			if (strlen(maddress) < 1 || strlen(maddress) > 32)
			{
				valid = 0 ;
				gotoxy(5,25) ; clreol() ;
				cout <<"\7Enter correctly (Range: 1..32)" ;
				getch() ;
			}
		} while (!valid) ;
		gotoxy(5,25) ; clreol() ;
		do
		{
			gotoxy(5,17) ; clreol() ;
			cout <<"Do you want to save (y/n) : " ;
			ch = getche() ;
			ch = toupper(ch) ;
			if (ch == '0')
				return ;
		} while (ch != 'Y' && ch != 'N') ;
		if (ch == 'Y')
		{
			add_shop();
			mcode++ ;
		}
		do
		{
			gotoxy(5,19) ; clreol() ;
			cout <<"Do you want to add more (y/n) : " ;
			ch = getche() ;
			ch = toupper(ch) ;
			if (ch == '0')
				return ;
		} while (ch != 'Y' && ch != 'N') ;
	} while (ch == 'Y') ;
}
//**********************************************************
// THIS FUNCTION GIVES BOOK CODE TO DELETE THE BOOK RECORD
//**********************************************************
void WORKING :: delete_item(void)
{
	ITEM I ;
	char t1code[5], tname[33], tbrand[26], ch ;
	int t2code=0, tcode=0 ;
	int valid ;
	do
	{
		valid = 1 ;
		while (1)
		{
			clrscr() ;
			gotoxy(72,1) ;
			cout <<"<0>=Exit" ;
			gotoxy(5,5) ;
			cout <<"Enter Code or Name of the Item to be Deleted" ;
			gotoxy(5,6) ;
			cout <<"                  or                       " ;
			gotoxy(5,7) ;
			cout <<"Press <ENTER> for help  " ;
			gets(t1code) ;
			if (t1code[0] == '0')
				return ;
			if (strlen(t1code) == 0)
				I.list() ;
			else
				break ;
		}
		t2code = atoi(t1code) ;
		tcode = t2code ;
		if ((tcode == 0 && !itemname_found(t1code)) || (tcode != 0 && !item_found(tcode)))
		{
			valid = 0 ;
			gotoxy(5,10) ;
			cout <<" Record not found" ;
			gotoxy(5,11) ;
			cout <<"Press <ESC> to exit or any other key to continue..." ;
			ch = getch() ;
			if (ch == 27)
				return ;
		}
	} while (!valid) ;
	if (tcode == 0)
		tcode = itemcodeof(t1code) ;
	clrscr() ;
	gotoxy(72,1) ;
	cout <<"<0>=Exit" ;
	ITEM::display(tcode) ;
	do
	{
		gotoxy(5,13) ; clreol() ;
		cout <<"Do you want to delete this record (y/n) : " ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
	} while (ch != 'Y' && ch != 'N') ;
	if (ch == 'N')
		return ;
	ITEM::delete_rec(tcode) ;
	gotoxy(5,23) ;
	cout <<" Record Deleted" ;
	getch() ;
}
//**********************************************************
// THIS FUNCTION GIVES MEMBER CODE TO DELETE THE MEMBER
// RECORD
//**********************************************************
void WORKING :: delete_shop(void)
{
	SHOP S ;
	char m1code[5], mname[26], mphone[10], maddress[33], ch ;
	int m2code=0, mcode=0 ;
	int valid ;
	do
	{
		valid = 1 ;
		while (1)
		{
			clrscr() ;
			gotoxy(72,1) ;
			cout <<"<0>=Exit" ;
			gotoxy(5,7) ;
			cout <<"Enter Code no. of the Shop to be Deleted" ;
			gotoxy(5,8) ;
			cout <<"                        or              " ;
			gotoxy(5,9) ;
			cout <<"Press <ENTER> for help  " ;
			gets(m1code) ;
			m2code = atoi(m1code) ;
			mcode = m2code ;
			if (m1code[0] == '0')
				return ;
			if (strlen(m1code) == 0)
				S.list() ;
			else
				break ;
		}
		if (mcode == 0)
		{
			valid = 0 ;
			gotoxy(5,25) ;
			cout <<"\7Enter Correctly" ;
			getch() ;
		}
		if (valid && !shop_found(mcode))
		{
			valid = 0 ;
			gotoxy(5,13) ;
			cout <<"\7Record not found" ;
			gotoxy(5,14) ;
			cout <<"Press <ESC> to exit or any other key to continue..." ;
			ch = getch() ;
			if (ch == 27)
				return ;
		}
	} while (!valid) ;
	clrscr() ;
	gotoxy(72,1) ;
	cout <<"<0>=Exit" ;
	SHOP::display(mcode) ;
	do
	{
		gotoxy(5,10) ; clreol() ;
		cout <<"Do you want to Delete this record (y/n) : " ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
	} while (ch != 'Y' && ch != 'N') ;
	if (ch == 'N')
		return ;
	SHOP::delete_rec(mcode) ;
	gotoxy(5,23) ;
	cout <<"\7Record deleted" ;
	getch() ;
}
//**********************************************************
// MAIN FUNCTION CALLING INTRODUCTION AND MAIN MENU
//**********************************************************

void main(void)
{
	MENU menu ;
	menu.introduction() ;
	menu.main_menu() ;
}
