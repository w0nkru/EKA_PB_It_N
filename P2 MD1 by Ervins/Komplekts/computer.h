#include <string>
using namespace std;

class Computer{
	public:
		Computer(string, string, double);
		void SetComputer(string, string, double);
		void PrintComputer() const;
		string GetCPU();
		string GetGPU();
		double GetPrice();
		
		
	private:
		string CPU;
		string GPU;
		double Price;
};
