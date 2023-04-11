#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& n) {

	ifstream f("numere.txt");

	f >> n;
	for (int i = 0; i < n; i++) {

		f >> v[i];
	}
}

void citireY(int y[], int& n) {

	ifstream f("numerey.txt");
	f >> n;
	for (int i = 0; i < n; i++) {

		f >> y[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

int secvMax(int v[], int n, int iInitial, int nr) {

	int ct = 0;
	for (int i = 0; i < n; i++) {

		if (v[i] == nr) {
			ct = i - iInitial+1;
		}
	}
	return ct;
}

void secventaMax(int v[], int n) {

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (secvMax(v, n, i, v[i]) > max) {
			max = secvMax(v, n, i, v[i]);
		}
	}
	cout << max;
}

bool prim(int v) {

	if (v == 0 || v == 1) {
		return false;
	}

	for (int i = 2; i < v; i++) {
		if (v % i == 0) {
			return false;
		}
	}

	return true;
}

int suma(int v[], int imin, int imax) {

	int suma = 0;
	for (int i = imin; i <= imax; i++) {
		suma = suma + v[i];
	}
	return suma;
}

void secventaPrim(int v[], int n) {

	int imin = n;
	int sum = 0;
	for (int i = 0; i < n; i++) {

		if (prim(v[i]) == true) {
			if (i < imin) {
				imin = i;
			}
			sum = suma(v, imin, i);
		}
	}
	cout << sum;
}

void secvPar(int v[], int n) {
	int smax = 1, dmax = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			int j = i;
			while (j + 1 < n && v[j + 1] % 2 == 0) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}
	cout << endl;
	cout << smax << " " << dmax;
}

void secvImpar(int v[], int n) {
	
	int smax = 1;
	int dmax = 0;

	for (int i = 0; i < n; i++) {
		
		if (v[i] % 2 == 1) {
			int j = i;
			while (j + 1 < n && v[j + 1] % 2 == 0) {
				j++;
			}

			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}

			i = j;
		}
	}

	cout << endl;
	cout << smax << " " << dmax;
}

void secvCresc(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] < v[i + 1]) {
			int j = i;
			while (j + 1 < n && v[j + 1] > v[j]) {
				j++;
			}

			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}

	cout << endl;
	cout << smax << " " << dmax;
}

void secv10(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 10 == 0) {
			
			int j = i;
			while (j + 1 < n && v[j] % 10 == 0) {
				j++;
			}

			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
			i = j;
			ct++;
		}
	}
	cout << endl;
	cout << ct;
}

void secvMax10(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 10 == 0) {
			int j = i;
			while (j + 1 < n && v[j] % 10 == 0) {
				j++;
			}

			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}
	cout << endl;
	cout << smax << " " << dmax;
}

bool secvS(int v[], int n, int s) {

	int j = 0;
	for (int i = 0; i < n; i++) {

		while (suma(v, i, j) <= s) {
			if (suma(v, i, j) == s) {
				return true;
			}
			j++;
		}
		j = i;
	}
	return false;
}

bool aparitieV(int v[], int y[], int n, int d) {

	int j = 0;
	for (int i = 0; i < n; i++) {

		if (v[i] == y[0]) {
			int ct = 0;
			while (v[i] == y[ct]) {
				ct++;
				i++;
			}

			if (ct == d) {
				return true;
			}
			ct = 0;
			i--;
		}
	}

	return false;
}

void secvPrim(int v[], int n) {

	int imin = n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (prim(v[i]) == true) {
			if (i < imin) {
				imin = i;
			}
			s = suma(v, imin, i);
		}
	}
	cout << s;
}

void nrSecvente(int v[], int n, int t, int k) {

	int s = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] < t) {
			int ct = 0;
			while (v[i] < t) {
				i++;
				ct++;
			}
			if (ct >= k) {
				s++;
			}
			ct = 0;
			i--;
		}
	}
	cout << s;
}

void sumSecImpar(int v[], int n) {

	int imin = n;
	int imax = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 1 && i < imin) {
			imin = i;
		}
		if (v[i] % 2 == 1) {
			imax = i;
		}
	}

	cout << suma(v, imin, imax);
}

void sumSecPar(int v[], int n) {

	int imin = n;
	int imax = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0 && i < imin) {
			imin = i;
		}

		if (v[i] % 2 == 0) {
			imax = i;
		}
	}
	cout << suma(v, imin, imax);
}

void secventaCresc(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] < v[i + 1]) {
			int j = i;
			while (j + 1 < n && v[j + 1] > v[j]) {
				j++;
			}

			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
			i = j;
			ct++;
		}
	}

	cout << endl;
	cout << ct;
}

void secventaDescresc(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > v[i + 1]) {
			int j = i;
			while (j + 1 < n && v[j + 1] < v[j]) {
				j++;
			}

			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
			i = j;
			ct++;
		}
	}

	cout << endl;
	cout << ct;
}

bool aparitie(int v[], int y[], int n, int m) {

	int j = 0;
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == y[0]) {
			ct = 0;
			while (v[i] == y[ct]) {
				ct++;
				i++;

			}

			if (ct == n) {
				return true;
			}
			i--;
		}
	}
	return false;
}

void secvEgal(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < n; i++) {

		if (v[i] == v[i + 1]) {

			int j = i;
			while (j + 1 < n && v[j] == v[j + 1]) {
				j++;
			}
			if (j - i + 1 > dmax - smax) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}
	cout << endl;
	cout << smax << " " << dmax;
}

