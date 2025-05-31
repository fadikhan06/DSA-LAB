#include <iostream>
using namespace std;

/*class num {
public:
	float real;
	float imaginary;

	num(float r = 0, float i = 0) { real = r; imaginary = i; };
	~num() {cout << "delete"; };
	num operator *(num& s)
	{
		num m;
		m.real = real * s.real;
		m.imaginary = imaginary * s.imaginary;
		return m;
	}
	void showdata() {
		cout << real << "+" << imaginary << "i";
	}
};
int main() {
	num a(10,10), b(10,10), c;

	c = a * b;
	c.showdata();
	return 0;
}*/

/*#include <iostream>
using namespace std;
template<class t>
class ali{private:
	t a, b;
public:
	ali(t x, t y) { a = x; b = y; }
	t getmin() {
		t result;
		result = (a < b) ? a : b;

		cout << result;
		return result;
	}
};

int main() {
	ali<int> a(100, 75);
	a.getmin();



}*/
/*#include<iostream>
using namespace std;
template<class T, int N>
class mysequence {
	T max = INT_MIN;
	T min = INT_MAX;

	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
	void getmax() {
		for (int i = 0; i < N; i++)
		{
			if (memblock[i] > max) {
				max = memblock[i];
			}

		}
		cout << max << endl;
	}
	void getmin() {
		for (int i = 0; i < N; i++)
		{
			if (memblock[i] < min) {
				min = memblock[i];
			}
		}
		cout << min << endl;
	}

};
template<class T, int N>
void mysequence<T, N>::setmember(int x, T value)
{
	memblock[x] = value;
}
template<class T, int N>
T mysequence<T, N>::getmember(int x)
{
	return memblock[x];
}
int main() {
	mysequence<int, 6>myints;
	mysequence <double, 5> myfloats;
	myints.setmember(5, 1000);
	myints.setmember(2, 99);

	myfloats.setmember(3, 3.1416);
	myfloats.setmember(4, 3.1666);
	myfloats.getmax();
	myfloats.getmin();
	myints.getmin();
	myints.getmax();


	return 0;
}*/
/*#include <iostream>
#include<fstream>

using namespace std;
int main(void)
{
	ofstream outfile;
	outfile.open("fout.txt");
	ifstream infile("fin.txt");
	char ch;
	int count = 0;
	int words = 1;
	int sentence = 0;
	while (infile.get(ch))
	{

		count++;
		if (ch == '.')
		{
			sentence++;
		}
		if (ch == ' ')
		{
			words++;
		}
	}
	outfile << "\n\n character count=" << count << endl;
	outfile << "\n\n sentence count=" << sentence << endl;
	outfile << "\n\n words count=" << words << endl;
	infile.close();
	outfile.close();
	
}*/

/*class house {
public:

	char owner[20];
	char adress[20];
	int bedroom;
	float price;
	void getdata()
	{
		cout << "enters owner name(upto 20 characters)";
		cin >> owner;
		cout << "enter adress(upto 20 characters):";
		cin >> adress;
		cout << "enter no of bedrooms:";
		cin >> bedroom;
		cout << "enter price:";
		cin >> price;

}
	void showdata()
	{
		cout << "owner     Address     bedrooms     price"<<endl;
		cout << owner<<"           " <<adress<<"        "<<bedroom<<"            "<<price<<"     " <<endl;

	}



};
int main() {
	house available[100];
	char choice;
	int count = 0;

	while (true) {
		if (count >= 100) {
			cout << "Maximum number of houses (100) reached!" << endl;
			break;
		}

		available[count].getdata();
	
		count++;

		cout << "Enter another house? (y/n): ";
		cin >> choice;
		

		if (choice == 'n' || choice == 'N') {
			break; 
		}
	}

	
	cout << "\nList of entered houses:\n";
	for (int i = 0; i < count; i++) {
		available[i].showdata();
	}

		


		
	
}*/

 