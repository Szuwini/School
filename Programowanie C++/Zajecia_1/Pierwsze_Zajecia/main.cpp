#include <iostream>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int b_month, b_year, month, year, r_year, r_month;
	std::cout << "Podaj date urodzenia(msc, rok): " << std::endl;
	std::cin >> b_month;
	std::cin >> b_year;
	std::cout << "Podaj date do ktorej chcesz obliczyc swoj wiek(msc, rok): " << std::endl;
	std::cin >> month;
	std::cin >> year;
	if(b_year > year)
	{
		std::cout << "Podales zly rok" << std::endl;
	}
	else if(year - b_year > 100)
	{
		std::cout << "Ludzie nie zyja tak dlugo LUL" << std::endl;
	}
	else
	{
		r_year = year - b_year;
		r_month = (12 + (month - b_month));
		if(b_month > month)
		{
			r_year--;
		}
		printf ("Zyjesz juz %i miesiecy %i lat\n", r_month, r_year);
	}
}
