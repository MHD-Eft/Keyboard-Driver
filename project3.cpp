// KeyBoard driver for Windows


#include <windows.h>
#include<cstdio>





HHOOK keyboardHook;

LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) 
{
	
	KBDLLHOOKSTRUCT* pKeyboard = (KBDLLHOOKSTRUCT*)lParam;
	if (nCode == HC_ACTION && wParam == WM_KEYDOWN) 
	{
		//printf("%d", pKeyboard->scanCode );
		if (pKeyboard->scanCode == 1)//ESC
		{
			printf("ESC \n");
			
			
			printf("ESC is pressed\n");
		}
		else if (pKeyboard->scanCode == 12)//-
		{
			printf("- \n");

			printf("- is pressed\n");
		}
		else if (pKeyboard->scanCode == 13)//=
		{
			printf("= \n");

			printf("= is pressed\n");
		}
		else if (pKeyboard->scanCode == 14)//Backspace
		{
			printf("Backspace \n");

			printf("Backspace is pressed\n");
		}
		else if (pKeyboard->scanCode == 15)//Tab
		{
			printf("Tab \n");

			printf("Tab is pressed\n");
		}
		else if (pKeyboard->scanCode == 26)//[
		{
			printf("[ \n");

			printf("[ is pressed\n");
		}
		else if (pKeyboard->scanCode == 27)//]
		{
			printf("] \n");

			printf("] is pressed\n");
		}
		else if (pKeyboard->scanCode == 28)//Enter
		{
			printf("Enter \n");

			printf("Enter is pressed\n");
		}
		else if (pKeyboard->scanCode == 29)//Ctrl
		{
			printf("Ctrl \n");

			printf("Ctrl is pressed\n");
		}
		else if (pKeyboard->scanCode == 39)//;
		{
			printf("; \n");

			printf("; is pressed\n");
		}
		else if (pKeyboard->scanCode == 40)//'
		{
			printf("' \n");

			printf("' is pressed\n");
		}
		else if (pKeyboard->scanCode == 41)//`
		{
			printf("` \n");

			printf("` is pressed\n");
		}


		else if (pKeyboard->scanCode == 42)//LShift
		{
			printf("LShift \n");

			printf("LShift is pressed\n");
		}

		else if (pKeyboard->scanCode == 42)//LShift
		{
			printf("LShift \n");

			printf("LShift is pressed\n");
		}
		else if (pKeyboard->scanCode == 43)// 
		{
			printf("\\ \n");

			printf("\\ is pressed\n");
		}

		

		else if (pKeyboard->scanCode == 51)//,
		{
			printf(", \n");

			printf(", is pressed\n");
		}
		else if (pKeyboard->scanCode == 52)//.
		{
			printf(". \n");

			printf(". is pressed\n");
		}
		else if (pKeyboard->scanCode == 53)// /
		{
			printf("/ \n");

			printf("/ is pressed\n");
		}
		/////////////////////////////////////////////

		else if (pKeyboard->scanCode == 54)//Rshift
		{
			printf("RShift \n");

			printf("RShift is pressed\n");
		}
		else if (pKeyboard->scanCode == 55)//PrtSc
		{
			printf("PrtSc \n");

			printf("PrtSc is pressed\n");
		}
		else if (pKeyboard->scanCode == 56)//R Alt
		{
			printf("R Alt \n");

			printf("R Alt is pressed\n");
		}
		else if (pKeyboard->scanCode == 57)//Space
		{
			printf("Space \n");

			printf("Space is pressed\n");
			}
		else if (pKeyboard->scanCode == 58)//Caps
		{
			printf("Caps \n");

			printf("Caps is pressed\n");
		}
		else if (pKeyboard->scanCode == 59)//F1
		{
			printf("F1 \n");

			printf("F1 is pressed\n");
			}
		//////////////////////
		else if (pKeyboard->scanCode == 60)//F2
		{
			printf("F2 \n");

			printf("F2 is pressed\n");
			}
		else if (pKeyboard->scanCode == 61)//F3
		{
			printf("F3 \n");

			printf("F3 is pressed\n");
			}
		else if (pKeyboard->scanCode == 62)//F4
		{
			printf("F4 \n");

			printf("F4 is pressed\n");
			}
		else if (pKeyboard->scanCode == 63)//F5
		{
			printf("F5 \n");

			printf("F5 is pressed\n");
			}
	//////////////////////////
		else if (pKeyboard->scanCode == 64)//F6
		{
			printf("F6 \n");

			printf("F6 is pressed\n");
			}
		else if (pKeyboard->scanCode == 65)//F7
		{
			printf("F7 \n");

			printf("F7 is pressed\n");
			}
		else if (pKeyboard->scanCode == 66)//F8
		{
			printf("F8 \n");

			printf("F8 is pressed\n");
			}
		else if (pKeyboard->scanCode == 67)//F9
		{
			printf("F9 \n");

			printf("F9 is pressed\n");
			}
		else if (pKeyboard->scanCode == 68)//F10
		{
			printf("F10 \n");

			printf("F10 is pressed\n");
			}
		else if (pKeyboard->scanCode == 87)//F11
		{
			printf("F11 \n");

			printf("F11 is pressed\n");
			}
		else if (pKeyboard->scanCode == 88)//F12
		{
			printf("F12 \n");

			printf("F12 is pressed\n");
			}
		/////////////
		else if (pKeyboard->scanCode == 69)//Num
		{
			printf("Num \n");

			printf("Num is pressed\n");
			}
		else if (pKeyboard->scanCode == 70)//Scroll
		{
			printf("Scroll \n");

			printf("Scroll is pressed\n");
			}
		else if (pKeyboard->scanCode == 71)//Home
		{
			printf("Home \n");

			printf("Home is pressed\n");
			}
		else if (pKeyboard->scanCode == 72)//Up
		{
			printf("Up \n");

			printf("Up is pressed\n");
			}
		else if (pKeyboard->scanCode == 73)//PgUp
		{
			printf("PgUp \n");

			printf("PgUp is pressed\n");
			}
		else if (pKeyboard->scanCode == 74)//-
		{
			printf("- \n");

			printf("- is pressed\n");
			}
		else if (pKeyboard->scanCode == 75)//Left 
		{
			printf("Left  \n");

			printf("Left  is pressed\n");
			}
		else if (pKeyboard->scanCode == 76)//Center  
		{
			printf("Center   \n");

			printf("Center   is pressed\n");
			}
		else if (pKeyboard->scanCode == 77)//Right  
		{
			printf("Right   \n");

			printf("Right   is pressed\n");
			}
		else if (pKeyboard->scanCode == 78)//+ 
		{
			printf("+  \n");

			printf("+  is pressed\n");
			}
		else if (pKeyboard->scanCode == 79)//End  
		{
			printf("End   \n");

			printf("End   is pressed\n");
			}
		///////////////
		else if (pKeyboard->scanCode == 80)//Down   
		{
			printf("Down    \n");

			printf("Down    is pressed\n");
			}
		else if (pKeyboard->scanCode == 81)//PgDn  
		{
			printf("PgDn   \n");

			printf("PgDn   is pressed\n");
			}
		else if (pKeyboard->scanCode == 82)//Insert
		{
			printf("Insert  \n");

			printf("Insert  is pressed\n");
			}
		else if (pKeyboard->scanCode == 83)//Del  
		{
			printf("Del   \n");

			printf("Del   is pressed\n");
			}

		else
		{
			
			printf("%c \n", pKeyboard->vkCode);
			printf("%c is pressed\n", pKeyboard->vkCode);
		}
		
		
		
	}
	return CallNextHookEx(keyboardHook, nCode, wParam, lParam);
}

int main() 
{
	keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, NULL, 0);
	MSG message;
	while (GetMessage(&message, NULL, 0, 0)) {
		TranslateMessage(&message);
		DispatchMessage(&message);

	}
	UnhookWindowsHookEx(keyboardHook);
	return 0;
}

