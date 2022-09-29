#include <iostream>
using namespace std;
int main() {
	/*1
	int a;
	cin >> a;
	if (a > 0) {
		a++;
		cout << a;
	}*/

	/*2
	int a;
	cin >> a;
	if (a > 0) {
		a++;
		cout << a;
	}
	else {
		a -= 2;
		cout << a;
	}*/

	/*3
	int a;
	cin >> a;
	if (a > 0) {
		a++;
	}
	if (a < 0) {
		a -= 2;
	}
	if(a == 0) {
		a = 10;
	}
	cout << a;*/

	/*4
	int a, b, c;
	int k = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		k++;
	}
	if (b > 0) {
		k++;
	}
	if (c > 0) {
		k++;
	}
	cout << k;*/

	/*5
	int a, b, c;
	int k = 0;
	int n = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		k++;
	}
	else
	{
		n++;
	}
	if (b > 0) {
		k++;
	}
	else
	{
		n++;
	}
	if (c > 0) {
		k++;
	}
	else
	{
		n++;
	}
	cout << "+ ="<<k<<" - ="<<n;*/

	/*6
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}*/

	/*7
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << 1;
	}
	else {
		cout << 2;
	}*/

	/*8
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << " " << b;
	}
	if (b>a){
		cout << b << " " << a;
	}
	if (a == b) {
		cout << " oni ravni";
	}*/

	/*9
	double a, b, c;
	c = 0;
	cin >> a >> b;
	if (a < b) {
		c = a;
		a = b;
		b = c;
		cout << a << ' ' << b;
	}
	else {
		cout << a << ' ' << b;
	}*/

	/*10
	int a, b;
	cin >> a >> b;
	if (a != b) {
		a = a + b;
		b =  a;
	}
	else {
		a = 0;
		b = 0;
	}
	cout << a << ' ' << b;*/

	/*11
	int a, b;
	cin >> a >> b;
	if (a == b) {
		a = 0;
		b = 0;
	}
	if (a > b) {
		b = a;
	}
	if (a < b) {
		a = b;
	}
	
	cout << a << ' ' << b;*/

	/*12
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a;
	}
	if (b < a && b < c) {
		cout << b;
	}
	if (c < a && c < b) {
		cout << c;
	}*/

	/*13
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b && a > c) || (a > b && a < c)) {
		cout << a;
	}
	if ((b < a && b > c) || (b > a && b < c)) {
		cout << b;
	}
	if ((c < a && c > b) || (c > a&& c < b)) {
		cout << c;
	}*/

	
}