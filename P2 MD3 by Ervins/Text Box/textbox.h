#ifndef TEXTBOX_H
#define TEXTBOX_H


#include "text.h"
#include "box.h"


class TextBox : public Text, public Box{
	public:
		TextBox(string = "Arial", string = "Black", string = "", int = 10, int = 0, int = 0, string = "Black");
		void SetTextBox(string, string, string, int, int, int, string);
		void PrintTextBox() const;
};


#endif
