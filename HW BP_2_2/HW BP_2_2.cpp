// HW BP_2_2.cpp : Задача 2. Счета

#include <iostream>
#include <windows.h>


struct accountBank
{
	int accountNum;
	
	std::string Name;

	float balansCard;
};

void newBalans(accountBank* nB) {

	struct accountBank balansCard;

	nB->balansCard;

	std::cout << "Введите новый баланс: ";

	std::cin >> nB->balansCard;
}

int main(int argc, char** argv)
{
	//setlocale(LC_ALL, "Russian"); //при выводе русского имени на консоль (стр.64) - выводит только символы

	setlocale(LC_ALL, ".1251"); SetConsoleCP(1251); SetConsoleOutputCP(1251); //для ввода/вывода русскоязычных строк в/на консоль

	accountBank accBank;

	std::cout << "Введите номер счёта: ";

	std::cin >> accBank.accountNum; 
	
	std::cout << std::endl;

	std::cout << "Введите имя владельца: ";

	std::cin >> accBank.Name; //вводим имя на русском языке...к строке 64

	std::cout << std::endl;

	std::cout << "Введите баланс: ";

	std::cin >> accBank.balansCard;

	std::cout << std::endl;

	struct accountBank balansCard;
	
	struct accountBank* pNB = &balansCard;

	newBalans(pNB);

	std::cout << std::endl;

	std::cout << "Ваш счет: ";

	std::cout << accBank.Name << ", " << accBank.accountNum << ", " << pNB->balansCard; //accBank.Name выводит только символы (к строке 32)
	
	return 0;

}
