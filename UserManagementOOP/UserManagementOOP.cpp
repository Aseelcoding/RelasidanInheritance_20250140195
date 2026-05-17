

#include <iostream>
#include <vector>
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

class Member :public User 
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

class Admin :public User 
{

public :
	Admin(string Name, string Eamil)
		: User(Name, Eamil) {

	}

	void ShowAllMembers(vector<Member > Members)
	{
		for (int i = 0; i < Members.size(); i++) {
			cout << "Member Number : " << i + 1 << endl;
			cout << "------------------------" << endl;
			cout << "ID      : " << Members[i].GetId() << endl;
			cout << "Name    : " << Members[i].GetName() << endl;
			cout << "Email   : " << Members[i].GetEmail() << endl;
			if (Members[i].GetStatus())
			{
				cout << "Status  : Active " << endl;

			}
			else { cout << "Status  : Inactive " << endl; }
			cout << "------------------------" << endl;
		}
	}
	void toggleActivationMember(Member& member) 
	{
		member.toggleActivationMember();
	}
};
int main()
{

	Member m1("Aseel", "aseel@gmail.com",true);
	Member m2("Ali", "ali@gmail.com", false);


	Admin admin("Admin", "admin@gmail.com");

	m2.toggleActivationMember();

	admin.ShowAllMembers(vector<Member>{m1, m2});
}

