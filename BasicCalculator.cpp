#include<iostream>
#include<cmath>





	


	
	
	

int main() {
	int op;
	double x;
	double y;
	double ans;
	bool start = true;
	
	
	while (start = true){
		std::cout << "\nSelect option:\n 1 - Addition \n 2 - Subtraction \n 3 - Multiplication \n 4 - Division\n";
		std::cin >> op;
		std::cout << "Enter first number\n";
		std::cin >> x;
		std::cout << "Enter second number\n";
		std::cin >> y;
	
		
			switch (op) {
			case 1:
				ans = x + y;
				std::cout << "The answer is" << ans;
				
				break;
			case 2:
				ans = x - y;
				std::cout << ans;
				break;
			case 3:
				ans = x * y;
				std::cout << ans;
				break;
			case 4:
				ans = x / y;
				std::cout << ans;
				break;
			
				break;
			default:
				std::cout << "Invalid input try again\n";

				break;
			}

		}
	
	return 0;
}



