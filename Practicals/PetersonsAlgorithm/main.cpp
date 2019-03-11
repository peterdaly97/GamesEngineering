#include <thread>
#include <iostream>

using namespace std;

bool flags[2] = { 
	false, 
	false 
};
int routine = 1;


void routine1() {
	while (true) {


		flags[0] = true;
		routine = 1;

		// Waits for flag to be updated
		while (flags[1] && routine == 1) { }

		
		cout << "1rst routine" << endl;
		flags[0] = false;

	}
}

void routine2() {
	while (true) {
		flags[1] = true;
		routine = 0;

		// Waits for flag to be updated
		while (flags[0] && routine == 0) { }
		
		
		cout << "2nd routine" << endl;
		flags[1] = false;
	}
}



int main()
{
	thread thread1(routine1);
	thread thread2(routine2);
	
	thread1.join();
	thread2.join();
	
	cout << "Routines Completed" << endl;

	system("PAUSE");
}