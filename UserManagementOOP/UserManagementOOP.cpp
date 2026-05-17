

#include <iostream>
using namespace std;

class User 
{
	static int GlobalId;
	int ID = 0;
	string Name;
	string Email;

	User(string Name, string Email) 
	{
		this->Email = Email;
		this->Name = Name;
		this->ID = GenerateId();
	}
	
	int GenerateId() 
	{
		return ++GlobalId;
	}

	int GetId() 
	{
		return ID;
	}

	string GetName() { return Name; }

	string GetEmail() { return Email; };
};
int User::GlobalId = 0;

int main()
{

}

