#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	////тип_данных им€_массива[размер_массива];
	//const int SIZE = 5;
	//int arr[SIZE];//статический массив
	//arr[0] = 3;

	//cout << arr[2]<<endl;
	////ручной целенаправленный
	//int zero[5]{};//все пустые €чейки равны 0
	//int nomber[]{ 3,2,4,98,7 };//значение €чеек, будет 5 €чеек

	//cout << zero[2]<<endl;
	//cout << nomber[1];

	//const int SIZE = 10;
	//int arr[SIZE];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "¬ведите число: ";
	//	cin >> arr[i];//«јѕ»—№ ¬ ћј——»¬!!!!!
	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << arr[i]<<"|";

	//
	//}

	/*const int SIZE = 5;
	int arr[SIZE]{ -23,-11,9,-18,25 };
	int max=arr[0];
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "ћаксимальное: "<< max << endl;
	cout << "ћинимальное: "<<min << endl;*/

	const int SIZE = 10;
	int arr[SIZE];
	int ret;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n¬ведите число: ";
		cin >> arr[i];
		cout << endl;
		



	}
	for (int j = 0; j < SIZE; j++){
		ret = arr[j];		
			
		if (ret == arr[j + j]) {
			cout << ret<<endl;
		}
	}


	return 0;



}