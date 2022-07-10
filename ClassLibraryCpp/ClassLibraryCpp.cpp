#include "pch.h"

#include "ClassLibraryCpp.h"
#include <iostream>
#include <string>
using namespace ClassLibraryCpp;
using namespace System::Runtime::InteropServices;

using namespace std;


int Class1::Add(int a, int b)
{
	return a + b;
}

void Class1::PrintText(String^ strString)
{
	IntPtr ptrString = IntPtr::Zero;
	std::string strStdString;
	try {
		ptrString = Marshal::StringToHGlobalAnsi(strString);
		strStdString = (char*)ptrString.ToPointer();
		cout << strStdString << endl;
	}
	finally {
		if (ptrString != IntPtr::Zero) {
			Marshal::FreeHGlobal(ptrString);
		}
	}
	
}