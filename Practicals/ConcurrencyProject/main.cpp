#include <thread>
#include <mutex>
#include <iostream>
#include <vector>

using namespace std;

mutex m_lock;
vector<int> m_shared;

void producer() {
	m_lock.lock();
	while (m_shared.size() < 2) {
		m_shared.push_back(1);
		cout << "Producer makes: " << m_shared.size() << endl;
	}
	m_lock.unlock();
}

void consumer() {
	m_lock.lock();
	int takeAmount = 0;
	while (m_shared.size() > 0) {
		takeAmount += m_shared.back();
		cout << "Consumer takes: " << takeAmount << endl;
		m_shared.pop_back();
	}
	m_lock.unlock();
}

int main() {
	while (true) {
		thread t1(producer);
		thread t2(consumer);
		t1.join();
		t2.join();
	}
}