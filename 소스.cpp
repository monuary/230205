#include<iostream>
using namespace std;

class SinivelCap	//�๰��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }	//public�̶� �ܺο��� ���ٰ���������, const ���� �Լ��� ���� Ŭ���� ���� ������ ������ �ʴ´�.
};

class SneezeCap	//��ä���
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap	//�ڸ�����
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap& cap)const { cap.Take(); }	//�Լ��� �Էµ� const�� SinivelCap�� �ٲ��� �ʰ�, �ܺ��� const�� ColdPatient�� ������ �ٲ��� �ʴ´�.
	void TakeSneezeCap(const SneezeCap& cap)const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap)const { cap.Take(); }
};

int main()
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);	//Ŭ���� SinivelCap�� �ش��ϴ� ��� �Է°���
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}