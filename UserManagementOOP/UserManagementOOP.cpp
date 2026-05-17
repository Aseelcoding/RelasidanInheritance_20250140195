

#include <iostream>
using namespace std;

class User 
{
private:
	static int GlobalId;
	int ID = 0;
	string Name;
	string Email;

public :
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

class Member :User 
{
private:
	bool IsActive;

public :
	Member(string Name,string Email,bool IsActive):
		User(Name,Email)
	{
		this->IsActive = IsActive;
	}
	void toggleActivationMember() 
	{
		if (IsActive) 
		{
			IsActive = false;
		}
		else 
		{
			IsActive = true;
		}
	}

	bool GetStatus() { return IsActive; }
};
int main()
{

}

