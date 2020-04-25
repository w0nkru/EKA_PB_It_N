#ifndef BOX_H
#define BOX_H


#include <string>
using namespace std;


class Box{
	public:
		Box(int = 0, int = 0, string = "Black");
		void SetBox(int, int, string);
		int GetWidth() const;
		int GetHeight() const;
		string GetBorderColor() const;
		void PrintBox() const;
		
	protected:
		int width, height;
		string border_color;
};


#endif
