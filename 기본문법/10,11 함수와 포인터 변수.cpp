#include <iostream>

using namespace std;

// 1
/*
int main()
{
	int arr[4][4] = {};
	int num;
	cin >> num;

	if (num % 2 == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][i] = i + 1;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[3 - i][i] = 4 - i;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
*/

// 2 
/*
char getChar()
{
	char a, b;
	cin >> a >> b;

	return (a > b) ? a : b;
}

int main()
{
	cout << getChar();
	
	return 0;
}
*/

// 3
/*
int main()
{
	int arr[3][3] = {};
	int num, cnt = 1;
	cin >> num;

	if (num % 5 == 1)
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr[j][i] = cnt++;
			}
		}
	}
	else if (num % 5 == 2)
	{
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = cnt++;
			}
		}

	}
	else
	{
		cnt = 10;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[j][i] = cnt++;
			}
		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
*/

// 4
/*
void printData(int value)
{
	cout << value << endl;
}

void even(int value)
{
	printData(value * 2);
}

void odd(int value)
{
	printData(value - 10);
}


int main()
{
	int a, b;
	cin >> a >> b;

	if ((a / b) % 2 == 0)
	{
		even(a / b);
	}
	else
	{
		odd(a / b);
	}

	printData(a + b);
	
	return 0;
}
*/

// 5
/*
int GOP()
{
	int a, b;
	cin >> a >> b;
	return a * b;
}

int SUM()
{
	int a, b;
	cin >> a >> b;
	return a + b;
}


int main()
{
	int a = GOP();
	int b = SUM();

	if (a > b) cout << "GOP>SUM";
	else if (a < b) cout << "GOP<SUM";
	else cout << "GOP==SUM";
	
	return 0;
}
*/

// 6
/*
int main()
{
	int arr[4][4] = {};
	int cnt = 1;

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[j][i] = cnt++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
*/

// 7
/*
int main()
{
	int arr[3][4] = {};
	int cnt = 1;
	
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 3; j >= 0; j--)
		{
			arr[i][j] = cnt++;
		}
	}

	int num;
	cin >> num;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == num) arr[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
*/

// 8
/*
int main()
{
	int arr[4][4] = {};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0) cout << "!";
			else if (arr[i][j] % 2 == 0) cout << "#";
			else  cout << "@";
		}
		cout << "\n";
	}
	
	return 0;
}
*/

// 9
/*
int Input()
{
	int num;
	cin >> num;

	return num;
}

void CountDown(int num)
{
	for (int i = num; i > 0; i--)
	{
		cout << i << " ";
	}
}


int main()
{
	int num = Input();
	CountDown(num);
	
	return 0;
}
*/

// 10
/*
int YesOrNo()
{
	int input;
	cin >> input;

	if (input % 3 == 0) return 7;
	else if (input % 3 == 1) return 35;
	else return 50;
}

int main()
{
	cout << YesOrNo();
	
	return 0;
}
*/

// 11
/*
char Scoring()
{
	int score;
	cin >> score;

	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else return 'D';
}

int main()
{
	cout << Scoring();
	
	return 0;
}
*/

// 12
/*
char aToZ()
{
	char c;
	cin >> c;

	if ((c - 'A') < ('Z' - c)) return 'A';
	else return 'Z';
}


int main()
{
	cout << aToZ();
	
	return 0;
}
*/


// 문제 1
/*
int Input()
{
	int num;
	cin >> num;

	return num;
}

void Cals(int a, int b, int c)
{
	cout << a + b + c;
}

int main()
{
	int a = Input();
	int b = Input();
	int c = Input();
	
	Cals(a, b, c);

	return 0;
}
*/

// 문제 2
/*
int sum(int a, int b)
{
	return a + b;
}

int comp(int a, int b)
{
	return a - b;
}

void print(int t1, int t2)
{
	cout << "합:" << t1 << "\n차:" << t2 << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int s = sum(a, b);
	int c = comp(a, b);

	print(s, c);
	
	return 0;
}
*/

// 문제 3
/*
int main()
{
	int a;
	char gd;

	cin >> a >> gd;

	int* p = &a;
	char* t = &gd;

	cout << *p << " " << *t;

	return 0;
}
*/

// 문제 4
/*
int main()
{
	char a, b, c;
	cin >> a >> b >> c;

	char* pA = &a;
	char* pB = &b;
	char* pC = &c;
	
 	cout << ++(*pA) << " " << ++(*pB) << " " << ++(*pC);

	return 0;
}
*/

// 문제 5
/*
int main()
{
	int a, b;
	cin >> a >> b;

	int* p = &a;
	int* t = &b;

	int temp = *p;
	*p = *t;
	*t = temp;

	cout << *p << " " << *t;

	return 0;
}
*/

