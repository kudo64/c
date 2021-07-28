
#include <iostream>

#include <map>

#include <string>
using namespace std;


int fizzBuzz(int i = 100) {
	if (i > 1) {
		fizzBuzz(i - 1);
	}

	if (i % 3 == 0 && i % 5 == 0) {

		//coutは標準出力に対する出力ストリームオブジェクト
		cout << "fizzBuzz" << endl;
	}

	else if (i % 3 == 0) {
		cout << "fizz" << endl;
	}

	else if (i % 5 == 0) {
		cout << "buzz" << endl;
	}

	else {
		cout << i << endl;
	}
	return 0;
}

int janken(int myHand = 0) {

	int yourHand = rand() % 3; //0～2の乱数を生成
	string jankenList[] = { "グー","チョキ","パー" };
	string jankenResult[] = { "引き分け","勝ち","負け" };

	cout << "あなたの手:" << jankenList[myHand] << endl;
	cout << "相手の手:" << jankenList[yourHand] << endl;
	cout << jankenResult[(yourHand + myHand * 2) % 3];


	return 0;

}

int main() {
	int i;
	cout << "fizzBuzz用の数字を入力" << endl;
	cin >> i;
	fizzBuzz(i);

}


