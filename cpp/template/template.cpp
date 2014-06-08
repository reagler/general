#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int age):itsAge(age)
	{
		HowManyCats++;
	}
	virtual ~Cat(){HowManyCats--;}
	virtual int GetAge(){return itsAge;};
	virtual void SetAge(int age)
	{
		itsAge = age;
	}
	static int GetHowMany()
	{
		return HowManyCats;
	}
private:
	static int HowManyCats;
	int itsAge;
};

int Cat::HowManyCats = 0;  // 虽然是私有的

int newmain()
{
	const int MaxCats = 5;
	int i;
	Cat *CatHouse[MaxCats];
	for(i = 0; i < MaxCats; i++)
	{
		CatHouse[i] = new Cat(i);
	}
	for(i = 0; i < MaxCats; i++)
	{
		cout << "There are";
		cout << Cat::GetHowMany();
		cout << "cats left!" << endl;
		cout << "Deleting the one which is " << CatHouse[i]->GetAge() << "years old\n";
		delete CatHouse[i];
		CatHouse[i] = 0;
	}
	
	return 0;
}