#include<iostream>

using namespace std;
enum Color // ������
{
	Red, Green, Blue,Size//0,1,2������ ���ǉ�
	//������ ��������� �������ִ°͵� ����
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
	//enum �� class�� struct�� ������ enum �ڷ����� ������ ����Ҷ��� �Ʒ�ó�� scoped �����ϸ� ������ ���� ����
	RectAttribute::Bold;
	// enum ������
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