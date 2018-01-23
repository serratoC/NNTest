// test1.cpp : Defines the entry point for the console application.
//

// NN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "Node.h"

using namespace std;



struct node {
	double v[3];
};

double sum(node *n, int level);
int f(double sum);

int main()
{
	////init 8 nodes
	//node n[8];
	//int hln[2];

	////init weights and values for nodes (v[0] is value, v[1] is weight 1, etc)
	//srand(time(NULL));

	//for (int i = 0; i <8; i++) {
	//	for (int j = 0; j < 3; j++)
	//	{
	//		double random = rand() % 100;
	//		random = random / 100;
	//		//cout << random << endl;
	//		n[i].v[j] = random;
	//		cout << n[i].v[j] << endl;
	//	}
	//	cout << endl;
	//}

	//hln[0] = f(sum(n, 1));
	//hln[1] = f(sum(n, 2));

	//cout << hln[0];

	Node n;

	//cout << n.getWeight(1) << endl;

	


	return 0;
}

double sum(node *n, int level) {
	double sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = sum + (n[i].v[0])*(n[i].v[level]);
	}
	return sum;
}

int f(double sum) {
	if (sum > 1)
		return 1;
	else return 0;
}

void create(int col_)
{
	int s[col_];
	if 
	cin << s[]

}