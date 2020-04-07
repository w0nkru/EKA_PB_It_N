#include <iostream>
#include "rationalNumber.h"
using namespace std;


rationalNumber::rationalNumber(int xx, int yy){
	x = xx;
	
	if(yy == 0){
		cout << "Saucejs nedrikst but '0'! Saucejs aizstats ar '1'" << endl;
		y = 1;}
	
	else{
		y = yy;}
	
	lowest();
}


// Kods nemts no = "https://www.geeksforgeeks.org/fraction/"
int rationalNumber::gcd(int xx, int yy){
    if(xx == 0)
        return yy;
    
    return gcd(yy % xx, xx);
}
  
// Kods nemts no = "https://www.geeksforgeeks.org/fraction/"
void rationalNumber::lowest(){
	int common_factor = gcd(x, y);
	
	x = x / common_factor;
	y = y / common_factor;
}


ostream & operator<<(ostream &out, const rationalNumber &obj){
	out << obj.x << "/" << obj.y;
	
	return out;
}


istream & operator>>(istream &in, rationalNumber &obj){
	int x, y;
	bool zero;
	
	do{
		cout << "Ievadiet skaititaju: "; in >> obj.x;
		cout << "Ievadiet sauceju: "; in >> obj.y;
		
		if(obj.y == 0){
			zero = true;
			cout << "Saucejs nedrikst but '0'!" << endl;
			system("pause");
			system("cls");}
		
		else{
			x = obj.x;
			y = obj.y;
			zero = false;}
	
	}
	while(zero == true);
	
	obj.lowest();
	
	return in;
}


// Kods nemts no = "https://www.geeksforgeeks.org/fraction/"
const rationalNumber rationalNumber::operator+(rationalNumber &right){
	rationalNumber copy = *this;
	
	copy.y = gcd(y, right.y);
	copy.y = (y * right.y) / copy.y;
	copy.x = (x) * (copy.y / y) + (right.x) * (copy.y / right.y);
	
	copy.lowest();
	
	return copy;
}


// Kods nemts no = "https://www.geeksforgeeks.org/fraction/"
const rationalNumber rationalNumber::operator-(rationalNumber &right){
	rationalNumber copy = *this;
	
	copy.y = gcd(y, right.y);
	copy.y = (y * right.y) / copy.y;
	copy.x = (x) * (copy.y / y) - (right.x) * (copy.y / right.y);
	
	copy.lowest();
	
	return copy;
}


const rationalNumber rationalNumber::operator*(const rationalNumber &right) const{
	rationalNumber copy = *this;
	
	copy.x *= right.x;
	copy.y *= right.y;
	
	copy.lowest();
	
	return copy;
}


const rationalNumber rationalNumber::operator/(const rationalNumber &right) const{
	rationalNumber copy = *this;
	
	copy.x *= right.y;
	copy.y *= right.x;
	
	copy.lowest();
	
	return copy;
}


rationalNumber & rationalNumber::operator=(const rationalNumber &right){
	x = right.x;
	y = right.y;
	
	return *this;
}


bool rationalNumber::operator==(const rationalNumber &right) const{
	if(x == right.x && y == right.y){
		return true;}
	
	else{
		return false;}
}


bool rationalNumber::operator!=(const rationalNumber &right) const{
	return !(*this == right);
}


bool rationalNumber::operator>(const rationalNumber &right) const{
	if((float)x / (float)y > (float)right.x / (float)right.y){
		return true;}
		
	else{
		return false;}
}


bool rationalNumber::operator<(const rationalNumber &right) const{
	if((float)x / (float)y < (float)right.x / (float)right.y){
		return true;}
		
	else{
		return false;}
}


bool rationalNumber::operator>=(const rationalNumber &right) const{
	if(*this == right){
		return true;}
	
	else if(*this > right){
		return true;}
	
	else{
		return false;}
}


bool rationalNumber::operator<=(const rationalNumber &right) const{
	if(*this == right){
		return true;}
	
	else if(*this < right){
		return true;}
	
	else{
		return false;}
}
