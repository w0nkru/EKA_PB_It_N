class Triangle{
	public:
		Triangle(double, double, double);
		bool Set(double, double, double);
		double Perim();
		double Area();
		bool IsRect();
		
	private:
		double a;
		double b;
		double c;
};