// 문제 6
/*
int main()
{
	int arr[7] = { 3, 4, 1, 3, 2, 7, 3 };
	
	int num, flag = 0;
	cin >> num;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == num) flag = 1;
	}

	if (flag == 1) cout << "발견";
	else cout << "미발견";

	return 0;
}
*/

// 문제 7
/*
int main()
{
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < 7; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}

	cout << "MAX=" << max << "\nMIN=" << min << endl;

	return 0;
}
*/

// 문제 8
/*
int main()
{
	int flag = 0;
	char arr[14] = "StructPointer";
	char ch;
	cin >> ch;

	for (int i = 0; i < 14; i++)
	{
		if (arr[i] == ch) flag = 1;
	}

	if (flag == 1) cout << "발견";
	else cout << "미발견";

	return 0;
}
*/

// 문제 9
/*
int main()
{
	char arr[8], big[8] = {}, small[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	int bIdx = 0, sIdx = 0;
	for (int i = 0; i < 8; i++)
	{
		if ('a' <= arr[i] && arr[i] <= 'z')
		{
			small[sIdx] = arr[i];
			sIdx++;
		}
		else if ('A' <= arr[i] && arr[i] <= 'Z')
		{
			big[bIdx] = arr[i];
			bIdx++;
		}
	}

	small[sIdx] = '\0';
	big[bIdx] = '\0';

	cout << "big=" << big << "\nsmall=" << small << endl;

	return 0;
}
*/

// 문제 10
/*
int vect[2][5] = { {3, 2, 6, 2, 4}, {1, 4, 2, 6, 5} };

int KFC(int target)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (vect[i][j] == target) return 1;
		}
	}

	return 0;
}

int main()
{
	int target;
	cin >> target;

	int res = KFC(target);

	if (res == 1) cout << "값이 존재합니다";
	else cout << "값이 없습니다";

	return 0;
}
*/

// 문제 11
/*
int main()
{
	int arr[4][4] = { {1, 3, 6, 2}, {4, 2, 4, 5}, {6, 3, 7, 3,}, {1, 5, 4, 6} };

	int num;
	cin >> num;

	int select[16] = {};
	int idx = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > num) select[idx++] = arr[i][j];
		}
	}

	for (int i = 0; i < idx; i++)
	{
		cout << select[i] << " ";
	}

	return 0;
}
*/

// 복습 문제 1
/*
int main()
{
	int arr[4][4] = {};
	int idx = 1;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[j][i] = 2 * idx;
			idx++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
*/

// 복습 문제 2
/*
int main()
{
	int arr[5][5] = {};
	int num = 1;
	
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[j][i] = num++;
		}
	}

	int n;
	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		arr[n][i] = n;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
*/

// 복습 문제 3
/*
struct Fruit
{
	int size;
	int price;
};

int main()
{
	Fruit banana, apple;
	
	cin >> banana.size >> apple.size;

	banana.price = banana.size * 250;
	apple.price = apple.size * 500;

	cout << banana.price + apple.price << "원";

	return 0;
}
*/

// 복습 문제 4
/*
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int arr[3][4] = {};

	for (int i = 0; i < 4; i++)
	{
		arr[0][i] = a++;
		arr[1][i] = b++;
		arr[2][i] = c++;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		} 
		cout << "\n";
	}

	return 0;
}
*/

// 복습 문제 5
/*
int main()
{
	int num = 10;
	int arr[6][3] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			arr[x][y] = num++;
		}
	}

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 7;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
*/

// 복습 문제 6
/*
struct BBQ
{
	int x;
	int data[3] = {};
};

int main()
{
	BBQ g;
	int sum = 0;

	cin >> g.x >> g.data[0] >> g.data[1] >> g.data[2];

	for (int i = 0; i < 3; i++)
	{
		sum += g.data[i];
	}

	cout << sum << " " << g.x << endl;

	return 0;
}
*/

// 복습 문제 7
/*
int arr[7][5] = { {1, 0, 0, 0, 0}, {1, 0, 1, 0, 0}, {1, 1, 0, 1, 0}, {1, 0, 1, 0, 0},
				{0, 1, 0, 0, 1}, {0, 0, 0, 1, 0}, {1, 1, 0, 0, 0} };

int Input()
{
	int num;
	cin >> num;
	return num;
}

int Process(int num)
{
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i][num] == 1) count++;
	}

	return count;
}

void Output(int count)
{
	cout << count << endl;
}


int main()
{
	int num = Input();
	int count = Process(num);
	Output(count);

	return 0;
}
*/

