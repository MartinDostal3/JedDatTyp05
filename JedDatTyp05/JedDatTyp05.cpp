// JedDatTyp05.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
	char x;
	cout << "Zadavej znaky zpetne lomitko znamena konec: " << endl;
	
	int mP = 0;
	int vP = 0;
	int cisla = 0;
	int zPAO = 0;
	int oZ = 0;
	
	bool ObSudaCifra = false;
	char sudaCifra;

	cin >> x;
	while (x != '\\')
	{
		cout << "\nZadany znak je: " << x << endl;

		if (x >= 'a' && x <= 'z')
		{
			mP++;
		}
		else if (x >= 'A' && x <= 'Z')
		{
			vP++;
		}
		else if (x >= '0' && x <= '9')
		{
			cisla++;
			if (x % 2 == 0)
			{
				ObSudaCifra = true;
				sudaCifra = x;
			}
		
		}
		else if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')
		{
			zPAO++;
		}
		else
		{
			oZ++;
		}



		cin >> x;
	}
	cout << "\nPocet malych pismen: " << mP << "\nPocet velkych pismen: " << vP << "\nPocet cislic: " << cisla << "\nPocet znaku pro aritmeticke operandy: " << zPAO << "\nPocet ostatnich znaku: " << oZ << endl;
	
	if (ObSudaCifra)
	{
		cout << "Posloupnost obsahuje sudou cifru a ta je: " << sudaCifra << endl << endl;
	}


}


