#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	////���_������ ���_�������[������_�������];
	//const int SIZE = 5;
	//int arr[SIZE];//����������� ������
	//arr[0] = 3;

	//cout << arr[2]<<endl;
	////������ ����������������
	//int zero[5]{};//��� ������ ������ ����� 0
	//int nomber[]{ 3,2,4,98,7 };//�������� �����, ����� 5 �����

	//cout << zero[2]<<endl;
	//cout << nomber[1];

	//const int SIZE = 10;
	//int arr[SIZE];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "������� �����: ";
	//	cin >> arr[i];//������ � ������!!!!!
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
	cout << "������������: "<< max << endl;
	cout << "�����������: "<<min << endl;*/

	const int SIZE = 10;
	int arr[SIZE];
	int ret;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n������� �����: ";
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