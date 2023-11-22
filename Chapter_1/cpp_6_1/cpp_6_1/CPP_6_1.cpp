#include<iostream>
using namespace std;
int main()
{
	//배열
	//const int 상수라 중간에 값을 바꿀수 없음
	//배열은 반복문에 의존도가 큼 
	
	int nums0[3] = { 0,1,2 };
	int nums1[3];

	//memcpy(&nums1,&nums0,sizeof(nums0));
	//복사할 배열, 복사할 배열의 크기, 복사받을 배열
	//주소값은 정수형 1을 더해도 메모리에서 4를 더한걸로 나옴
	copy(nums0, nums0 + 3, nums1);//포인터로 하면 안됌

	for (int i = 0; i < 3; i++)
	{
		cout << nums1[i] << endl;
	}

}