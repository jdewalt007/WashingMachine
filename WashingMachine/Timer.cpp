#include "Timer.h"
#include <string>



Timer::Timer(int h, int m, int s, std::string message)

{

	cout << message;
	cout << "hours : " << h << "mins : " << m << " secs : " << s << endl;
	for (int hour = h; hour >= 0; hour--)
	{
		for (int min = m; min >= 0; min--)
		{
			if (min == 0 && h > 0)
				m = 59;
			for (int sec = s; sec >= 0; sec--)
			{
				if (sec == 0)
					s = 59;
				Sleep(1000);
				system("cls");
				cout << message << endl;
				cout << hour << " :hours " << min << " :mins " << sec << " :secs" << endl;
			}
		}
	}

	Sleep(1000);
}


Timer::~Timer()
{
}
