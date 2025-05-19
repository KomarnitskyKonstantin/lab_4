#include <iostream>

int main()
{
    int A;
	int B;
	int C;
	int y;
	short x;

	std::cin>>A;
	std::cin>>B;
	std::cin>>C;
	std::cin>>y;

	x = 1;

	if (A % B == 0)
	{
		if (B > C)
		{
			std::cout<<A/B+C<<std::endl;
		}
		else if (B < C)
		{
			std::cout<<A/B-C<<std::endl;
		}
	}
	else if (A % B !=0)
	{
		std::cout<<(A+B)*C<<std::endl;
	}

	switch (y)
	{
	case 1: std::cout << "January"<<std::endl;
		break;
	case 2: std::cout << "February"<<std::endl;
		break;	
	case 3: std::cout << "March"<<std::endl;
		break;
	case 4: std::cout << "April"<<std::endl;
		break;
	case 5: std::cout << "May"<<std::endl;
		break;
	case 6: std::cout << "June"<<std::endl;
		break;
	case 7: std::cout << "July"<<std::endl;
		break;
	case 8: std::cout << "August"<<std::endl;
		break;	
	case 9: std::cout << "September"<<std::endl;
		break;	
	case 10: std::cout << "October"<<std::endl;
		break;	
	case 11: std::cout << "November"<<std::endl;
		break;	
	case 12: std::cout << "December"<<std::endl;
		break;	
	default: std::cout << "DecemberThe number does not match the month"<<std::endl;
		break;
	}

	std::cout << (x > 0 ? "Positive number" : "Negativ number");

	return 0;
}