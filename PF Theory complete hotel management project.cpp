#include<iostream>
#include<string>
using namespace std;
int Totalrent(int days, int rent);
int Advance_pay(int days, int rent);
int main()
{
	system("color 70");
	int room, day, rent,adv,tot,f;
	char ch;
	string fname,lname,phone;
	cout<<"\t\t"<<"WELCOME TO PC HOTEL"<<endl;
	string rooms[6] = { "Room 1", "Room 2", "Room 3", "Sweet 4", "Sweet 5", "Sweet 6" };
	int rents[6] = { 5000, 5000, 5000, 10000, 10000, 10000 };
	cout << "List of available rooms\t\t" << "Rent per day" << endl;
	for (int i = 0; i<6; i++){
		cout << i + 1 << ")" << rooms[i] << "\t\t\t" << rents[i] << endl;
	}
	cout << "\nEnter room number you want to select : ";
	cin >> room;
	cout << endl;
	room--;
	rent = rents[room];
	cout << "Your selected Room : " << rooms[room] << " and Rent is : " << rents[room] << endl;
	cout << "\nFor how many day you to rent the room = ";
	cin >> day;
	tot=Totalrent(day, rent);
	adv=Advance_pay(day, rent);

cout<<"\n\n\t\tEnter your personal detail :\n"<<endl;
cout<<"Enter your First Name = ";
cin>>fname;
cout<<"\nEnter your Last Name = ";
cin>>lname;
cout<<"\nEnter your Phone Number = ";
cin>>phone;
cout<<"\n\t\tCustomer Checked-In Successfully:";

cout<<"\n\nDo you want some food then press 1"<<endl;
cin>>f;
if(f==1)
{
cout<<"\n\t\t\tHOTEL MENU"<<endl;

cout<<"1 PIZZA";
cout<<"\n2 BURGER";
cout<<"\n3 CAKE";
cout<<"\n4 CHICKEN PATIES";
cout<<"\n5 SOFT DRINK"<<endl;
cin>>ch;
switch(ch)
{
	case '1':
		cout<<"\nPIZZA will be delivered at your room with in 5 mins";
	break;
	case '2':
		cout<<"\nBURGER will be delivered at your room with in 5 mins";
    break;
    case '3':
		cout<<"\nCAKE will be delivered at your room with in 5 mins";
    break;
    case '4':
		cout<<"\nCHICKEN PATTIES will be delivered at your room with in 5 mins";
    break;
    case '5':
		cout<<"\nSOFT DRINK will be delivered at your room with in 5 mins";
    
	default:
    	cout<<"\n\nOUT OF MENU";
}
}
cout<<"\n\n\t\t\tALL DETAILS";
cout<<"\nFirst Name = "<<fname<<endl;
cout<<"Last Nmae = "<<lname<<endl;
cout<<"Phone Number = "<<phone<<endl;
cout<<"Room Number = "<<rooms[room]<<endl;
cout<<"Number of days booked the room = "<<day<<endl;
cout<<"Total rent = "<<tot<<endl;
cout<<"Advance Payment = "<<adv<<endl;
cout<<"THANK YOU FOR COMING"<<endl;
	system("pause");
	return 0;
}
int Totalrent(int days, int rent)
{
	int T;
	T = days*rent;
	cout << "\n\nTotal rent is = " <<T << endl;
	return T;
}
int Advance_pay(int days, int rent)
{

	int adv, total;
	total = days*rent;
	adv = (total * 20) / 100;
	cout << "\nAdvance payment is = " << adv << endl;
	return adv;

}

