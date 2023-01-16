

#include <iostream>
using namespace std;
char arr[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
void display() {
	cout << "\n                " << arr[0][0] << "   |" << "   " << arr[0][1] << "   |" << "   " << arr[0][2];
	cout << "\n               --------------------\n";
	cout << "                " << arr[1][0] << "   |" << "   " << arr[1][1] << "   |" << "   " << arr[1][2];
	cout << "\n               --------------------\n";
	cout << "                " << arr[2][0] << "   |" << "   " << arr[2][1] << "   |" << "   " << arr[2][2]<<endl<<endl;
}

bool check1() {
	if (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0') {
		cout << "Player 1 has won 1\n";
		return true;
	}
	else if (arr[1][0] == '0' && arr[1][1] == '0' && arr[1][2] == '0') {
		cout << "Player 1 has won 2\n";
		return true;
	}
	else if (arr[2][0] == '0' && arr[2][1] == '0' && arr[2][2] == '0') {
		cout << "Player 1 has won 3\n";
		return true;
	}
	else	if (arr[0][0] == '0' && arr[1][0] == '0' && arr[2][0] == '0') {
		cout << "Player 1 has won 4\n";
		return true;
	}
	else if (arr[0][1] == '0' && arr[1][1] == '0' && arr[2][1] == '0') {
		cout << "Player 1 has won 5\n";
		return true;
	}
	else if (arr[0][2] == '0' && arr[1][2] == '0' && arr[2][2] == '0') {
		cout << "Player 1 has won 6\n";
		return true;
	}
	else if (arr[0][0] == '0' && arr[1][1] == '0' && arr[2][2] == '0') {
		cout << "Player 1 has won 7\n";
		return true;
	}
	else {
		return false;
	}

}




bool check2() {
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') {
		cout << "Player 2 has won 1\n";
		return true;
	}
	else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') {
		cout << "Player 2 has won 2\n";
		return true;
	}
	else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') {
		cout << "Player 2 has won 3\n";
		return true;
	}
	else	if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') {
		cout << "Player 2 has won 4\n";
		return true;
	}
	else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') {
		cout << "Player 2 has won 5\n";
		return true;
	}
	else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') {
		cout << "Player 2 has won 6\n";
		return true;
	}
	else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') {
		cout << "Player 2 has won 7\n";
		return true;
	}
	else {
		return false;
	}

}
void turn() {

	int c;
	cout << "Player 1:\n";
	cin >> c;
	switch (c) {
	case 1:
		arr[0][0] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 2:
		arr[0][1] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;
	 
	case 3:
		arr[0][2] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 4:
		arr[1][0] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 5:
		arr[1][1] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 6:
		arr[1][2] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 7:
		arr[2][0] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 8:
		arr[2][1] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	case 9:
		arr[2][2] = '0';
		display();
		if (check1()) {
			exit;
		};
		break;

	default:
		cout << "Enter a valid number\n";


	}

	cout << "Player 2:\n";
	cin >> c;
	switch (c) {
	case 1:
		arr[0][0] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 2:
		arr[0][1] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 3:
		arr[0][2] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 4:
		arr[1][0] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 5:
		arr[1][1] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 6:
		arr[1][2] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 7:
		arr[2][0] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 8:
		arr[2][1] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	case 9:
		arr[2][2] = 'X';
		display();
		if (check2()) {
			exit;
		};
		break;

	default:
		cout << "Enter a valid number\n";


	}
}

bool gameover() {
	if (check1() || check2()) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	cout << "         W E L C O M E  T O  T I C  T A C  T O E\n\n";
	display();
	int i = 0;
	while (!gameover() && i<9) {
		turn();
		i=i+2;
	}
	if (i == 8 && !gameover()) {
		cout << "\nDraw";
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
