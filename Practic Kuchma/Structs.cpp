#include <iostream>
#include <string>
#include "Structs.h"

void show_book(book* arr, int n)
{
	for (int i = 0; i < 3; i++)

		if (i == n)
		{
			std::cout << arr[n].Name_book << std::endl;
			std::cout << arr[n].Author << std::endl;
			std::cout << arr[n].year_of_publishing << std::endl;
			std::cout << arr[n].Number_of_pages << std::endl;
			std::cout << arr[n].price << std::endl;
		}
};

  book author_name(book* arr, int n) 
{
for (int i =0; i < 3 ; i++)
	if (i == n) {
		return  arr[n].Author.substr(' ');
	};
};
