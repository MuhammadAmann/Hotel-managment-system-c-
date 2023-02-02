#include<iostream>
using namespace std;

int main(){
	int Id, Password;
	int rNo = 0, Floor_No;
	char choose;
	int floor1[] = { 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1 }, floor2[] = { 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1 }, floor3[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0 };


	cout << "||---------          --------- || \n";
	cout << "||---------          --------- || \n";
	cout << "||---------          --------- || \n";



	cout << "||-------   Hotel Name   ------- || \n";

	cout << "Login your account \n \n";


	for (int i = 0; i < 50; i++)
	{


		cout << "Enter your employee Id: ";
		cin >> Id;
		cout << "Enter your password: ";
		cin >> Password;



		if (Id == 323 && Password == 7384)
		{
			cout << endl;
			cout << "---- ----------- ---- \n";
			cout << "WelCome Id1 \n \n";



			cout << "Please enter the floor (1, 2 or 3) ";
			cin >> Floor_No;
			cout << endl;

			if (Floor_No == 1)
			{

				cout << "Floor 1 :" << endl;

				for (int i = 1; i <= 10; i++)
				{
					if (floor1[i] == 0)
					{
						cout << "room " << i << " free " << endl;
					}
					else if (floor1[i] == 1)
					{
						cout << "room " << i << " booked " << endl;
					}
				}


				cout << endl;
				cout << "You want to book room: (choose 'y' to book room)";
				cin >> choose;

				if (choose == 'y')
				{
					cout << "Enter the room number (from 1 to 10): ";
					cin >> rNo;


					if (floor1[rNo] == 0)
					{
						floor1[rNo] = 1;
						cout << " ||  Thank you! your room is booked ||  \n";

					}
					else
					{
						cout << "This room is already reserved(booked): \n";

					}

					cout << endl;

					cout << "After update list of floor1 \n";
					for (int i = 1; i <= 10; i++)
					{
						if (floor1[i] == 0)
						{
							cout << "room " << i << " free \n";
						}
						else if (floor1[i] == 1)
						{
							cout << "room " << i << " booked \n";
						}
					}
				}

				else
				{
					cout << "Programm exit! \n";
				}
			}








			else if (Floor_No == 2)
			{
				cout << "  Floor 2 : " << endl;
				for (int j = 1; j <= 10; j++)
				{
					if (floor2[j] == 0)
					{
						cout << "room " << j << " free " << endl;
					}
					else if (floor2[j] == 1)
					{
						cout << "room " << j << " booked " << endl;
					}
				}

				cout << endl;
				cout << "You want to book room: (choose 'y' to book room)- ";
				cin >> choose;

				if (choose == 'y')
				{
					cout << "Enter the room number (1 to 10): ";
					cin >> rNo;

					if (floor2[rNo] == 0)
					{
						floor2[rNo] = 1;
						cout << " ||  Thank you! your room is booked ||  \n" << endl;

					}
					else
					{  
						cout << "This room is already reserved(booked): \n" << endl;

					}

					cout << "Floor2: \n \n";
					for (int j = 1; j <= 10; j++)
					{
						if (floor2[j] == 0)
						{
							cout << "room " << j << " free " << endl;
						}
						else if (floor2[j] == 1)
						{
							cout << "room " << j << " booked " << endl;
						}
					}
				}
				else
				{
					cout << "Programm exit! \n";
				}
			}







			else if (Floor_No == 3)
			{

				cout << "Floor 3 :" << endl;

				for (int k = 1; k <= 10; k++)
				{
					if (floor3[k] == 0)
					{
						cout << "room " << k << " free " << endl;
					}
					else if (floor3[k] == 1)
					{
						cout << "room " << k << " booked " << endl;
					}
				}

				cout << endl;
				cout << "You want to book room: (choose 'y' to book room)- ";
				cin >> choose;

				if (choose == 'y')
				{
					cout << "Enter the room number (from 1 to 10): ";
					cin >> rNo;

					if (floor3[rNo] == 0)
					{
						floor3[rNo] = 1;
						cout << " ||  Thank you! your room is booked ||  \n";

					}
					else
					{
						cout << "This room is already reserved(booked): \n";

					}


					cout << "Floor3: \n \n";
					for (int m = 1; m <= 10; m++)
					{
						if (floor3[m] == 0)
						{
							cout << "room " << m << " free " << endl;
						}
						else if (floor3[m] == 1)
						{
							cout << "room " << m << " booked " << endl;
						}
					}
				}
			}




		}










		else if (Id == 211 && Password == 8754)
		{
			cout << "\n \n ----> ----------- <----" << endl;
			cout << "   WelCome Id2 \n\n\n";




			cout << "Please enter the floor (1, 2 or 3) ";
			cin >> Floor_No;
			cout << endl;


			if (Floor_No == 1)
			{


				cout << "Floor 1 : \n\n";

				for (int i = 1; i <= 10; i++)
				{
					if (floor1[i] == 0)
					{
						cout << "room " << i << " free " << endl;
					}

					else if (floor1[i] == 1)
					{
						cout << "room " << i << " booked " << endl;
					}
				}


				cout << endl;
				cout << "You want to book room: (choose 'y' to book room)- ";
				cin >> choose;

				if (choose == 'y')
				{
					cout << "Enter the room number (from 1 to 10):";
					cin >> rNo;

					if (floor1[rNo] == 0)
					{
						floor1[rNo] = 1;
						cout << " ||  Thank you! your room is booked ||  \n";

					}
					else
					{
						cout << "This room is already reserved(booked): \n";

					}

					cout << "Floor 1: \n\n";
					for (int i = 1; i <= 10; i++)
					{
						if (floor1[i] == 0)
						{
							cout << "room " << i << " free " << endl;
						}
						else if (floor1[i] == 1)
						{
							cout << "room " << i << " booked " << endl;
						}
					}
				}



			}






			else if (Floor_No == 2)
			{

				cout << "Floor 2 \n";

				for (int j = 1; j <= 10; j++)
				{
					if (floor2[j] == 0)
					{
						cout << "room " << j << " free " << endl;
					}
					else if (floor2[j] == 1)
					{
						cout << "room " << j << " booked " << endl;
					}
				}

				cout << "\n  You want to book room: (choose 'y' to book room)- ";
				cin >> choose;

				if (choose == 'y')
				{
					cout << "Enter the room number (from 1 to 10): ";
					cin >> rNo;

					if (floor2[rNo] == 0)
					{
						floor2[rNo] = 1;
						cout << " ||  Thank you! your room is booked ||  \n";

					}
					else
					{
						cout << "This room is already reserved(booked): \n";

					}
					cout << "Floor2: \n\n";
					for (int j = 1; j <= 10; j++)
					{
						if (floor2[j] == 0)
						{
							cout << "room " << j << " free " << endl;
						}
						else if (floor2[j] == 1)
						{
							cout << "room " << j << " booked " << endl;
						}
					}
				}



			}







			else if (Floor_No == 3)
			{

				cout << "Floor 3 :" << endl;

				for (int k = 1; k <= 10; k++)
				{
					if (floor3[k] == 0)
					{
						cout << "room " << k << " free " << endl;
					}
					else if (floor3[k] == 1)
					{
						cout << "room " << k << " booked " << endl;
					}
				}

				cout << "\n You want to book room: (choose 'y' to book room)- ";
				cin >> choose;

				if (choose == 'y')
				{
					cout << "Enter the room number (from 1 to 10): ";
					cin >> rNo;

					if (floor3[rNo] == 0)
					{
						floor3[rNo] = 1;
						cout << " ||  Thank you! your room is booked ||  \n";

					}
					else
					{
						cout << "This room is already reserved(booked): \n";

					}
					cout << "Floor3: \n\n";
					for (int k = 1; k <= 10; k++)
					{
						if (floor3[k] == 0)
						{
							cout << "room " << k << " free " << endl;
						}
						else if (floor3[k] == 1)
						{
							cout << "room " << k << " booked " << endl;
						}
					}
				}


			}




		}
		else
		{
			cout << "Invalid ID or Password (try again) \n";
		}



		cout << "Want to start again (press'y' to start again, press 'n' to exit: \n";
		cin >> choose;
		if (choose == 'y')
		{
			continue;
		}
		if (choose == 'n')
		{
			break;

		}

	}

	return 0;
}