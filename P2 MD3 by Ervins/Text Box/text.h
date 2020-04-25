#ifndef TEXT_H
#define TEXT_H


#include <string>
using namespace std;


class Text{
	public:
		Text(string = "Arial", string = "Black", string = "", int = 10);
		void SetText(string, string, string, int);
		string GetFont() const;
		string GetColor() const;
		string GetData() const;
		int GetSize() const;
		void PrintText() const;
		
	protected:
		string font, color, data;
		int size;
};


#endif
