#include <iostream>
using namespace std;
int main()
{
	float first,second,third,mt,final;
	cout << "=========QUIZZES==================" << endl;
	cout << "Enter first quizz (10) : ";
	cin >> first;
	cout << "Enter second quizz(10) : ";
	cin >> second;
	cout << "Enter third quizz (10) : ";
	cin >> third;
	cout << "=========MID-TERM==================" << endl;
	cout << "Enter mid=term (40) : ";
	cin >> mt;
	cout << "=========FINAL==================" << endl;
	cout << "Enter final (50) : " ;
	cin >> final;
	float qt = (first + second + third) / 3;
	float total_point = qt + mt + final;
	cout << "Quizz Total : "<< qt << endl;
	cout << "Mid term : " << mt << endl;
	cout << "Final : " << final << endl;
	cout << "Total : " << total_point << endl;
	cout << "Your score is " << (total_point >= 50? "PASS" : "NOT PASSED") << endl;
	return(0);
}
