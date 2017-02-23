//These are the functions used in the Ribbon Program
//Basic C++ Stuff
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

//"PrintMenu"- This is the function used to print out the menu, it is a UI function
void PrintMenu();

void PrintMenu(){
	cout << "What would you like to do?\n\t1.View Collection\n\t2.View a Certain Item's Information\n\t3.Add Item\n\t4.Add Game Lot\n\t5.Remove Item\n\t6.Update Item\n\n\t7.Save All Items\n\t8.Load All Items\n\n\t9.Exit Program\n" << endl;
}


