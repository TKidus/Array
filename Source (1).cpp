//#pragma once  



#include<iostream>  



#include<string>  



using namespace std;







class Num_manip



{



private:



	int sum, arr[5];



public:



	void setSum(int s = 0) { sum = s; }



	void setArrVal(int pos, int val) { arr[pos] = val; }



	void Mixer(int set[], int size)



	{



		for (int i = 0; i < 5; i++)



		{



			cout << arr[i] << ", " << set[i];



			if (i != 4)



				cout << ", ";



		}



	}



	void Sorter()



	{



		string input[5];



		string temp;



		cout << "Enter 5 numbers:\n";



		for (int i = 0; i < 5; i++)



		{



			cout << "Enter number : ";



			cin >> input[i];



		}



		for (int i = 0; i < 5; i++)



		{



			int temp = 0;



			for (int j = i + 1; j < 5; j++)



			{



				if (input[j] > input[temp])
					temp = j;

				string hold = input[i];



				input[i] = input[temp];



				input[temp] = hold;



			}







		}



		cout << "\nResult: ";



		for (unsigned int i = 0; i < 5; i++)



		{



			cout << input[i];



			if (i == 4)



				cout << " ";



		}







	}



	int Adder()



	{



		for (int i = 0; i < 5; i++)



		{



			sum += arr[i];



		}



		return sum;



	}



};











int main()



{



	Num_manip new_Obj;



	int option, userNum;



	for (int i = 0; i < 5; i++)



	{



		cout << "Enter array values: " << endl;



		cin >> userNum;



		new_Obj.setArrVal(i, userNum);



	}

	system("cls");

	do



	{



		cout << "1.Sum of array values.\n" <<



			"2.Mix a set of numbers.\n" <<



			"3.Generate largest possible value.\n" <<



			"4.Exit.\n" <<







			"Enter your number option : ";



		cin >> option;



		switch (option)



		{



		case 1:



			new_Obj.setSum();



			cout << "\nSum: " << new_Obj.Adder() << endl;



			system("pause"); system("cls");  



			break;



		case 2:



			cout << "\nMixer: " << endl;

			int user_arr[5], value;

			cout << "Enter second list of array values: \n";

			for (int i = 0; i < 5; i++)

			{

				cin >> value;

				user_arr[i] = value;



			}

			new_Obj.Mixer(user_arr, 5);

			cout << endl;

			system("pause"); system("cls");  



			break;



		case 3:



			cout << "\nSorter: " << endl;



			new_Obj.Sorter();



			system("pause"); system("cls");  



			break;



		case 4:



			cout << "Goodbye\n";



			break;



		default:



			cout << "\nError : 404; Please enter a option from above!!!" << endl;
			system("pause");	 system("cls");
			break;



		}



	} while (option != 4);



	//system("pause");  



	return 0;



}



