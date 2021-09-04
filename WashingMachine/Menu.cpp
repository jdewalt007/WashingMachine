#include <iostream>
#include "Common.h"
#include "Menu.h"
#include "Command.h"
using std::cin;
using std::cout;
using std::endl;


Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::run(Command& c)
{
	int cycle = -1;
	bool valid_entry1 = false;
	while (valid_entry1 == false)
	{
		cout << "Select Wash Cycle" << endl;
		cout << "-----------------" << endl;
		cout << endl;
		cout << "PERMANENT PRESS <Enter 1>" << endl;
		cout << "DELICATE        <Enter 2>" << endl;
		cout << "NORMAL          <Enter 3>" << endl;
		cout << endl;
		cout << "Enter selection: ";
		cin >> cycle;


		if (cycle != 1 && cycle != 2 && cycle != 3)
		{
			cout << endl;
			cout << "Invalid Cycle Entered" << endl;
			cout << "<Press any key to continue>" << endl;
			system("pause > nul");
			system("cls");
		}
		else
		{
			valid_entry1 = true;
			c.wash_cycle_selected = static_cast<CYCLE_TYPE>(cycle);
		}
	}
	system("cls");
	int temp = -1;
	bool valid_entry2 = false;
	while (valid_entry2 == false)
	{
		cout << "Select Water temperature" << endl;
		cout << "------------------------" << endl;
		cout << endl;
		cout << "HOT  <Enter 1>" << endl;
		cout << "COLD <Enter 2>" << endl;
		cout << "WARM <Enter 3>" << endl;
		cout << endl;
		cout << "Enter selection: ";
		cin >> temp;
		if (temp != 1 && temp != 2 && temp != 3)
		{
			cout << endl;
			cout << "Invalid Temperature Entered" << endl;
			cout << "<Press any key to continue>" << endl;
			system("pause > nul");
			system("cls");
		}
		else
		{
			valid_entry2 = true;
			c.water_temp_selected = static_cast<WATER_TEMP>(temp);
		}
	}

	system("cls");
	int level = -1;
	bool valid_entry3 = false;
	while (valid_entry3 == false)
	{
		cout << "Select Water level" << endl;
		cout << "------------------" << endl;
		cout << endl;
		cout << "HIGH   <Enter 1>" << endl;
		cout << "MEDIUM <Enter 2>" << endl;
		cout << "LOW    <Enter 3>" << endl;
		cout << endl;
		cout << "Enter selection: ";
		cin >> level;
		if (level != 1 && level != 2 && level != 3)
		{
			cout << endl;
			cout << "Invalid Water Level Entered" << endl;
			cout << "<Press any key to continue>" << endl;
			system("pause > nul");
			system("cls");
		}
		else
		{
			valid_entry3 = true;
			c.water_level_selected= static_cast<WATER_LEVEL>(level);
		}
	}
	system("cls");

}