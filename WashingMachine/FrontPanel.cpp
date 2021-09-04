#include "FrontPanel.h"
#include "Menu.h"


FrontPanel::FrontPanel()
{
}


FrontPanel::~FrontPanel()
{
}


 void FrontPanel::getInputs(Command& c)
{
	m_Menu.run(c);
}
