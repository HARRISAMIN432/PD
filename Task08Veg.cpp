#include<iostream>
using namespace std ;
main() {
	float VegPrice , FruitPrice ;
	int KgOfVegetables , KgOfFruits ;
 	float TotalRupees ;
	cout << "Enter vegetable price per kilogram (in coins): " ;
	cin >> VegPrice ;
	cout << "Enter fruit price per kilogram (in coins): " ;
	cin >> FruitPrice ;
	cout << "Enter total kilograms of vegetables: " ;
	cin >> KgOfVegetables ;
	cout << "Enter total kilograms of fruits: " ;
	cin >> KgOfFruits ;
	TotalRupees = VegPrice*KgOfVegetables/1.94  + FruitPrice*KgOfFruits/1.94 ;
	cout << "Total earnings in Rupees (Rps): " << TotalRupees ;
}