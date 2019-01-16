#include "input.h"
#include "subway.h"

void Input(int argc, char *argv[])
{
	Subway *subway;
	subway = new Subway();
	if (argc == 1) {
		string line;
		while (cin >> line) {
			subway->GetLine(line);
		}
	}
	else if (strcmp(argv[1], "/b") == 0){  //��վ֮��������·(վ������)
		string start = argv[2], end = argv[3];
		subway->Dijkstra(start, end, false);
	}
	else if (strcmp(argv[1], "/a") == 0) { //ȫ����
		string start = argv[2];
		subway->Euler(start, false);
	}
	else if (strcmp(argv[1], "/c") == 0) { //��վ֮��������·(����+3)
		string start = argv[2], end = argv[3];
		subway->Dijkstra(start, end, true);
	}
	else if (strcmp(argv[1], "/d") == 0) {  //ȫ����(����+3)
		string start = argv[2];
		subway->Euler(start, true);
	}
	else if (strcmp(argv[1], "/z") == 0) {  //����
		string filename = argv[2];
		subway->Test(filename);
	}
	return;
}