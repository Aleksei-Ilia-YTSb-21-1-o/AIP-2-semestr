#include <iostream>
#include <cmath>
//const float PI = 3.141592653589793238;

//int main(int answer0) {
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
	
	/*std::cout << "\tOption 7\nCompleted tasks: 1 (1);2g(2);5(3)" << std::endl;
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

		}*/
		/*std::cout << "Will they return to the task selection?\n Yes(1) no(0) " << std::endl;
		int answer;
		std::cin >> answer;
	  answer = answer0;*/
		//была идея но я её не реализовал. был большооооой костыль который и не работал. хотя, сейчас прога работая на костыле. но работает!!!))) 

	/* } while (answer0 == 1);
	
	if (answer0 == 0)
		exit(1);
	
	return(0);
} */

// G - градус; R - радиан;  m - минута;     h - час; _ - перевод; 
const float  Gm_Gh = 60;
const float Gh_Gm = 0.0166666667;
const float Gm_Rm = 0.0174532925;
const float Rm_Gm = 57.2957795;
const float Gh_Rm = 0.000290888209;
const float Rm_Gh = 3437.74677;

int main() { // задание 5
	int Input_Conversion, Output_Conversion;
	float Meaning, Onsver{};
	std::cout <<"Degrees per hour(1); degrees per minute (2); Radians per minute (3):First enter the original Vedic value (its number) after the value of the card and after its transfer number. if an error is displayed, it means that you have entered the wrong number of values." << std::endl;
	std::cin >> Input_Conversion >> Meaning >> Output_Conversion;

	if (Input_Conversion == Output_Conversion)
	Onsver = Meaning;
	
		
	if ((Input_Conversion == 1) && (Output_Conversion == 2))
		Onsver = Meaning * Gh_Gm;
	

	if ((Input_Conversion == 1) && (Output_Conversion == 3))
		Onsver = Meaning * Gh_Rm;
			
	if ((Input_Conversion == 2) && (Output_Conversion == 1))
		Onsver = Meaning * Gm_Gh;

	if ((Input_Conversion == 2) && (Output_Conversion == 3))
		Onsver = Meaning * Gm_Rm;
		
	if ((Input_Conversion == 3) && (Output_Conversion == 1))
		Onsver = Meaning * Rm_Gh;

	if ((Input_Conversion == 3) && (Output_Conversion == 2))
		Onsver = Meaning * Rm_Gm;

	if ((Input_Conversion > 3) || (Output_Conversion > 3) || (Input_Conversion < 1) || (Output_Conversion < 1))
		std::cout << "Error" <<  std::endl;

	std::cout << Onsver << std::endl;

}

int main()
{

	float a = 2, b = 3, j;			//задание 4
	j = (a + 4 * b) * (a - 3 * b) + (a * a);
	std::cout << j << std::endl;
}

int main() // задание 6
{	
	float  alfa, betta, gamma;
	std::cin >> alfa, betta, gamma;
	if ((alfa > betta) && (alfa > gamma))
		std::cout << alfa << std::endl;
	else if ((betta > gamma) && (betta > gamma))
		std::cout << betta << std::endl;
	else if ((gamma > alfa) && (gamma > betta))
		std::cout << betta << std::endl;
	else if ((betta > gamma) && (betta > gamma))
		std::cout << gamma << std::endl;
	else if ((alfa > gamma) && (betta = alfa))
		std::cout << betta << " " << alfa << std::endl;
	else if ((betta > alfa) && (betta = gamma))
		std::cout << betta << " " << gamma << std::endl;
	else if ((alfa > betta) && (betta = alfa))
		std::cout << betta << " " << alfa << std::endl;
	else std::cout << "they are equal" << std::endl;

}
