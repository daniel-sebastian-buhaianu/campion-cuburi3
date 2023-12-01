#include <fstream>
#define NMAX 1000
using namespace std;
int n, nd, nc;
int d[NMAX+1], c[NMAX+1];
void citire();
void afisare();
int main()
{
	citire();
	for (int i = 1; i <= n; i++)
	{
		if (d[i]) nd++;
		if (c[i]) nc++;
	}
	afisare();
	return 0;
}
void afisare()
{
	ofstream g("cuburi3.out");
	if (nd < nc)
		g << "D " << nd;
	else if (nc < nd)
		g << "C " << nc;
	else
		g << "DC " << nd;
	g.close();
}
void citire()
{
	ifstream f("cuburi3.in");
	f >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		f >> x >> y;
		d[x]++, c[y]++;
	}
	f.close();
}
