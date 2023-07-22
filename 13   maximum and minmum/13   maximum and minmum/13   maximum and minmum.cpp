# include  <iostream > 
using namespace std;
void main()
{
	double x, y, z;
	cout << " Enter The Three Numbers \n";
	cin >> x>> y>> z;
	// minmum
	if (x < y && x < z)
		cout << x;
	else if (y < x &&y <  z)
		cout << y;
	else
		cout << z;
	// maxmum 
	if (x > y && x > z)
		cout << x;
	else if (y > x && y > z)
		cout << y;
	else
		cout << z;
	cout << " \n";
}