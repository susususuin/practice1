
***********練習20**********
整数値を2つ入力させ、
1つめの値を2つめの値で割った結果を表示し、
続けてその結果に2つめの値を掛けた結果を
表示するプログラムを作成せよ。
計算はすべて整数型で行うこと
（割り切れない場合は自動的に
小数点以下が切り捨てられる）。
***************************

#include<stdio.h>

int main(void){
	int firstValue;
	int secondValue;
	int firstAnser;
	int secondAnser;
	printf("整数を2つ入力してください。1つ目と2つ目の整数をエンターで区切ること。");
	scanf("%d"&firstValue\n);
	scanf("%d"&secondValue\n);
	firstAnser=firstValue/secondValue;
	secondAnser=firstAnser*secondValue
	printf(firstAnser);
	printf(secondAnser);
	retuen 0;
}

