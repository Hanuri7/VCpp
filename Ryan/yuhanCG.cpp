#include "yuhanCG.h"

HDC hdc;
PAINTSTRUCT ps;
HBITMAP myBitmap, oldBitmap;
HINSTANCE gInst;
LPCWSTR bmpName;
//bool isClose;
//POINT startPoint = { 0 };
//POINT endPoint = { 0 };

void DrawBonobono(HWND hwnd, HDC hdc, int blink) {
	if (blink) {
		bmpName = MAKEINTRESOURCE(IDB_BITMAP2);	//�� ����
	}
	else {
		bmpName = MAKEINTRESOURCE(IDB_BITMAP1); //�� ��
	}
	//���뺸�� �׸���
	HDC Memdc;
	hdc = GetDC(hwnd);				// ����̽� ���ؽ�Ʈ ���
	Memdc = CreateCompatibleDC(hdc);		//�޸�dc ����
	myBitmap = LoadBitmap(gInst, bmpName); //1 2 �ε�
	oldBitmap = (HBITMAP)SelectObject(Memdc, myBitmap); //��Ʈ�� ����
	//800, 400
	BitBlt(hdc, 268, 157, 263, 258, Memdc, 0, 0, SRCCOPY); //���� �� ���
	SelectObject(Memdc, oldBitmap);
	DeleteObject(myBitmap);
	ReleaseDC(hwnd, hdc);			// ����̽� ���ؽ�Ʈ ����
}

void DrawRyan(HWND hwnd, HDC hdc, int left, int top, int right, int bottom) {
	// ���̿� �׸���
	HDC Memdc;
	hdc = GetDC(hwnd);				// ����̽� ���ؽ�Ʈ ���
	Memdc = CreateCompatibleDC(hdc);		//�޸�dc ����
	myBitmap = LoadBitmap(gInst, MAKEINTRESOURCE(IDB_BITMAP3)); //3 �ε�
	oldBitmap = (HBITMAP)SelectObject(Memdc, myBitmap); //��Ʈ�� ����
	StretchBlt(hdc, left, right, top, bottom, Memdc, 0, 0, 263, 250, SRCCOPY); //���� �� ���
	SelectObject(Memdc, oldBitmap);
	DeleteObject(myBitmap);
	ReleaseDC(hwnd, hdc);			// ����̽� ���ؽ�Ʈ ����
}