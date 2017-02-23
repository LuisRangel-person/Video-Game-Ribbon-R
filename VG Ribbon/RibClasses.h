//These are the Classes used in the Ribbon Program
#include<iostream>
#include<vector>
#include<string>
#include<fstream>//0.0.5-To handle File I/O
#include<Windows.h>//0.0.2-Adding a dash of color
using namespace std;

//0.1-This function will print and return an item's Console
string ConsoleMenu();
string ConsoleMenu(){
	string TCon;
	int choice, subchoice;
	HANDLE dConsole;//Adding a dash of color
	dConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\nWhat game console is this item made for?\nSelect a company!" << endl;
	//0.1-Adding a whole new menu for adding a console to help keep things organized
	cout << "\t1.Magnavox\t2.Atari\t3.Nintendo\n\t4.SEGA\t5.Sony\t6.Microsoft\n\t7.PC\t8.Mobile\t9.Other" << endl;
	cin >> choice;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> choice;
	}
	switch (choice){//Console menu
	case 1://Magnavox Menu
		cout << "\t1.Oddessy\t2.Oddessy 2" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 3){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TCon = "Magnavox Oddessy";
			break;
		case 2:
			TCon = "Magnavox Oddessy 2";
			break;
		default:
			TCon = "Brown Box";
		}
		break;
	case 2://Atari Menu
		SetConsoleTextAttribute(dConsole, 14);//0.2.3-I wanted this to be orange
		cout << "\t1.Atari 2600\t2.Atari 5200\t3.Atari 7800\n\t4.Lynx\t5.Jaguar\t6.Jaguar CD" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 7){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		switch (subchoice){
		case 1:
			TCon = "Atari 2600";
			break;
		case 2:
			TCon = "Atari 5200";
			break;
		case 3:
			TCon = "Atari 7800";
			break;
		case 4:
			TCon = "Atari Lynx";
			break;
		case 5:
			TCon = "Atari Jaguar";
			break;
		case 6:
			TCon = "Atari Jaguar CD";
			break;
		default:
			TCon = "E.T.";//0.2.3-Better Reference
		}
		break;
	case 3://Nintendo Menu
		SetConsoleTextAttribute(dConsole, 12);//0.2.3-Color
		cout << "\t1.Game & Watch\t2.NES\t3.SNES\n\t4.Nintendo 64\t5.GameCube\t6.Wii\n\t7.Wii U" << endl;
		cout << "\t8.Game Boy\t9.Game Boy Color\t10.Virtual Boy\n\t11.GBA\t12.Nintendo DS\t13.Nintendo 3DS\n\t14.New Nintendo 3DS" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 15){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		switch (subchoice){
		case 1:
			TCon = "Nintendo Game & Watch";
			break;
		case 2:
			TCon = "Nintendo Entertainment System";
			break;
		case 3:
			TCon = "Super Nintendo Entertainment System";
			break;
		case 4:
			TCon = "Nintendo 64";
			break;
		case 5:
			TCon = "Nintendo Gamecube";
			break;
		case 6:
			TCon = "Nintendo Wii";
			break;
		case 7:
			TCon = "Nintendo Wii U";
			break;
		case 8:
			TCon = "Nintendo Game Boy";
			break;
		case 9:
			TCon = "Nintendo Game Boy Color";
			break;
		case 10:
			TCon = "Nintendo Virtual Boy";
			break;
		case 11:
			TCon = "Nintendo Game Boy Advance";
			break;
		case 12:
			TCon = "Nintendo DS";
			break;
		case 13:
			TCon = "Nintendo 3DS";
			break;
		case 14:
			TCon = "New Nintendo 3DS";
			break;
		default:
			TCon = "Luigi";
		}
		break;
	case 4://SEGA Menu
		SetConsoleTextAttribute(dConsole, 9);//0.2.3-Color
		cout << "\t1.Master System\t2.Genesis/Mega Drive\n\t3.SEGA CD\t4.SEGA 32X\t5.Game Gear\n\t6.Saturn\t7.Dreamcast" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 5){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TCon = "SEGA Master System";
			break;
		case 2:
			TCon = "SEGA Genesis";
			break;
		case 3:
			TCon = "SEGA CD";
			break;
		case 4:
			TCon = "SEGA 32X";
			break;
		case 5:
			TCon = "SEGA Game Gear";
			break;
		case 6:
			TCon = "SEGA Saturn";
			break;
		case 7:
			TCon = "SEGA Dreamcast";
			break;
		default:
			TCon = "Tails";
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		break;
	case 5://Sony Menu
		SetConsoleTextAttribute(dConsole, 13);//0.2.3-Color, I wanted this to be purple
		cout << "\t1.Playstation\t2.PS2\t3.PS3\t4.PS4\n\t5.PSP\t6.PS Vita" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 7){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		switch (subchoice){
		case 1:
			TCon = "Sony Playstation";
			break;
		case 2:
			TCon = "Sony Playstation 2";
			break;
		case 3:
			TCon = "Sony Playstation 3";
			break;
		case 4:
			TCon = "Sony Playstation 4";
			break;
		case 5:
			TCon = "Sony Playstation Portable";
			break;
		case 6:
			TCon = "Sony Playstation Vita";
			break;
		default:
			TCon = "Spyro";
			break;
		}
		break;
	case 6://Microsoft Menu
		SetConsoleTextAttribute(dConsole, 10);//0.2.3-Color
		cout << "\t1.XBox\t2.XBox 360\t3.XBox One" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 4){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TCon = "Microsoft XBox";
			break;
		case 2:
			TCon = "Microsoft XBox 360";
			break;
		case 3:
			TCon = "Microsoft XBox One";
			break;
		default:
			TCon = "Niko";
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		break;
	case 7://PC
		TCon = "PC";
		break;
	case 8://0.2.3-Mobile Options
		SetConsoleTextAttribute(dConsole, 8);//0.2.3-Color
		cout << "\t1.iOS\t2.Android\t3.Windows Phone OS\t4.Blackberry OS" << endl;
		while (cin.fail() && subchoice > 0 && subchoice < 5) {//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		switch (subchoice) {
		case 1:
			TCon = "Apple iOS";
			break;
		case 2:
			TCon = "Google Android";
			break;
		case 3:
			TCon = "Blackberry OS";
			break;
		default:
			TCon = "Nokia";
			break;
		}
		break;
	case 9://The Other Menu, Orphans
		SetConsoleTextAttribute(dConsole, 11);//0.2.3-Color, Wanted this to be pink
		cout << "\t1.Colecovision\t2. Mattel Intellivision\t3.Fairchild Channel F\n\t4.NEC Turbografx 16\t5.NEC Turbografx CD" << endl;
		cout << "\t6.SNK Neo Geo AVS\t7.Worlds of Wonder Action Max\n\t8.Philips CD-i\n\t9.3DO Interactive Player" << endl;
		cout << "\t12.Custom" << endl;
		cin >> subchoice;
		while (cin.fail() && subchoice > 0 && subchoice < 10){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> subchoice;
		}
		SetConsoleTextAttribute(dConsole, 15);//0.2.3-Color
		switch (subchoice){
		case 1:
			TCon = "Colecovision";
			break;
		case 2:
			TCon = "Mattel Intellivision";
			break;
		case 3:
			TCon = "Fairchild Channel F";
			break;
		case 4:
			TCon = "NEC Turbografx 16";
			break;
		case 5:
			TCon = "NEC Turbografx CD";
			break;
		case 6:
			TCon = "SNK Neo Geo AVS";
			break;
		case 7:
			TCon = "Worlds of Wonder Action Max";
			break;
		case 8:
			TCon = "Philips CD-i";
			break;
		case 9:
			TCon = "3DO Interactive Player";
			break;
		case 10:
			cout << "What console was this game made for?" << endl;
			getline(cin, TCon);
			break;
		default:
			TCon = "Yasuna";
		}
	}
	return TCon;
}

