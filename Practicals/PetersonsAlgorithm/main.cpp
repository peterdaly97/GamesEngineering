#include <thread>
#include <iostream>
#include <vector>

using namespace std;

const int PROCESS_AMOUNT = 50;

vector<thread> m_threads;
int m_in[PROCESS_AMOUNT] = { 0 };
int m_last[PROCESS_AMOUNT] = { 0 };



void routine(int i) {
	while (true) {

		for (int j = 0; j < PROCESS_AMOUNT; j++) {
			m_in[i] = j;
			m_last[j] = i;

			for (int k = 0; k < PROCESS_AMOUNT; k++) {

				if (i != k) {
					while (m_in[k] >= m_in[i] && m_last[j] == i);
				}
				

			}
		}
		cout << i << " routine" << endl;
		m_in[i] = -1;
		
	}
}


int main()
{

	for (int i = 0; i < PROCESS_AMOUNT; i++) {
		m_threads.push_back(thread(routine, i));
		
	}
	
	for (int i = 0; i < PROCESS_AMOUNT; ++i) {
		m_threads.at(i).join();
	}
	
	cout << "Routines Completed" << endl;

	system("PAUSE");
}