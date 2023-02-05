#include<iostream>
using namespace std;

class SinivelCap	//콧물용
{
public:
	void Take() const { cout << "콧물이 싹~ 납니다." << endl; }	//public이라 외부에서 접근가능하지만, const 덕에 함수에 의해 클래스 안의 변수가 변하지 않는다.
};

class SneezeCap	//재채기용
{
public:
	void Take() const { cout << "재채기가 멎습니다." << endl; }
};

class SnuffleCap	//코막힘용
{
public:
	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap& cap)const { cap.Take(); }	//함수에 입력된 const로 SinivelCap을 바꾸지 않고, 외부의 const로 ColdPatient의 변수를 바꾸지 않는다.
	void TakeSneezeCap(const SneezeCap& cap)const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap)const { cap.Take(); }
};

int main()
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);	//클래스 SinivelCap에 해당하는 대상만 입력가능
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}