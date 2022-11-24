#pragma once

#include <iostream>
#include <string>

struct book
{
	std::string	Name_book;
	std::string Author;
	int year_of_publishing = 0;
	int Number_of_pages = 0;
	int price = 0;
};

void show_book(book* arr, int n);
book author_name(book* arr, int n);