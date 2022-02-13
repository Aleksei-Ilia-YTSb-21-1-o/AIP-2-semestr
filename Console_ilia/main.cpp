#include <iostream>
#include <cmath>
const float PI = 3.141592653589793238;

int main(int answer0) {
	/*std::cout << "Alexei " << 17 << std::endl
	<< "Kosta " <<21<< std::endl
	<<"Igor "  <<19<< std::endl;
	std::cout << "Ghislo " << 31 << "+" << 1 << "=" << 31 + 1<<std::endl;

	int num, num0;
	std::cin >> num>>num0;
	std::cout << num<<"+"<< num0 << "=" << num + num0;
	float a, b;
	std::cin >> a >> b;
	std::cout << a * b;
	
	float i, c;
	std::cin >> i >> c;
	std::cout << sqrt(i*i + c*c);
	
	float v, b, n;
	std::cin >> v >> b;
	n= sqrt(v * v + b * b);
	std::cout << n;
	std::cout << "1\t1\n1" <<"\n1";
	
	std::cout << "neame\tday\tmesaz\n" << "kosta\t12\t02\n" << "igor\t3\t03\n" << "vodim\t30\t02\n";
	std::cout << "neame\tday\tmesaz\nkosta\t12\t02\nigor\t3\t03\nvodim\t30\t02\n";
	return 0;
	*/
	
	std::cout << "\tOption 7\nCompleted tasks: 1 (1);2g(2);5(3)"<< std::endl;
    do
    {
		
		std::cout << "Enter the task number:" << std::endl;
		float num;
		std::cin >> num;
		if (num == 1)
		{
			std::cout << "    *\n   * *\n  *   *\n * * * *\n*       *" << std::endl;

		}


		else if (num == 2)
		{
			std::cout << "The formula of the total area of the cone)))\nEnter the radius of the cone base:"<<std::endl;
			float radius_base_cone;
			std::cin >> radius_base_cone;
			std::cout << "Enter the height of the cone" << std::endl;
			float height_cone,answer_cone;
			std::cin >> height_cone;

			answer_cone =
				(radius_base_cone * height_cone * PI + PI * (radius_base_cone * radius_base_cone)) +
				(PI * radius_base_cone * (radius_base_cone + height_cone));
			std::cout << "Answer: "<< answer_cone << std::endl;
		}

		else if (num ==3)
		{
			std::cout << "enter 3 numbers" << std::endl;
			float one, two, three, answer_sum;
			std::cin >> one>> two>> three;
			one *= 2;
			two -= 3;
			three *= three;
			answer_sum = one + two + three;
			std::cout << "conversion\n" << one << "\t" << two << "\t" << three << "\t" << "sum of converted numbers: " << answer_sum << std::endl;

		}
		/*std::cout << "Will they return to the task selection?\n Yes(1) no(0) " << std::endl;
		int answer;
		std::cin >> answer;
	  answer = answer0;*/
		//была идея но я её не реализовал. был большооооой костыль который и не работал. хотя, сейчас прога работая на костыле. но работает!!!))) 

	} while (answer0 == 1);
	
	if (answer0 == 0)
		exit(1);
	
	return(0);
} 