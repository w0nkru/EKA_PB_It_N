#include <string>
using namespace std;


class Complect{
	public:
		Complect(string, string, string, double, string, string, double);
		void SetComplect(string);
		string GetName();
		double GetPrice();
		void PrintComplect();
		
		
	private:
		string Name;
		Computer PC;
		Monitor Screen;
};