//0.2-This function will ask from a game's rating from many regions
string VGRatingMenu();
string VGRatingsMenu(){
	int choice, subchoice;
	string TRating;
	//Asking for the games rating, in future versions there will be support for foregin Ratings
	cout << "\nWhat is this games rating board does this game fall under?\n\t1.ESRB(North America)\n\t2.VRC(1990's SEGA)\n\t3.CERO(Japan)\n\t4.Pegi(Europe/Israel)\n\t5.USK(Germany)\n\t6.Other/Custom" << endl;
	cin >> choice;
	while (cin.fail() && choice > 0 && choice < 7){
		cin.clear();
		cin.ignore(256, '\n');
		cout << "**Please enter an appropriate number**" << endl;
		cin >> choice;
	}
	switch (choice){
	case 1://ESRB
		cout << "Thank you! Select from this list please.\n\t1.eC-Early Childhood\n\t2.E or K-A-Everyone\n\t3.E 10+-Everyone 10 or Older\n\t4.T-Teen\n\t5.M-Mature\n\t6.AO-Adults Only\n\t7-Not Rated" << endl;
		cin >> subchoice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "**Please enter an appropriate number**" << endl;
			cin >> subchoice;
		}
		//This switch statement will handle the choice the user makes
		switch (subchoice){
		case 1:
			TRating = "eC";
			break;
		case 2:
			TRating = "E";
			break;
		case 3:
			TRating = "E10+";
			break;
		case 4:
			TRating = "T";
			break;
		case 5:
			TRating = "M";
			break;
		case 6:
			TRating = "AO";
			break;
		default:
			TRating = "NR";
		}
		break;
	case 2://VRC Ratings
		cout << "Thank you! Select from this list please.\n\t1.GA-General Audiences\n\t2.MA-13-Parental Caution For Those Under 13\n\t3.MA-17-Mature Audiences\n\t4.NR-Not Rated" << endl;
		cin >> subchoice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "**Please enter an appropriate number**" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TRating = "GA";
			break;
		case 2:
			TRating = "MA-13";
			break;
		case 3:
			TRating = "MA-17";
			break;
		default:
			TRating = "NR";
		}
		break;
	case 3://CERO Ratings
		cout << "Arigato! Select from the list please.\n\t1.A-All Ages\n\t2.B-Over 13\n\t3.C-Over 15\n\t4.D-Over 17\n\t5.Z-Adults Only\n\t6.NR-Not Rated" << endl;
		cin >> subchoice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "**Please enter an appropriate number**" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TRating = "A";
			break;
		case 2:
			TRating = "B";
			break;
		case 3:
			TRating = "C";
			break;
		case 4:
			TRating = "D";
			break;
		case 5:
			TRating = "Z";
			break;
		default:
			TRating = "NR";
		}
		break;
	case 4://Pegi Rating
		cout << "Thank you! Select from the list please.\n\t1.3-Over 3\n\t2.7-Over 7\n\t3.12-Over 12\\t4.16-Over 16\n\t5.18-Over 18\n\t6.NR-Not Rated" << endl;
		cin >> subchoice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "**Please enter an appropriate number**" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TRating = "3";
			break;
		case 2:
			TRating = "7";
			break;
		case 3:
			TRating = "12";
			break;
		case 4:
			TRating = "16";
			break;
		case 5:
			TRating = "18";
			break;
		default:
			TRating = "NR";
		}
		break;
	case 5://USK Rating
		cout << "Danke! Select from the list please.\n\t1.0-All Ages\n\t2.6-Over 6\n\t3.12-Over 12\n\t4.16-Over 16\n\t5.18-Over 18\n\t6.NR-Not Rated" << endl;
		cin >> subchoice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "**Please enter an appropriate number**" << endl;
			cin >> subchoice;
		}
		switch (subchoice){
		case 1:
			TRating = "0";
			break;
		case 2:
			TRating = "6";
			break;
		case 3:
			TRating = "12";
			break;
		case 4:
			TRating = "16";
			break;
		case 5:
			TRating = "18";
			break;
		default:
			TRating = "NR";
		}
		break;
	case 6://The Other Menu
		cout << "Thank you! Please enter the game's rating!!" << endl;
		cin.ignore();
		getline(cin, TRating);
		break;
	default:
		TRating = "Helen";//WON'T SOMEONE PLEASE THINK OF THE CHILDREN?!
	}
	return TRating;
}

