//This Program is being written by Luis Rangel(luisrngl5@gmail.com)
//Ribbon V 0.0.1 Started 5/23/2015
//V 0.0.1-"Beginning"-Added functions to add games and view a collection
//V 0.0.2-"The Squib Update"-Adding minimal color and edit and removal functions 6/11/2015
//V 0.0.3-"The Finishist Update"-Adding the "Gameplay" and "CIB" Filters 6/14/2015
//V 0.0.4-"The Point of No Return Update"-Making a virtual Item class so that the program can suppport Games, Consoles, and Accessories 6/15/2015
//V 0.0.5-"The Scary Shady Yui-Chan Update"-Adding the ability to save and load!!! 6/16/2015, Special Thanks for Gartemond on YouTube for giving me the pateince to finish this update :)
//V 0.0.6-"The Big Score Update"-Adding the ability to add game lots to make things easier! 6/17/2015
//V 0.1-"The Tough Girl Yasuna Update"-Idiotproofing the program and making sure things don't break too hard
//V 0.2-"The Corpse Party Update"-Adding a "Region" variable, making a Rating Menu function to support foregin games, and moving huge functions to RibFuncts.h
//V 0.2.1-"Da Squad Update"-Adding user names and passwords to enable multiple users!! 9/10/2015
//V 0.2.2-"The Darian Bullshits Forever Update"-Cleans up some of the printing in the program to make it look nicer! 10/15/2015
//V 0.2.3-"The Ace Trainer Update"-More printing cleanup, adding back options in the menus, and adding lots of console specfic data 6/2/2015
//This is the first version of the Video Game Colection Tracking Software, Ribbon

//This is the intro C++ deal
#include"stdafx.h"
#include<cstdlib>
#include<cctype>//0.1-For making sure ints are supposed to be ints
#include"RibFuncts.h"
#include"RibClasses.h"
using namespace std;

int main(){
	//These are the variables needed for the Ribbon Program
	ICollection Library;
	int choice, subchoice, exit;
	string tempTitle, userName;
	//These were added in 0.0.2 to add color
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	exit = 0; //As long as exit = 0, the program will loop
	system("mode 650");//0.2.3-Starts in full screen
	//The welcome message
	SetConsoleTextAttribute(hConsole, 12);//0.0.2-Turns the title red
	cout << "\nVersion 0.2.3\nBy Luis Rangel 2016\n\n\t\t\t******Ribbon******\nThank you for using the Ribbon Video Game Collection Software, what would you like to do today?" << endl;
	SetConsoleTextAttribute(hConsole, 15);//0.0.2-Changes it back to white
	//Username and Password stuff
	userName = KnockKnock();
	Library.loadALLITEMS(userName);//0.2.1-Ditto for loading
	while(exit == 0){ //This will loop the program until the user is done using it
		PrintMenu();
		cin >> choice;
		while(cin.fail()){//0.1-Thanks to Chemistpp of Stack Overflow, checks for ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
			//This switch statement will apply the function chosen by the user
			switch (choice){
			case 1://This is for viewing a collection of games
				cout << "\nWhich filter do you wish to apply to the list?\n\t1.No Filter\t2.Investment Filter\t3.Gameplay Filter\t4.CIB Filter" << endl;
				cin >> subchoice;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> subchoice;
				}
				switch (subchoice){
				case 1://Prints all games without filters
					Library.printALL();
					break;
				case 2://Prints all games with the investment filter
					Library.printReturn();
					break;
				case 3://Prints all games with the gameplay filter
					Library.printGameplay();
					break;
				case 4://Prints all games with the CIB filter
					Library.printCIB();
					break;
				default:
					cout << "ERROR:THIS IS NOT AN OPTION!!!" << endl;
				}
				break;
			case 2://0.0.2-Viewing a certain games info
				cout << "\nWhat item do you wish to view the information for?" << endl;
				cin.ignore();
				getline(cin, tempTitle);
				Library.ViewItem(tempTitle);
				break;
			case 3://This for adding a game
				Library.AddItem();
				break;
			case 4://0.0.6-This is adding game lots
				Library.AddLot();
				break;
			case 5://This is to remove a game
				cout << "\nWhat item do you wish to remove?" << endl;
				cin.ignore();
				getline(cin, tempTitle);
				Library.RemoveItem(tempTitle);
				break;
			case 6://This is to edit a game
				cout << "\nWhat item do you wish to edit?" << endl;
				cin.ignore();
				getline(cin, tempTitle);
				Library.EditItem(tempTitle);
				break;
			case 7://This is to save the collection
				cout << "\nSaving the collection..." << endl;
				Library.saveALLITEMS(userName);//0.2.1-Takes the username to know which file to open, "username".vdb
				break;
			case 8://This is to load the collection
				cout << "\nLoading the collection..." << endl;
				Library.loadALLITEMS(userName);//0.2.1-Ditto for loading
				break;
			case 9://This is when the user wishes to exit the program
				cout << "\nThank for using the Ribbon Program, have a nice day! :)" << endl;
				exit = 1;
				break;

			default:
				cout << "\nYou nitwit" << endl;
			}
		}
	system("pause");
	return 0;
}
