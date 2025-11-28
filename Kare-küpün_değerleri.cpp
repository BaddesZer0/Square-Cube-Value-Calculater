#include <iostream>
using namespace std;
int main()
{
	int kenar;

	cout << "Degerlerinin hesaplanmasi icin karenizin bir kenarinin uzunlugunu giriniz:";
	cin >> kenar;

	cout << "Kare ve küp icin degerler asagidaki gibidir:" << endl;

	cout << "Karenin cevresi:" << kenar * 4 << endl;

	cout << "Karenin alani:" << kenar * kenar << endl;

	cout << "Kupun dis yuzey alani:" << 6 * kenar * kenar << endl;

	cout << "Kupun hacmi:" << kenar * kenar * kenar << endl;

	cout << "Kupun cevresi:" << 12 * kenar << endl;
	
	return 0;
}