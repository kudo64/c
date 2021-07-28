#include <iostream>
#include <map>
#include <string>
#include <time.h>

using namespace std;

int janken(int myHand = 0) {

	srand(time(NULL));
	int yourHand = rand() % 3; //0～2の乱数を生成
	string jankenList[] = { "グー","チョキ","パー" };
	string jankenResult[] = { "引き分け","勝ち","負け" };

	cout << "あなたの手:" << jankenList[myHand] << endl;
	cout << "相手の手:" << jankenList[yourHand] << endl;
	cout << jankenResult[(yourHand + myHand * 2) % 3];

	return 0;
}

int main() {

	int myHand;
	cout << "じゃんけんの手を入力[グー:0, チョキ:1, パー:2]" << endl;
	cin >> myHand;
	janken(myHand);

}
