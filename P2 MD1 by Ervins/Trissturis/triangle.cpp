#include <iostream>
#include <cmath>
#include "triangle.h"
using namespace std;


Triangle::Triangle(double aa, double bb, double cc){
	Triangle::Set(aa, bb, cc);
}


bool Triangle::Set(double aa, double bb, double cc){
	if(aa + bb <= cc || aa + cc <= bb || bb + cc <= aa){
        return false;}
    
    else{
    	a = aa;
    	b = bb;
    	c = cc;
        return true;}
}


double Triangle::Perim(){
	return a + b + c;
}


double Triangle::Area(){
	double p = Triangle::Perim() / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}


bool Triangle::IsRect(){
	if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
		return true;}
	
	else{
		return false;}
}
