# include< iostream >
using namespace std;
void main()
{
	int num , years,months,days,s;
	cout << " Enter The number \n ";
	cin >> num;
	years = num / 365;
	cout << years << " years" << "\n";
	s = num-(years*365);
	months = s / 30;
	cout << months << " months" << "\n";
	days = s -( 30*months);
	cout << days << "days" << "\n";
}