#include<iostream>
using namespace std ;
main() {
	int N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12,N13,N14,N15 ;
	int Sum, Multiply, Subtract, SumPlusMultiply;
	int SumPlusMultiply_Subtract ;
	cout << "Number 1: " ;
	cin >> N1 ;
	cout << "Number 2: " ;
	cin >> N2 ;
	cout << "Number 3: " ;
	cin >> N3 ;
	cout << "Number 4: " ;
	cin >> N4 ;
	cout << "Number 5: " ;
	cin >> N5 ;
	cout << "Number 6: " ;
	cin >> N6 ;
	cout << "Number 7: " ;
	cin >> N7 ;
	cout << "Number 8: " ;
	cin >> N8 ;
	cout << "Number 9: " ;
	cin >> N9 ;
	cout << "Number 10: " ;
	cin >> N10 ;
	cout << "Number 11: " ;
	cin >> N11 ;
	cout << "Number 12: " ;
	cin >> N12 ;
	cout << "Number 13: " ;
	cin >> N13 ;
	cout << "Number 14: " ;
	cin >> N14 ;
	cout << "Number 15: " ;
	cin >> N15 ;
	 Sum = N1 + N2 + N3 + N4 + N5 ;
	 Multiply = N6 * N7 * N8 * N9 * N10 ;
	 Subtract = N11 - N12 - N13 - N14 - N15 ;
	 SumPlusMultiply = Sum + Multiply ;
	 SumPlusMultiply_Subtract =  SumPlusMultiply - Subtract ;
	cout << "The final result is: " << SumPlusMultiply_Subtract ;
}