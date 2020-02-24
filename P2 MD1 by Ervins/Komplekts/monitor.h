#include <string>
using namespace std;


class Monitor{
	public:
		Monitor(string, string, double);
		void SetMonitor(string, string, double);
		void PrintMonitor() const;
		string GetManufacturer();
		string GetResolution();
		double GetPrice();
		
	private:
		string Manufacturer;
		string Resolution;
		double Price;
};
