#include<iostream>

using namespace std;
enum Color // 상수취급
{
	Red, Green, Blue,Size//0,1,2순으로 정의됌
	//하지만 명시적으로 지정해주는것도 가능
};
enum TextAttribute
{
	Bold = 1,
	Underline = 2,
	Italic = 4,
	StrikeThrough =8
};
enum class RectAttribute
{
	Bold=1
};
enum struct CircleAttribute
{
	Bold = 1
};
int main()
{
	//enum 중 class와 struct로 정의한 enum 자료형의 변수를 사용할때는 아래처럼 scoped 사용안하면 컴파일 오류 생김
	RectAttribute::Bold;
	// enum 열거형
	int colors[3] = {255,128,64};
	colors[Red];
	colors[Green];

	int textAttrs = 0;
	textAttrs |= Bold;
	textAttrs |= Underline;

	Color color = (Color)1;
	if (color == Color::Red)
	{
		cout << "Red" << endl;
	}
	if (color == Color::Green)
	{
		cout << "Green" << endl;
	}

}