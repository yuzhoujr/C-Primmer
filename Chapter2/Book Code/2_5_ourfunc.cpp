#include <iostream>

void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an interget: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toooooooes " << n << " times. " << endl;
}