// 복습 문제 8
/*
char arr[3][5] = { {'D', 'A', 'C', 'C', 'D'}, {'S', 'D', 'F', 'A', 'E'}, {'E', 'E', 'T', 'J', 'H'}};

int Check(char d)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == d) return 1;
		}
	}

	return 0;
}

void Input()
{
	char c;
	cin >> c;
	
	int res = Check(c);

	if (res == 1) cout << "있음";
	else cout << "없음";
}

int main()
{
	Input();

	return 0;
}
*/

// 복습 문제 9
/*
void run(int num)
{
	int arr[3][3] = {};
	int cnt = 1;

	if (num < 10)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = cnt++;
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr[i][j] = cnt++;
			}
		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << "\n";
	}
}

int main()
{
	int num;
	cin >> num;

	run(num);

	return 0;
}
*/

// 복습 문제 1
/*
int main()
{
	char arr[6] = { 'D', 'F', 'G', 'D', 'A', 'Q' };

	char a, b;
	cin >> a >> b;

	int flag = 0;

	for (int i = 0; i < 6; i++)
	{
		if (a <= arr[i] && arr[i] <= b)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "발견!!!!!";
	else cout << "미발견!!!!!";

	return 0;
}
*/

// 복습 문제 2
/*
int arr[3][3] = { {1,1,1,}, {1,2,1}, {3,6,3} };

int Count(int x)
{
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == x) count++;
		}
	}

	return count;
}

int main()
{
	int num;
	cin >> num;

	int cnt = Count(num);
	cout << cnt;

	return 0;
}
*/

// 복습 문제 3
/*
int main()
{
	char arr[8] = { 'A', '1', '1', '1', '5', 'A', 'w', 'z' };

	char ch;
	cin >> ch;

	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == ch) count++;
	}

	if (count >= 3) cout << "THREE";
	else if (count == 2) cout << "TWO";
	else if (count == 1) cout << "ONE";
	else cout << "NOTHING";

	return 0;
}
*/

// 복습 문제 4
/*
int main()
{
	char arr[3][5] = { {'a', 'b', 'a', 'c', 'z'}, {'c', 't', 'a', 'c', 'd'}, {'c', 'c', 'c', 'c', 'a'} };
	
	char ch;
	cin >> ch;

	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch) count++;
		}
	}

	if (count >= 7) cout << "세상에";
	else if (count >= 5) cout << "와우";
	else if (count >= 3) cout << "이야";
	else cout << "이런";

	return 0;
}
*/

// 복습 문제 5
/*
int main()
{
	int arr[2][3];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0) cout << "#";
			else cout << arr[i][j];
		}
		cout << "\n";
	}

	return 0;
}
*/

// 복습 문제 6
/*
void CompareGo(int arr[], int arr2[], int size)
{
	int flag = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr2[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "두배열은같지않음";
	else cout << "두배열은완전같음";
}

int main()
{
	int arr[5] = { 3, 5, 1, 2, 7 };
	int arr2[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	CompareGo(arr, arr2, 5);

	return 0;
}
*/

// 복습 문제 7
/*
int main()
{
	char arr[3][3] = { {'a', 'b', 'E'}, {'E', '2', 'W'}, {'3', '2', '4'} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ('A' <= arr[i][j] && arr[i][j] <= 'Z') cout << (char)(arr[i][j] - 'A' + 'a');
			else if ('a' <= arr[i][j] && arr[i][j] <= 'z') cout << (char)(arr[i][j] - 'a' + 'A');
			else if ('0' <= arr[i][j] && arr[i][j] <= '9') cout << (char)(arr[i][j] + 5);
		}
		cout << "\n";
	}

	return 0;
}
*/

// 복습 문제 8
/*
char arr[3][3] = { {'a', 'b', 'd'}, {'e', 'w', 'z'}, {'q', 'v', 'a'} };

char Input()
{
	char c;
	cin >> c;

	return c;
}

void Process(char c)
{
	int flag = 0;

	if ('A' <= c && c <= 'Z') c = c - 'A' + 'a';

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == c)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}

	if (flag == 1) cout << "존재";
	else cout << "없음";
}


int main()
{
	char input = Input();
	Process(input);

	return 0;
}
*/

// 복습 문제 9
/*
int main()
{
	int arr[3][3] = { {3, 1, 6}, {7, 8, 4}, {9, 2, 3} };

	int a, b, c;
	cin >> a >> b >> c;

	arr[a][b] = c;

	int max = INT_MIN;
	int min = INT_MAX;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
			if (min > arr[i][j]) min = arr[i][j];
		}
	}

	cout << max + min << endl;

	return 0;
}
*/

// 복습 문제 10
/*
int main()
{
	int arr2[2][3];

	for (int i = 1; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cin >> arr2[i][j];
		}
	}

	int arr[6] = {};
	int idx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[idx++] = arr2[i][j];
		}
	}

	int temp = arr[0];
	arr[0] = arr[5];
	arr[5] = temp;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
*/

