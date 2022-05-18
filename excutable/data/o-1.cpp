//**//An Actual loader
#include <iostream>
#include <Windows.h>
using namespace std;
int timer=0, ertefa, qaedeh,javab,k,back;
void setup() {
	system("Color 1C");
	system("cls");
	if (k>0)
	{
		ertefa = 0;
			qaedeh = 0;
			javab = 0;
			timer = 0;
	}
}
void calculate() {
	cout << "Enter Height: \n";
	cin >> ertefa;
	system("cls");//system("clear");
	cout << "Enter Primitive: \n";
	cin >> qaedeh;
	system("cls");
	javab = qaedeh * ertefa / 2;

}
void timerloader() {
	if (javab>100) {
		timer = javab * 10;
		timer = timer / 1000;
		for (int loader=0; loader <= timer+loader;loader++) {
			cout << "Plese Wait "<<timer<<" Seconds! \n";
			Sleep(1000);//sleep(1000);
			timer--;
			system("cls");
		}
		cout <<"Answer: "<<javab;
		cout << "\nANY KEY To Go Back\n";
		cin >> back;
	}
	else {
		cout << "Answer: "<<javab;
		cout << "\nANY KEY To Go Back\n";
		cin >> back;
	}

}
int main() {
	for (k = 10; k <= k; k++) {

		setup();
		calculate();
		timerloader();
		k++;
	}
}