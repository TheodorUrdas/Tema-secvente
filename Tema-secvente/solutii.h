#pragma once
#include <iostream>
using namespace std;
#include "functii.h"

//Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente din vector care începe și se termină cu aceeași valoare.
// Dacă în vector există mai multe secvențe corecte de lungime maximă se va determina cea mai din stânga.
void pb1() {

	int v[1000], n;
	citire(v, n);
	secventaMax(v, n);
}

//Se dă un şir format din n elemente, numere naturale. Calculaţi suma elementelor din secvenţa determinată de primul şi ultimul element prim.
void pb2() {

	int v[1000], n;
	citire(v, n);
	secventaPrim(v, n);
}

//Să se determine cea mai lungă secvență de elemente pare dintr-un vector.
void pb3() {

	int v[1000], n;
	citire(v, n);
	secvPar(v, n);
}

//Să se determine cea mai lungă secvență de elemente impare dintr-un vector.
void pb4() {

	int v[1000], n;
	citire(v, n);
	secvImpar(v, n);
}

//Să se determine cea mai lungă secvență de elemente ordonate strict crescător dintr-un vector.
void pb5() {

	int v[1000], n;
	citire(v, n);
	secvCresc(v, n);
}

//Se dau n numere naturale, reprezentând elementele unui vector. Determinați lungimea maximă a unei secvențe de elemente divizibile cu 10.
void pb6() {
	int v[1000], n;
	citire(v, n);
	secvMax10(v, n);
}

//Se dau n numere naturale, reprezentând elementele unui vector. Determinați numărul de secvențe de lungime maximă cu elemente divizibile cu 10.
void pb7() {

	int v[1000], n;
	citire(v, n);
	secv10(v, n);
}

//Se dă un vector format din n elemente, numere naturale nenule, şi un număr natural S.Determinaţi, dacă există o secvenţă de elemente din şir cu 
//suma elementelor egală cu S.
void pb8() {

	int v[1000], n, S;
	citire(v, n);
	cout << "S=";
	cin >> S;
	if (secvS(v, n, S) == true) {
		cout << "Da";
	}
	else {
		cout << "Nu";
	}
}

//Se dă un vector x cu n elemente, numere naturale distincte, și un vector y cu m elemente, numere naturale. Să se verifice dacă vectorul y este 
//secvență în vectorul x.
void pb9() {

	int v[1000], n;
	citire(v, n);
	int y[1000], d;
	citireY(y, d);
	cout << aparitieV(v, y, n, d);
}

//Se dă un şir format din n elemente, numere naturale. Calculaţi suma elementelor din secvenţa determinată de primul şi ultimul element prim.
void pb10() {

	int v[1000], n;
	citire(v, n);
	secvPrim(v, n);
}

//Se dă un vector cu n elemente, numere naturale și două numere t și k. Să se determine câte secvențe din șir au lungimea k și sunt formate din valori 
//mai mici sau egale cu t.
void pb11() {

	int v[1000], n, t, k;
	citire(v, n);
	cout << "t=";
	cin >> t;
	cout << "k=";
	cin >> k;
	nrSecvente(v, n, t, k);
}

//Se dă un vector format din n elemente, numere naturale. Calculați suma elementelor din secvența determinată de primul și ultimul element impar.
void pb12() {

	int v[1000], n;
	citire(v, n);
	sumSecImpar(v, n);
}

//Se dă un vector format din n elemente, numere naturale. Calculați suma elementelor din secvența determinată de primul și ultimul element impar.
void pb13() {

	int v[1000], n;
	citire(v, n);
	sumSecPar(v, n);
}

//Se dă un şir format din n elemente, numere naturale. Determinaţi câte secvenţe maximale cu elementele ordonate crescător conţine şirul.
void pb15() {
	int v[1000], n;
	citire(v, n);
	secventaCresc(v, n);
}

//Se dă un şir format din n elemente, numere naturale. Determinaţi câte secvenţe maximale cu elementele ordonate descrescător conţine şirul.
void pb16() {
	int v[1000], n;
	citire(v, n);
	secventaDescresc(v, n);
}

//Se dă un vector x cu n elemente, numere naturale distincte, și un vector y cu m elemente, numere naturale. Să se verifice dacă vectorul y este 
//secvență în vectorul x.
void pb17() {

	int v[1000], n;
	citire(v, n);
	int y[1000], m;
	citireY(y, m);
	cout << aparitieV(v, y, n, m);
}

//Se dă un vector cu n elemente numere naturale, numerotate de la 1 la n, și m perechi de indici (i,j), cu 1≤i<j≤n. Să se determine, pentru pereche (i,j),
// suma elementelor din secvenţa determinată de i şi j.
void pb18() {
	int v[1000], n, i, j, m;
	citire(v, n);
	cout << "m=";
	cin >> m;
	for (int l = 0; l < m; l++) {
		cout << "i=";
		cin >> i;
		cout << "j=";
		cin >> j;
		cout << suma(v, i, j);
	}
}

//Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente egale din vector. Dacă în vector există mai multe 
//secvențe de elemente egale de lungime maximă se va determina cea mai din dreapta.
void pb19() {

	int v[1000], n;
	citire(v, n);
	secvEgal(v, n);
}

//Se dă un şir cu n elemente, numere întregi. Determinaţi secvenţa de elemente cu suma maximă.
void pb20() {

	int v[1000], n;
	citire(v, n);
	secventaMax(v, n);
}