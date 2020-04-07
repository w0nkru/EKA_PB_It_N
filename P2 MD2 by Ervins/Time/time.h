using namespace std;


class Time{
	friend ostream & operator<<(ostream &, const Time &);
	friend istream & operator>>(istream &, Time &);
	
	public:
		Time(int = 0, int = 0, int = 0);
		Time & operator=(const Time &);
		Time operator++();					//	++x
		Time operator++(int);				//	x++
		Time operator--();					//	--x
		Time operator--(int);				//	x--
		bool operator>(const Time &) const;
		bool operator<(const Time &) const;
		bool operator>=(const Time &) const;
		bool operator<=(const Time &) const;
		bool operator==(const Time &) const;
		bool operator!=(const Time &) const;
		
		
	private:
		int second, minute, hour;
};
