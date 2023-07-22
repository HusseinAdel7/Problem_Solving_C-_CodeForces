#include < iostream > 
using namespace std; 
void main()
{
	int x=0, y=0, z=0, c=0;
	char a = 65, b = 66, w = 67, e = 68;
	cout << "enter four number \n ";
	cin >> x >> y >> z >> c;
	if (x < y&&x < z&&x < c)
		cout << a<<"\n";
	else if (y < x&&y < z&&y < c)
		cout << b << "\n";
	else if (z < x&&z < y&&z < c)
		cout << w << "\n";
	else if (c < x&&c < y&&c < z)
		cout << e << "\n";
	else
		cout << " Equal \n";
}