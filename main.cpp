#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	fstream plik("wsp.txt", ios::in);
	fstream wynik("wynik.txt", ios::out);
	int x, y;
	string cwiartka;
	
	if(plik.good() && wynik.good())
	{
		while(plik >> x >> y)
		{
			
			if(x > 0 && y > 0)
			{
				cwiartka = "I";
			}
			else if(x < 0 && y > 0)
			{
				cwiartka = "II";
			}
			else if(x < 0 && y < 0)
			{
				cwiartka = "III";
			}
			else
			{
				cwiartka = "IV";
			}
			
			wynik << x << " " << y << " " << cwiartka << " cwiartka" << endl;

		}
		
		plik.close();
		wynik.close();
	}
	
	return 0;
}
