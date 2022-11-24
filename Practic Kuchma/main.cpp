#include <iostream>
#include "Structs.h"
#include <string>

int main ()
{
	setlocale(LC_ALL,"Russian");

	book* arr = new book[3]{
	{"Name_book-1","Author-1 KAne", 1700, 300, 1000},
	{"Name_book-2","Author-2 TOlne", 1800, 400, 2000},
	{"Name_book-3","Author-3 Vorne", 1900, 500, 3000} };
	
	show_book(arr, 1);
	std :: cout << author_name(arr, 1).Author << std::endl;
	return 0;
}