#include<iostream>
#include<vector>
#include<iterator>// библ для работы с итерраторами


class MyClass
{
private:
	int _data;
public:
	int data;


public:
	int Summ(int data) {
		return 0;
	}

};

class Tovar
{
private:
	std::string _name;
	float _price;

public:
	Tovar(std::string name, float price)
	{
		_name = name;
		_price = price;
	}

	void Print()
	{
		std::cout << " Name: " << _name << '\n';
		std::cout << " Price: " << _price << '\n';
	}
	void SetName(std::string name)
	{
		_name = name;
	}
	void SetPrice(float price)
	{
		_price = price;
	}
	std::string GetName()
	{
		return _name;
	}
	float GetPrice()
	{
		return _price;
	}
};

class Employer
{
public:
	Employer(std::string name, float id) {
		_name = name;
		_id = id;
	}
	std::string GetName()
	{
		return _name;
	}
	float Getid()
	{
		return _id;
	}
private:
	
	std::string _name;
	float _id;
};



int main() {
	//Tovar tovar1("Morkov", 10.8f);
	//Tovar tovar2("Kapusta", 20.8f);
	//Tovar tovar3("Kartochka", 110.8f);
	//Tovar* tovar4 = new Tovar("Bread", 23.4f);
	//


	///*tovar1.SetName("Morkov");
	//tovar1.SetPrice(10.8f);
	//std::cout << tovar1.GetName() << '\n';
	//std::cout << tovar1.GetPrice() << '\n';*/
	//
	//tovar1.Print();
	//tovar2.Print();
	//tovar3.Print();
	//tovar4->Print();
	///*Employer emp1("Petr", 1233);
	//emp1.Getid();*/
	//delete(tovar4);

	//_______________________________________________
	// Vector


	std::vector<int>vec = { 1,10,20 };
	//vec.push_back(5);// добавляет 5 в конец вектора
	//vec.size();// размер вектора
	//vec.pop_back();// удаляет последний элемент вектора
	//vec.begin();
	//vec.end();
	//vec.erase(vec.begin()+2);// удаляет элемент в векторе
	//vec.at(0)=10;// обращение по индексу и замена

	//for (int i = 0; i < vec.size(); ++i)
	//	std::cout << vec.at(i) << ' ';

	std::vector<int>::iterator it; //it имя итерратора
	it = vec.begin();

	vec.erase(it);

	/*std::cout << *it;*/
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << ' ';









	return 0;
};