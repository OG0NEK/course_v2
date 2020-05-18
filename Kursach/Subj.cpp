#include "Subj.h"
#include "Utils.h"
Subj::Subj(string title, int mark) {
		this->title = trim(title);
	this->mark = mark;
}
Subj::Subj()
{
	this->mark = 0;
}