//0.2.1-This function will handle usernames and passwords to begin adding security features(As of 0.2.1-They are very basic and crappy)
string KnockKnock();
string KnockKnock(){
	string tempName, tempPass1, tempPass2, secret, offName, offPass, offSecret, tempFile;
	int attempts, Passed, status;
	attempts = 0;//This keeps track of how many times a user tries to enter a password
	Passed = 0;
	status = 0;//This is here to end the loop that the new user block and the password block is in
	//Will ask if the user for their user name
	while (status == 0){
		cout << "What is your username? If you haven't used the program before, please type 'NEW'." << endl;
		getline(cin, tempName);
		//If the user is new
		if (tempName == "NEW"){
			ofstream inside("Users.vgr", ios::out | ios::app | ios::binary); //0.2.1-Removed ios::trunc as that was wiping the file everytime it was opened, duh
			while (Passed == 0){
				//Asking for a password
				cout << "Welcome to Ribbon!! What would you like your username to be?" << endl;
				getline(cin, tempName);
				cout << "What would you like your password to be?" << endl;
				getline(cin, tempPass1);
				cout << "Re-enter password!" << endl;
				getline(cin, tempPass2);
				//Checking if they matched
				if (tempPass1 == tempPass2){
					Passed++;
				}
				else{
					cout << "Sorry your passwords don't seem to match...please try again!" << endl;
				}
			}
			cout << "Thank you very much! Try not to forget the password!!" << endl;
			//Secret Question!
			cout << "Quick!! What is your favorite flavor of ice cream!?!?!" << endl;
			getline(cin, secret);
			inside << tempName << endl;
			inside << tempPass1 << endl;
			inside << secret << endl;
			tempFile = tempName + ".udb";//0.2.3-Makes a database file for new users
			ofstream outside(tempFile, ios::out | ios::trunc | ios::binary);
			system("cls");//Clears the screen
			cout << "Thank you! Hope you enjoy Ribbon!! :D" << endl;
			return tempName;
		}
		//Returning users
		else{
			ifstream outside;
			outside.open("Users.vgr");
			while (!outside.eof()){
				//Loading the username, password, and secret answer!
				getline(outside, offName);
				getline(outside, offPass);
				getline(outside, offSecret);
				if (offName == tempName){
					while(attempts < 3 && status == 0){
						cout << "What is your password?" << endl;
						cin >> tempPass1;
						if (tempPass1 == offPass){
							system("cls");//Clearing screen
							cout << "Welcome back " << tempName << "!\n" << endl;
							return tempName;
						}
						else{
							cout << "WRONG PASSWORD!! Try again." << endl;
							attempts++;
						}
					}
					//If they fail to get the password right
					if (attempts == 3){
						cout << "Out of attempts... What's your favorite type of ice cream?"<<endl;
						cin >> secret;
						if (offSecret == secret){
							cout << "Saved yourself!" << endl;
							return tempName;
						}
						else{//If they run out of attempts
							cout << "Game Over!!" << endl;
							system("pause");
							exit(EXIT_FAILURE);
						}
					}

				}
			}
		}
	}
	cout << "**ERROR:Username not found, sorry!**" << endl;
	exit(EXIT_FAILURE);
}
//0.0.4-Changing the Game class to the Item class to allow for more types of things to be added
class Item{
	private:
		//Location = Location the Item was found
		string IType, Title, Notes, Description, Location, Region;
		float Cost, Value, RetRate;
		//YoR = Year of Release, URat = User Rating, ColStat = Collection Status(If the item is in the collection or not)
		int YoR, URat, ColStat;//0.0.3-playStat is used to denote if the user beat, or 100%'d a game
		bool Box, Manual, Inserts;//0.0.3-Used to determine wheter the user has the game complete in box
	public:
		Item(string Ty, string T, string R, string N, string L, float Co, float V, int Y, int U, int Col, bool Bx, bool Ma, bool Ins){
			IType = Ty; Title = T; Region = R;  Notes = N; Location = L; Cost = Co; Value = V; YoR = Y; URat = U; ColStat = Col;
			Box = Bx; Manual = Ma; Inserts = Ins;//0.0.3-Checking for CIB status
		}
		//These are the sets and gets to be able to obtain/edit information for the game
		void setItype(string Ty){ IType = Ty; } string getItype(){ return IType; }//0.0.4-Needed to know what type of item the object is
		void setTitle(string T){Title = T;}	string getTitle(){return Title;}
		void setRegion(string R){ Region = R; } string getRegion(){ return Region; }//0.2-Needed to support foreign games
		void setNotes(string N){Notes = N;}	string getNotes(){return Notes;}
		void setLoc(string L){Location = L;}	string getLoc(){return Location;}
		void setCost(float C){Cost = C;}	float getCost(){return Cost;}
		void setValue(float V){Value = V;}	float getValue(){return Value;}
		float getRetRate(){
			//Have to make sure both values exist
				if(Cost > 0 && Value > 0){
					RetRate = ((Value / Cost)-1) * 100;
					return RetRate;
				}
				else{
					return 0;//This is so the program doesn't devide by zero
				}
		}
		void setYoR(int Y){YoR = Y;}		int getYoR(){return YoR;}
		void setURat(int U){URat = U;}		int getURat(){return URat;}
		//For Collection Status, 1 = IN, 2 = ON LOAN
		void setColStat(int C){ColStat = C;}	int getColStat(){return ColStat;}
		//0.0.3-CIB Status, true = in collection
		void setBox(bool Bx){ Box = Bx; }	bool getBox(){ return Box; }
		void setManual(bool Ma){ Manual = Ma; }	bool getManual(){ return Manual; }
		void setInserts(bool Ins){ Inserts = Ins; }	bool getInserts(){ return Inserts; }
		//0.0.4-Virtual functions needed specfically for games
		virtual void seTRating(string E){} 
		virtual string getRating(){ return 0; }
		virtual void setPub(string P){} 
		virtual string getPub(){ return 0; }
		virtual void setDev(string D){} 
		virtual string getDev(){ return 0; }
		virtual void setConsole(string C){} 
		virtual string getConsole(){ return 0; }
		virtual void setPlay(string P){} 
		virtual string getPlay(){ return 0; }
		//0.0.4-Virtual functions needed specfically for Consoles
		virtual void setGameNum(int GN){} 
		virtual int getGameNum(){ return 0; }
		virtual void setCompany(string Cp){} 
		virtual string getCompany(){ return 0; }
};
//0.0.4-New Game class!!
class Game :public Item{
	protected:
		string Rating, Publisher, Developer, Console, playStat;
	public:
		Game(string Ty, string T, string R, string N, string L, float Co, float V, int Y, int U, int Col, bool Bx, bool Ma, bool Ins, string C, string E, string P, string D, string pl) :Item(Ty, T, R, N, L, Co, V, Y, U, Col, Bx, Ma, Ins){ Console = C; Rating = E; Publisher = P; Developer = D; playStat = pl; }
		void setConsole(string C){ Console = C; }	string getConsole(){ return Console; }
		void seTRating(string E){ Rating = E; }	string getRating(){ return Rating; }
		void setPub(string P){ Publisher = P; }	string getPub(){ return Publisher; }
		void setDev(string D){ Developer = D; }	string getDev(){ return Developer; }
		void setPlay(string Pl){ playStat = Pl; } string getPlay(){ return playStat; }//0.0.3-Used to set the play statistic
};
//0.0.4-New Console Class!!
class Console :public Item{
	protected:
		int GameNum;//Total Number of games for that console, 0 if unknown
		string Company;//The company that made the console
	public:
		Console(string Ty, string T, string R, string N, string L, float Co, float V, int Y, int U, int Col, bool Bx, bool Ma, bool Ins, int GN, string Cp) : Item(Ty, T, R, N, L, Co, V, Y, U, Col, Bx, Ma, Ins){ GameNum = GN; Company = Cp; }
		void setGameNum(int GN){ GameNum = GN; } int getGameNum(){ return GameNum; }
		void setCompany(string Cp){ Company = Cp; } string getCompany(){ return Company; }
};
//0.0.4-New Accessory class!!
class Accessory :public Item{
	protected:
		string Console, Company;//Console the Acc. was made for, the company the Acc. was made by
	public:
		Accessory(string Ty, string T, string R, string N, string L, float Co, float V, int Y, int U, int Col, bool Bx, bool Ma, bool Ins, string C, string Cp) : Item(Ty, T, R, N, L, Co, V, Y, U, Col, Bx, Ma, Ins){ Console = C; Company = Cp; }
		void setConsole(string C){ Console = C; }	string getConsole(){ return Console; }
		void setCompany(string Cp){ Company = Cp; } string getCompany(){ return Company; }
};
//This is the ICollection class(stands for Game Collection), this will handle the list of games using a vector
class ICollection{
	private:
		vector<Item*> G;
	public:
		ICollection();
		int AddItem();
		int AddLot();//0.0.6-Used for adding game lots
		int ViewItem(string T);
		int RemoveItem(string T);
		int EditItem(string T);
		void printALL();
		void printReturn();//0.0.2-This will print the rate of return on all the video games in the collection
		void printGameplay();//0.0.3-This will print what games you have beaten and completed
		void printCIB();//0.0.3-This will print the CIB status of the whole collection
		void saveALLITEMS(string N);//0.0.5-This will save all items in the collection
		void loadALLITEMS(string N);//0.0.5-This will load all items from a file

	}icollection;
