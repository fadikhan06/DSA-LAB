#include<iostream>
using namespace std;
#include"Header1.h"

int main() {
	PQue<int> pq(5);
	pq.Insert(5, 2);
	pq.Insert(10, 1);
	pq.Insert(20, 3);

	int item;
	cout << "Removing elements in priority order:" << endl;

	pq.Remove(item);
	cout << item << endl;
	pq.Remove(item);
	cout << item << endl;
	pq.Remove(item);
	cout << item << endl;

	return 0;
}


#include<iostream>
#include"Que.h"
#include"PQue.h"
using namespace std;
int main() {

	PQue<int> q1;

	q1.Insert(5, 2);
	q1.Insert(10, 1);
	q1.Insert(20, 5);


	int item;
	cout << "Removing Elements in Priority Order:" << endl;

	q1.Remove(item);
	cout << item << endl;

	q1.Remove(item);
	cout << item << endl;

	q1.Remove(item);
	cout << item << endl;

	return 0;
}


#include<iostream>
#include"Header4.h"
#include"Header2.h"
using namespace std;
int main() {

	PQue<int> q1;

	q1.Insert(5, 2);
	q1.Insert(10, 1);
	q1.Insert(20, 5);


	int item;
	cout << "Removing Elements in Priority Order:" << endl;

	q1.Remove(item);
	cout << item << endl;

	q1.Remove(item);
	cout << item << endl;

	q1.Remove(item);
	cout << item << endl;

	return 0;
}