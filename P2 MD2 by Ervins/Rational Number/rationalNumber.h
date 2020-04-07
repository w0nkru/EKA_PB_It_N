using namespace std;


class rationalNumber{
	friend ostream & operator<<(ostream &, const rationalNumber &);
	friend istream & operator>>(istream &, rationalNumber &);
	
	public:
		rationalNumber(int = 1, int = 1);
		int gcd(int, int);
		void lowest();
		const rationalNumber operator+(rationalNumber &);
		const rationalNumber operator-(rationalNumber &);
		const rationalNumber operator*(const rationalNumber &) const;
		const rationalNumber operator/(const rationalNumber &) const;
		rationalNumber & operator=(const rationalNumber &);
		bool operator==(const rationalNumber &) const;
		bool operator!=(const rationalNumber &) const;
		bool operator>(const rationalNumber &) const;
		bool operator<(const rationalNumber &) const;
		bool operator>=(const rationalNumber &) const;
		bool operator<=(const rationalNumber &) const;
		
	private:
		int x, y;
};