ICollection::ICollection(){}//This method is used to add new games
int ICollection::AddItem(){//0.2.3-Made this return an int to make canceling out possible
	//These are the temp variables used to add a new game
	string TType, TTitle, TCon, TRating, TPub, TDev, TNote, TLoc, Tplay, ans, TComp, TReg;
	float TCost, TVal;
	int TYoR, TURat, TColStat, choice, TTNum;
	bool Tbx, TMa, TIns;//0.0.3-For CIB Status
	Item* temp;
	//0.0.4-I shall ask the user wheter the new item is a Game, Console, or Accessory
	cout << "\nIs this new item a Game or a Console?\n\t1.Game\t2.Console\t3.Accessory\t\t4.CANCEL" << endl;
	cin >> choice;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> choice;
	}
	if (choice == 1){
		TType = "GAME";
	}
	if (choice == 2){
		TType = "CONSOLE";
	}
	if (choice == 3){
		TType = "ACCESSORY";
	}
	if (choice == 4) {
		return 1;//0.2.3-Adding Cancelled
	}
	//I shall ask the user for the game information
	if (TType == "GAME"){
		cout << "\nCongraulations on getting a new game!\nWould you kindly enter the title of this game?\nEnter CANCEL to Cancel" << endl;
	}
	if (TType == "CONSOLE"){
		cout << "\nCongraulations on getting a new console!!\nWould you kindly enter the name of the console?\nEnter CANCEL to Cancel" << endl;
	}
	if (TType == "ACCESSORY"){
		cout << "\nCongraulations on getting this accessory!!\nWould you kindly enter the name of this accessory?\nEnter CANCEL to Cancel" << endl;
	}
	//These lines will allow the user to enter a title with spaces
	cin.ignore();
	getline(cin, TTitle);
	if (TTitle == "CANCEL") {
		return 1;//0.2.3-Adding Cancelled
	}
	//0.2-Asking what region this game is made for
	cout << "What region is this game meant for?\n\t1.North America\t2.Japan\t3.Europe\t4.China\t\t5.CANCEL" << endl;
	cin >> choice;
	while (cin.fail() && choice > 0 && choice < 5){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> choice;
	}
	switch (choice){
	case 1:
		TReg = "NTSC-U/C";
		break;
	case 2:
		TReg = "NTSC-J";
		break;
	case 3:
		TReg = "PAL";
		break;
	case 4:
		TReg = "NTSC-C";
		break;
	case 5:
		return 1;//0.2.3-Adding Cancelled
		break;
	default:
		TReg = "Region coding is dumb XP";
	}
	//Asking for the console the item is made for
	if (TType == "GAME" || TType == "ACCESSORY"){
		TCon = ConsoleMenu();
	}
	//This stuff is game exclusive
	if (TType == "GAME"){
		//Asking for the games rating
		TRating = VGRatingsMenu();
		//Asking for the game's publisher
		cout << "\nThank you! What is this game's publisher?" << endl;
		cin.ignore();
		getline(cin, TPub);
		//Asking for the game's developer
		cout << "\nThank you! What is this game's developer?" << endl;
		getline(cin, TDev);
	}
	//0.0.4-Asking for the company that made the console, if the item is a console
	if (TType == "CONSOLE" || TType == "ACCESSORY"){
		cout << "\nThank you! What company made this item?" << endl;
		cin.ignore();
		getline(cin, TComp);
	}
	//This is console exclusive
	if (TType == "CONSOLE"){
		cout << "\nThank you! Now how many games were offically released for this console? If this number is unknown, please enter 0!" << endl;
			cin >> TTNum;
	}
	//Asking what year the item was released
	//NOTE:Add a check to make sure the number is between 1965 and the current year as any year below or above would be impossible
	cout << "\nThank you! What year was this item released?\nIf you don't know or can't find out, enter 0 please." << endl; //0.2.3-Asking people to enter 1610 is too corny, 0 is easier
	cin >> TYoR;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> TYoR;
	}
	//This will be the temporay check
	if(TYoR < 1965 || TYoR > 2015){
		TYoR = 1610;
	}
	//Asking where the game came from
	cout << "\nThank You! Where did you get this item?\nEx. Gift from Mom, or Bought from Greg's Games" << endl;
	cin.ignore();
	getline(cin, TLoc);
	//Asking if the user wishes to add addtional notes
	cout << "\nThank You! Do you wish to add additional notes?\n\t1.Yes\n\t2.Any other phrase = NO" << endl;
	cin >> ans;
	if(ans == "Y" || ans == "y" || ans == "yes" || ans == "Yes" || ans == "YES" || ans == "1"){
		cout << "\nWhat note would you like to add?" << endl;
		cin.ignore();
		getline(cin, TNote);
		cout << "\n Note Taken" << endl;
	}
	else{
		TNote = "None";
		cout << "\nAlright then, suit yourself." << endl;
	}
	//0.0.3-Asking for CIB status
	cout << "\nDo you have the box for this item?\n\t1.Yes\t2.No" << endl;
	cin >> choice;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> choice;
	}
	if (choice == 1){
		Tbx = true;
	}
	else{ 
		Tbx = false; 
	}
	cout << "\nDo you have the manual for this item?\n\t1.Yes\t2.No" << endl;
	cin >> choice;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> choice;
	}
	if (choice == 1){
		TMa = true;
	}
	else{
		TMa = false;
	}
	cout << "\nDoes this item come with extra inserts?\n\t1.Yes\t2.No" << endl;
	cin >> choice;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> choice;
	}
	if (choice == 1){
		TIns = true;
	}
	else{
		TIns = false;
	}
	//Asking for the price of the item 
	cout << "\nHow much did you pay for this item?" << endl;
	//For some style
	cout << "$";
	cin >> TCost;

	//Asking for the game's value
	cout << "\nWould you kindly enter the item's last known value?\nIf the game doesn't have a value, you don't know the value, or you just don't feel like looking it up right now, please enter 0" << endl;
	//For some style 
	cout << "$";
	cin >> TVal;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> TVal;
	}
	//Setting the user rating and the collection status
	TURat = 0;
	if (TType == "GAME"){
		cout << "\nIs it possible to beat this game?\n1.Yes\t2.No" << endl;//0.2.2-Asking to see if it's even possible to beat a game
		cin >> choice;//0.2.3-It didn't ask before
		while (cin.fail()) {//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
		if (choice == 1){
			Tplay = "UNBEATEN";
		}
		else{
			Tplay = "IMPOSSIBLE";
		}
	}
	TColStat = 1;
	//Now to create the game entry
	if (TType == "GAME"){
		temp = new Game(TType, TTitle, TReg, TNote, TLoc, TCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TCon, TRating, TPub, TDev, Tplay);
		G.push_back(temp);
	}
	if (TType == "CONSOLE"){
		temp = new Console(TType, TTitle, TReg, TNote, TLoc, TCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TTNum, TComp);
			G.push_back(temp);
	}
	if (TType == "ACCESSORY"){
		temp = new Accessory(TType, TTitle, TReg, TNote, TLoc, TCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TCon, TComp);
		G.push_back(temp);
	}
	//Letting the user know the process is done!!
	cout << "\nAnd Lo, the process is done!! " << TTitle << " was added to the game collection!" << endl;
	return 0;
}
//0.0.6-This method will add game lots
int ICollection::AddLot(){//0.2.3-Made this method return an int so that it can be cancelled out of
	string LotName, TType, TTitle, TCon, TRating, TPub, TDev, TNote, Tplay, ans, TComp, TReg;//Name of the lot
	int GameNum, TYoR, TURat, TColStat, choice, TTNum;//Total number of games in lot
	float TCost, UCost, TVal;//Total cost, Cost per Item
	bool Tbx, TMa, TIns;//0.0.3-For CIB Status
	Item* temp;
	//Asking the user to name the lot
	cout << "\nWhat do want to call this lot?\nType CANCEL to return to the main menu!" << endl;
	cin.ignore();
	getline(cin, LotName);
	if (LotName == "CANCEL") {//0.2.3-Cancels out of the menu
		return 1;
	}
	cout << "Thank you! How many items were in this lot?" << endl;
	cin >> GameNum;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> GameNum;
	}
	cout << "Thank you! How much did this lot cost you?" << endl;
	cout << "$";
	cin >> TCost;
	while (cin.fail()){//0.1-Checking for Ints	
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a number" << endl;
		cin >> TCost;
	}
	UCost = TCost / GameNum;//Calculating the Unit cost of the lot
	cout << "\n**Okay lets start adding games!**" << endl;
	for (int i = 0; i < GameNum; i++){//Loops to add games to the lot
		//0.0.4-I shall ask the user wheter the new item is a Game, Console, or Accessory
		cout << "\nIs this new item a Game or a Console?\n\t1.Game 2.Console 3.Accessory" << endl;
		cin >> choice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
		if (choice == 1){
			TType = "GAME";
		}
		if (choice == 2){
			TType = "CONSOLE";
		}
		if (choice == 3){
			TType = "ACCESSORY";
		}
		//I shall ask the user for the game information
		if (TType == "GAME"){
			cout << "\nCongraulations on getting a new game!\nWould you kindly enter the title of this game?" << endl;
		}
		if (TType == "CONSOLE"){
			cout << "\nCongraulations on getting a new console!!\nWould you kindly enter the name of the console?" << endl;
		}
		if (TType == "ACCESSORY"){
			cout << "\nCongraulations on getting this accessory!!\nWould you kindly enter the name of this accessory?" << endl;
		}
		//These lines will allow the user to enter a title with spaces
		cin.ignore();
		getline(cin, TTitle);
		//0.2-Asking what region this game is made for
		cout << "What region is this game meant for?\n\t1.North America\t2.Japan\t3.Europe\t4.China" << endl;
		cin >> choice;
		while (cin.fail() && choice > 0 && choice < 5){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
		switch (choice){
		case 1:
			TReg = "NTSC-U/C";
			break;
		case 2:
			TReg = "NTSC-J";
			break;
		case 3:
			TReg = "PAL";
			break;
		case 4:
			TReg = "NTSC-C";
			break;
		default:
			TReg = "Region coding is dumb XP";
		}
		//Asking for the console the item is made for
		if (TType == "GAME" || TType == "ACCESSORY"){
			TCon = ConsoleMenu();
		}
		//This stuff is game exclusive
		if (TType == "GAME"){
			//Asking for the games rating, in future versions there will be support for foregin Ratings
			TRating = VGRatingsMenu();
			//Asking for the game's publisher
			cout << "\nThank you! What is this game's publisher?" << endl;
			cin.ignore();
			getline(cin, TPub);
			//Asking for the game's developer
			cout << "\nThank you! What is this game's developer?" << endl;
			getline(cin, TDev);
		}
		//0.0.4-Asking for the company that made the console, if the item is a console
		if (TType == "CONSOLE" || TType == "ACCESSORY"){
			cout << "\nThank you! What company made this item?" << endl;
			cin.ignore();
			getline(cin, TComp);
		}
		//This is console exclusive
		if (TType == "CONSOLE"){
			cout << "\nThank you! Now how many games were offically released for this console? If this number is unknown, please enter 0!" << endl;
			cin >> TTNum;
			while (cin.fail()){//0.1-Checking for Ints	
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Please enter a number" << endl;
				cin >> TTNum;
			}
		}
		//Asking what year the item was released
		//NOTE:Add a check to make sure the number is between 1965 and the current year as any year below or above would be impossible
		cout << "\nThank you! What year was this item released?\nIf you don't know or can't find out, enter 1610 please. That was the year the Planet Saturn was discovered, in case you were wondering." << endl; //I will develop a fact of the year generator later as I will ask the user to input a random year later
		cin >> TYoR;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> TYoR;
		}
		//This will be the temporay check
		if (TYoR < 1965 || TYoR > 2015){
			TYoR = 1610;
		}
		//Asking if the user wishes to add addtional notes
		cout << "\nThank You! Do you wish to add additional notes?\n\t1.Yes\n\t2.Any other phrase = NO" << endl;
		cin >> ans;
		if (ans == "Y" || ans == "y" || ans == "yes" || ans == "Yes" || ans == "YES" || ans == "1"){
			cout << "\nWhat note would you like to add?" << endl;
			cin.ignore();
			getline(cin, TNote);
			cout << "\n Note Taken" << endl;
		}
		else{
			TNote = "None";
			cout << "\nAlright then, suit yourself." << endl;
		}
		//0.0.3-Asking for CIB status
		cout << "\nDo you have the box for this item?\n\t1.Yes\t2.No" << endl;
		cin >> choice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
		if (choice == 1){
			Tbx = true;
		}
		else{
			Tbx = false;
		}
		cout << "\nDo you have the manual for this item?\n\t1.Yes\t2.No" << endl;
		cin >> choice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
		if (choice == 1){
			TMa = true;
		}
		else{
			TMa = false;
		}
		cout << "\nDoes this item come with extra inserts?\n\t1.Yes\t2.No" << endl;
		cin >> choice;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> choice;
		}
		if (choice == 1){
			TIns = true;
		}
		else{
			TIns = false;
		}
		//Asking for the game's value
		cout << "\nWould you kindly enter the item's last known value?\nIf the game doesn't have a value, you don't know the value, or you just don't feel like looking it up right now, please enter 0" << endl;
		//For some style 
		cout << "$";
		cin >> TVal;
		while (cin.fail()){//0.1-Checking for Ints	
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Please enter a number" << endl;
			cin >> TVal;
		}
		//Setting the user rating and the collection status
		TURat = 0;
		if (TType == "GAME"){
			Tplay = "UNBEATEN";
		}
		TColStat = 1;
		//Now to create the game entry
		if (TType == "GAME"){
			temp = new Game(TType, TTitle, TReg, TNote, LotName, UCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TCon, TRating, TPub, TDev, Tplay);
			G.push_back(temp);
		}
		if (TType == "CONSOLE"){
			temp = new Console(TType, TTitle, TReg, TNote, LotName, UCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TTNum, TComp);
			G.push_back(temp);
		}
		if (TType == "ACCESSORY"){
			temp = new Accessory(TType, TTitle, TReg, TNote, LotName, UCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TCon, TComp);
			G.push_back(temp);
		}
	}
	cout << "\n**Lot added!!**" << endl;
	return 0;
}
//This is the printALL function, this is to print all the games in a collection
void ICollection::printALL(){
	cout << "\n**Now showing all items in this collection!**" << endl;
	for (int i = 0; i < G.size(); i++){
		cout << "Item#" << i + 1 << ": ";
		if (G[i]->getItype() == "CONSOLE" || G[i]->getItype() == "ACCESSORY"){
			cout << G[i]->getCompany() << " ";
		}
		cout << G[i]->getTitle();
		if (G[i]->getItype() == "GAME" || G[i]->getItype() == "ACCESSORY"){
			cout << " for " << G[i]->getConsole();
		}
		cout << "(" << G[i]->getYoR() << ")" << endl;
	}
	system("pause");//0.2.1-This will pause the system to enable the user to look at the list before the menu appears
	cout << endl;//0.2.1-There was no space here before to seperate the list from the menu, and that bothered me...
}
//0.0.2-This method will print all the games in the collection but will color code them to show rate of return
void ICollection::printReturn(){
	float totalVal, totalCos, totalRat;//These are to calculate the rate of return of the whole collection
	totalVal = 0;
	totalCos = 0;
	totalRat = 0;
	HANDLE dConsole;//Adding a dash of color
	dConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n**Now showing all rates of returns for items in this collection!**" << endl;
	for (int i = 0; i < G.size(); i++){
		if (G[i]->getRetRate() < 0){//If the game is a loss of investment
			SetConsoleTextAttribute(dConsole, 12);
		}
		if (G[i]->getRetRate() > 0){//If the game is a return of investment
			SetConsoleTextAttribute(dConsole, 10);
		}
		if (G[i]->getRetRate() == 0){//If the game isnt a loss or gain
			SetConsoleTextAttribute(dConsole, 15);
		}
		cout << "Item#" << i + 1 << ": ";
		if (G[i]->getItype() == "CONSOLE" || G[i]->getItype() == "ACCESSORY"){
			cout << G[i]->getCompany() << " ";
		}
		cout << G[i]->getTitle();
		if (G[i]->getItype() == "GAME"||G[i]->getItype() == "ACCESSORY"){
			cout << " for " << G[i]->getConsole();
		}
		cout << "(" << G[i]->getYoR() << ") ";
		cout << "\n\tCost:$" << G[i]->getCost() << " Value:$" << G[i]->getValue() << " ";//0.2.2-This adds a little bit more info on the finanicals for a game
		if (G[i]->getCost() != 0){//0.0.5-If the game breaks even
			cout << G[i]->getRetRate() << "%" << endl;
		}
		if (G[i]->getCost() == 0){//0.0.5-If the game was free
			cout << "FREE" << endl;
		}
		totalVal = totalVal + G[i]->getValue();
		totalCos = totalCos + G[i]->getCost();
	}
	//This is to calculate the total rate of return of the program
	if (totalVal > 0 && totalCos > 0){
		totalRat = ((totalVal / totalCos) - 1) * 100;
	}
	if (totalRat < 0){//If the collection is a loss of investment
		SetConsoleTextAttribute(dConsole, 12);
	}
	if (totalRat > 0){//If the collection is a return of investment
		SetConsoleTextAttribute(dConsole, 10);
	}
	if (totalRat == 0){//If the collection isnt a loss or gain
		SetConsoleTextAttribute(dConsole, 15);
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;//0.0.5-Line for effect :)
	cout << "\tGRAND TOTAL-- COST:$" << totalCos << " VALUE:$" << totalVal << "\n\tTOTAL RATE OF RETURN: " << totalRat << "%\n" << endl;
	SetConsoleTextAttribute(dConsole, 15);//retuns the color to normal
	system("pause");//0.2.1-This will pause the system to enable the user to look at the list before the menu appears
	cout << endl;//0.2.1-Added for neatness' sake
}
//0.0.2-This method will print all the games in the collection but will color code them according to if they have been beat
void ICollection::printGameplay(){
	float j, comN, beaN, unbN;//Keeps track of the number of games
	int stage = 0;//0.2.3-Used for printing the percentage bar
	j = 0;
	comN = 0;
	beaN = 0;
	unbN = 0;
	float comp, beat, unbeat;//0.2.3-Used to draw the percentage of beaten games vs un beaten ones
	HANDLE dConsole;//Adding a dash of color
	dConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n**Now showing all games that are unbeaten, beaten, and completed!**" << endl;
	cout << "\tUNBEATEN"; //Shows that white means unbeaten
	SetConsoleTextAttribute(dConsole, 10);
	cout << "\tBEATEN";
	SetConsoleTextAttribute(dConsole, 14);
	cout << "\tCOMPLETED" << endl;
	for (int i = 0; i < G.size(); i++){
		if (G[i]->getItype() == "GAME"){
			j++;
			if (G[i]->getPlay() == "BEATEN"){//If the game is beaten
				SetConsoleTextAttribute(dConsole, 10);
				beaN++;
			}
			if (G[i]->getPlay() == "COMPLETED"){//If the game is completed
				SetConsoleTextAttribute(dConsole, 14);
				comN++;
			}
			if (G[i]->getPlay() == "UNBEATEN"){//If the game isnt beaten
				SetConsoleTextAttribute(dConsole, 15);
				unbN++;
			}
			if (G[i]->getPlay() == "IMPOSSIBLE"){//0.2.2-This is if the game is impossible to beat
				SetConsoleTextAttribute(dConsole, 8);
				j--;//0.2.3-Impossible games don't count against the total
			}
			cout << "Game#" << j << ": " << G[i]->getTitle() << "\n\t" << G[i]->getConsole() << "(" << G[i]->getYoR() << ") " << G[i]->getPlay() << endl;//0.2.2-Added a next line and a tab to make it look nicer!
		}
	}
	if (j == 0){
		cout << "\n**Sorry, no games were found in this collection!!" << endl;
	}
	beat = (beaN / j) * 100;//0.2.3-# games beaten / Total Games
	comp = (comN / j) * 100;//0.2.3-# games completed / Total Games
	unbeat = (unbN / j) * 100;//0.2.3-#games unbeaten / Total Games
	cout << endl;
	SetConsoleTextAttribute(dConsole, 14);//Completed percentage
	cout << comN << " " << comp << "%\t";
	SetConsoleTextAttribute(dConsole, 10);//Beaten percentage
	cout << beaN << " " << beat << "%\t";
	SetConsoleTextAttribute(dConsole, 15);//Unbeaten percentage
	cout << unbN << " " << unbeat << " " << '%' << endl;
	for (int p = 0; p < 100; p++) {
		if (stage == 0 && comp > 0) {
			SetConsoleTextAttribute(dConsole, 14);//Completed percentage
			comp = comp - 1.00;
		}
		if (comp <= 0) {
			stage = 1;
		}
		if (stage == 1 && beat > 0) {
			SetConsoleTextAttribute(dConsole, 10);//Completed percentage
			beat = beat - 1.00;
		}
		if (beat <= 0) {
			stage = 2;
		}
		if (stage == 2) {
			SetConsoleTextAttribute(dConsole, 15);//Unbeaten percentage
		}
		cout << (char)178;//0.2.3-Block Character
	}
	cout << endl;
	system("pause");//0.2.1-This will pause the system to enable the user to look at the list before the menu appears
	cout << endl;//0.2.1-Added for neatness' sake
}
//0.0.3-The method will print the CIB Status of the games in the collection
void ICollection::printCIB(){
	HANDLE dConsole;//Adding a dash of color
	dConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	//Printng the UI, representing a checklist to show the CIB status
	cout << "B M I\nO A N\nX N S\n  U E\n  A R\n  L T\n" << endl;
	for (int i = 0; i < G.size(); i++){
		
		if (G[i]->getBox() == true){//Prints red X if they have the box, Gray if not
			SetConsoleTextAttribute(dConsole, 12);//0.2.3-Light Red was confusing, Light Gray is better
			cout << "X ";
		}
		else{
			SetConsoleTextAttribute(dConsole, 8);
			cout << "X ";
		}
		if (G[i]->getManual() == true){//Prints red X if they have a manual, Gray if not
			SetConsoleTextAttribute(dConsole, 12);//0.2.3-Light Red was confusing
			cout << "X ";
		}
		else{
			SetConsoleTextAttribute(dConsole, 8);
			cout << "X ";
		}
		if (G[i]->getInserts() == true){//Prints red X if they have inserts, Gray if not
			SetConsoleTextAttribute(dConsole, 12);//0.2.3-Light Red was confusing
			cout << "X ";
		}
		else{
			SetConsoleTextAttribute(dConsole, 8);
			cout << "X ";
		}
		SetConsoleTextAttribute(dConsole, 15);//Returns text to white
		cout << "Item#" << i + 1 << ": ";
		if (G[i]->getItype() == "CONSOLE" || G[i]->getItype() == "ACCESSORY"){
			cout << G[i]->getCompany() << " ";
		}
		cout << G[i]->getTitle();
		if (G[i]->getItype() == "GAME" || G[i]->getItype() == "ACCESSORY" ){
			cout << " for " << G[i]->getConsole();
		}
		cout << "(" << G[i]->getYoR() << ")" << endl;
	}
	system("pause");//0.2.1-This will pause the system to enable the user to look at the list before the menu appears
	cout << endl;//0.2.1-Added for neatness' sake
}
//0.0.2-The method will only print information on one game
int ICollection::ViewItem(string T){
	cout << endl;
	//For loop will search through the program for the game
	for (int i = 0; i < G.size(); i++){
		if (G[i]->getTitle() == T){
			//Printing information
			if (G[i]->getItype() == "CONSOLE"){
				cout << G[i]->getCompany() << " ";
			}
			cout << G[i]->getTitle() << '(' << G[i]->getYoR() << ") ";
			if (G[i]->getItype() == "GAME"){
				cout << G[i]->getConsole() << endl;
				cout << "\tPublisher: " << G[i]->getPub() << " Developer: " << G[i]->getDev() << endl;
			}
			if (G[i]->getItype() == "ACCESSORY"){
				cout << "\tMade by " << G[i]->getCompany() << " for " << G[i]->getConsole() << endl;
			}
			//0.0.3-CIB Status stuff
			cout << "\tBox: ";
				if (G[i]->getBox() == true){ 
					cout << "Yes"; 
				}	
				else{ 
					cout << "No "; 
				}
			cout << "\tManual: ";
				if (G[i]->getManual() == true){
					cout << "Yes";
				}
				else{
					cout << "No ";
				}
			cout << "\tInserts: ";
				if (G[i]->getInserts() == true){
				cout << "Yes";
				}
				else{
					cout << "N/A";
				}
				cout << " " << G[i]->getRegion() << endl;//0.2-Showing the region of the game
			cout << "\tPlace Recived: " << G[i]->getLoc() << " Cost:$" << G[i]->getCost() << " Value:$" << G[i]->getValue() << endl;
			cout << "\tUser Rating: " << G[i]->getURat() << "/5" << endl;
			cout << "\tNotes: " << G[i]->getNotes() << '\n' << endl;
			return 0;
		}
	}
	cout << "**Sorry that game was not found in the collection" << endl;
	return 0;
}
//This is the function that will remove a game from the collection
int ICollection::RemoveItem(string T){
	int steps;
	char choice;
	HANDLE dConsole;//0.0.2-Adding a dash of color
	dConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	steps = 0;//Counts the steps so G.erase knows what to do
	for (int i = 0; i < G.size(); i++){
		if (G[i]->getTitle() == T){
			SetConsoleTextAttribute(dConsole, 12);
			cout << "\nAre you sure you want to remove " << G[i]->getTitle() << "?\nEnter Y for yes or N for no." << endl;
			cin >> choice;
			if (choice == 'N' || choice == 'n'){
				SetConsoleTextAttribute(dConsole, 10);
				cout << "**The item has been spared!!**" << endl;
				SetConsoleTextAttribute(dConsole, 15);
				return 0;
			}
			if (choice == 'Y' || choice == 'y'){
				G.erase(G.begin() + steps);
				SetConsoleTextAttribute(dConsole, 15);
				cout << "**Sayonara " << T << "! This item has been removed from the system!!**" << endl << endl;//0.2.1-This has been added to prompt the user that the game has actually been removed
				return 0;
			}
		}
		steps++;
	}
//If the game isn't on the list
cout << "\n**No item with that title exists!!**\n" << endl;
return 0;
}
//0.0.2-This function will handle editing
int ICollection::EditItem(string T){
	int choice, tempI;
	string tempS;
	float tempF;
	//Asking the user what game they wish to edit
	for (int i = 0; i < G.size(); i++){
		if (G[i]->getTitle() == T){
			cout << "What do you wish to update about the item?\n\t1.Title\t\t\t\t";
			if (G[i]->getItype() == "GAME"){
				cout << "2.Console\n\t3.Publisher\t\t\t4.Developer\n\t";
			}
			if (G[i]->getItype() == "CONSOLE" || G[i]->getItype() == "ACCESSORY"){
				cout << "2.Company\n\t";
			}
			if (G[i]->getItype() == "CONSOLE"){
					cout << "3.Total Number of Games\n\t";
			}
			if (G[i]->getItype() == "ACCESSORY"){
				cout << "3.Console\n\t";
			}
			cout << "5.Year of Release\t\t6.Location\n\t7.Cost\t\t\t\t8.Value\n\t9.User Ratng";
			if (G[i]->getItype() == "GAME"){
				cout << "\t\t\t10.Gameplay Status";
			}
			cout << "\n\t11.CIB Status\t\t\t12.Notes\n\t13.Region Code\t\t\t14.Nothing at all" << endl;
			cin >> choice;
			while (cin.fail()){//0.1-Checking for Ints	
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Please enter a number" << endl;
				cin >> choice;
			}
			switch (choice){
			case 1://Edit Title
				cout << "\nWhat's the new title?" << endl;
				cin.ignore();
				getline(cin, tempS);
				G[i]->setTitle(tempS);
				cout << "\n**The title has been changed!**" << endl;
				break;
			case 2://Edit Console||0.0.4-Edit the Company
				if (G[i]->getItype() == "GAME"){
					tempS = ConsoleMenu();
					G[i]->setConsole(tempS);
					cout << "\n**The console has been changed!**" << endl;
				}
				if (G[i]->getItype() == "CONSOLE"){
					cout << "\nWhat's the new company that made this console?";
					cin.ignore();
					getline(cin, tempS);
					G[i]->setCompany(tempS);
					cout << "\n**The company has been changed**" << endl;
				}
				break;
			case 3://Edit Publisher||0.0.4-Edit the total number of games
				if (G[i]->getItype() == "GAME"){
					cout << "\nWhat's the new publisher?" << endl;
					cin.ignore();
					getline(cin, tempS);
					G[i]->setPub(tempS);
					cout << "\n**The publisher has been changed!**" << endl;
				}
				if (G[i]->getItype() == "CONSOLE"){
					cout << "\nWhat is the updated number of games for this console?" << endl;
					cin >> tempI;
					while (cin.fail()){//0.1-Checking for Ints	
						cin.clear();
						cin.ignore(256, '\n');
						cout << "Please enter a number" << endl;
						cin >> tempI;
					}
					G[i]->setGameNum(tempI);
					cout << "\n**The total number of games has been changed!**" << endl;
				}
				if (G[i]->getItype() == "ACCESSORY"){
					tempS = ConsoleMenu();
					G[i]->setConsole(tempS);
					cout << "\n**The console has been changed!**" << endl;
				}
				break;
			case 4://Edit Developer
				if (G[i]->getItype() == "GAME"){
					cout << "\nWhat's the new developer?" << endl;
					cin.ignore();
					getline(cin, tempS);
					G[i]->setDev(tempS);
					cout << "\n**The developer has been changed!**" << endl;
				}
				break;
			case 5://Edit Year of Release
				cout << "\nWhat really is this game's year of release?" << endl;
				cin >> tempI;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> tempI;
				}
				G[i]->setYoR(tempI);
				cout << "\n**The year of release has been changed!**" << endl;
				break;
			case 6://Edit Location
				cout << "\nWhat's the new location?" << endl;
				cin.ignore();
				getline(cin, tempS);
				G[i]->setLoc(tempS);
				cout << "\n**The developer has been changed!**" << endl;
				break;
			case 7://Edit the cost
				cout << "\nWhat is the correct price of this game?" << endl;
				cin >> tempF;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> tempF;
				}
				G[i]->setCost(tempF);
				cout << "\n$$The price is now right!$$" << endl;
				break;
			case 8://Edit the value
				cout << "\nWhat is the correct value?" << endl;
				cin >> tempF;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> tempF;
				}
				G[i]->setValue(tempF);
				cout << "\n**The value has been changed!**" << endl;
				break;
			case 9://Edit the user rating
				cout << "\nWhat would you rate this game?\n\tRate bewteen -5 and 5" << endl;
				cin >> tempI;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> tempI;
				}
				if (tempI >= -5 && tempI <= 6){
					G[i]->setURat(tempI);
				}
				cout << "**User rating has been updated!**" << endl;
				break;
			case 10://0.0.3-Edit the Gameplay Status
				if (G[i]->getItype() == "GAME"){
					cout << "\nHave you beaten or completed(100%'d) this game?\n\t1.Beaten\t2.Completed\t3.It's not possible to beat this game!\t4.It is possible to beat this game!" << endl;//0.2.2-Added a not beatable tag so games that cannot be beaten ever won't count against the beaten total, 0.2.3-Added a way to make games beatable
					cin >> tempI;
					while (cin.fail()){//0.1-Checking for Ints	
						cin.clear();
						cin.ignore(256, '\n');
						cout << "Please enter a number" << endl;
						cin >> tempI;
					}
					if (tempI == 1){
						cout << "\nCongrats on beating the game! :)" << endl;
						G[i]->setPlay("BEATEN");
					}//Game is beat
					if (tempI == 2){
						cout << "\nCongrats on completing the game!! :D" << endl;
						G[i]->setPlay("COMPLETED");
					}//Game is completed
					if (tempI == 3){
						cout << "\nThe change has been made!" << endl;
						G[i]->setPlay("IMPOSSIBLE");
					}//If the game isn't possible to beat
					if (tempI == 4) {
						cout << "\nThe change has been made!" << endl;
						G[i]->setPlay("UNBEATEN");
					}
				}
				break;
			case 11://0.0.3-Edit the CIB Status
				cout << "\nDo you have the box?\n\t1.Yes\t2.No" << endl;
				cin >> choice;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> choice;
				}
				if (choice == 1){
					G[i]->setBox(true);
				}
				else{ G[i]->setBox(false); }
				cout << "\nDo you have the manual?\n\t1.Yes\t2.No" << endl;
				cin >> choice;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> choice;
				}
				if (choice == 1){
					G[i]->setManual(true);
				}
				else{
					G[i]->setManual(false);
				}
				cout << "\nDoes this game come with extra inserts?\n\t1.Yes\t2.No" << endl;
				cin >> choice;
				while (cin.fail()){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> choice;
				}
				if (choice == 1){
					G[i]->setInserts(true);
				}
				else{
					G[i]->setInserts(false);
				}
				cout << "\n**The CIB status has been updated!!**" << endl;
				break;
			case 12://Edit the notes
				cout << "\nWhat's the new note?" << endl;
				cin.ignore();
				getline(cin, tempS);
				G[i]->setDev(tempS);
				cout << "\n**The notes have been changed!**" << endl;
				break;
			case 13://Edit the region
				//0.2-Asking what region this game is made for
				cout << "What region is this game meant for?\n\t1.North America\t2.Japan\t3.Europe\t4.China" << endl;
				cin >> choice;
				while (cin.fail() && choice > 0 && choice < 5){//0.1-Checking for Ints	
					cin.clear();
					cin.ignore(256, '\n');
					cout << "Please enter a number" << endl;
					cin >> choice;
				}
				switch (choice){
				case 1:
					tempS = "NTSC-U/C";
					break;
				case 2:
					tempS = "NTSC-J";
					break;
				case 3:
					tempS = "PAL";
					break;
				case 4:
					tempS = "NTSC-C";
					break;
				default:
					tempS = "Region coding is dumb XP";
				}
				G[i]->setRegion(tempS);
				break;
			default:
				cout << "\n**Guess you changed your mind!" << endl;
			}
			return 0;//0.2.3-Exits function if the game was edited
		}
	}
	cout << "\n**ERROR:Item not found! Please try again!" << endl;//0.2.3-Letting the user know that the search failed
	return 1;
}
//0.0.5-This method will save all the items in the collection
void ICollection::saveALLITEMS(string N){
	string tempTY, tempfile;//0.2.1-Tempfile will take the username and use it to save stuff
	tempfile = N + ".udb";//This creates unique database files for different users
	ofstream outside(tempfile, ios::out | ios::trunc | ios::binary);
	if (!G.empty()){//If vector is not empty
		for (int i = 0; i < G.size(); i++){
			//General stuff
			tempTY = G[i]->getItype();
			outside << G[i]->getItype() << endl;
			outside << G[i]->getTitle() << endl;
			outside << G[i]->getRegion() << endl;//0.2-Saving the region code
			outside << G[i]->getNotes() << endl;
			outside << G[i]->getLoc() << endl;
			outside << G[i]->getCost() << " " << G[i]->getValue() << " " << G[i]->getYoR() << " " << G[i]->getURat() << " " << G[i]->getColStat() << endl;
			outside << G[i]->getBox() << " " << G[i]->getManual() << " " << G[i]->getInserts() << endl;
			//Game stuff
			if (tempTY == "GAME"){
				outside << G[i]->getRating() << endl;
				outside << G[i]->getPub() << endl;
				outside << G[i]->getDev() << endl;
				outside << G[i]->getConsole() << endl;
				outside << G[i]->getPlay() << endl;
			}
			//Console stuff
			if (tempTY == "CONSOLE"){
				outside << G[i]->getGameNum() << endl;
				outside << G[i]->getCompany() << endl;
			}
			//Accessory stuff
			if (tempTY == "ACCESSORY"){
				outside << G[i]->getCompany() << endl;
				outside << G[i]->getConsole() << endl;
			}
		}
		cout << "**All data available saved!!**" << endl << endl;
		outside.close();
	}
}
//0.0.5-This method will load things from a file
void ICollection::loadALLITEMS(string N){
	ifstream outside;
	string TType, TTitle, TCon, TRating, TPub, TDev, TNote, TLoc, Tplay, ans, TComp, TReg, tempFile;
	float TCost, TVal;
	int TYoR, TURat, TColStat, TTNum, Explod;
	bool Tbx, TMa, TIns;//0.0.3-For CIB Status
	Item* temp;
	tempFile = N + ".udb";//User Database File, 
	outside.open(tempFile);
	Explod = 0;
	while (!outside.eof()){//0.2.3-Goes though entire file without needing a keyword to stop
		getline(outside, TType);
		//General stuff
		getline(outside, TTitle);
		getline(outside, TNote);
		getline(outside, TReg);//0.2-Reads in region
		getline(outside, TLoc);//OG Loc
		outside >> TCost; outside >> TVal; outside >> TYoR; outside >> TURat; outside >> TColStat;
		outside.ignore();
		outside >> Tbx; outside >> TMa; outside >> TIns;
		outside.ignore();
		//Game Stuff
		if (TType == "GAME"){
			outside >> TRating;
			outside.ignore();//.ignores are important as they eat '\n''s that otherwise ruin the program and loading would not work!
			getline(outside, TPub);
			getline(outside, TDev);
			getline(outside, TCon);
			outside >> Tplay;
			outside.ignore();
			temp = new Game(TType, TTitle, TReg, TNote, TLoc, TCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TCon, TRating, TPub, TDev, Tplay);
			G.push_back(temp);
		}
		//Console Stuff
		if (TType == "CONSOLE"){
			outside >> TTNum;
			outside.ignore();
			getline(outside, TComp);
			temp = new Console(TType, TTitle, TReg, TNote, TLoc, TCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TTNum, TComp);
			G.push_back(temp);
			}
		//Accessory Stuff
		if (TType == "ACCESSORY"){
			getline(outside, TComp);
			getline(outside, TCon);
			temp = new Accessory(TType, TTitle, TReg, TNote, TLoc, TCost, TVal, TYoR, TURat, TColStat, Tbx, TMa, TIns, TCon, TComp);
			G.push_back(temp);
		}
		//Escape plan
		if (TType == "END"){
			Explod = 1;
		}
	}
	cout << "**All data available loaded!!**" << endl;
	outside.close();
}