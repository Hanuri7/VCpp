#include "yuhanCG.h"

HBITMAP myBitmap, oldBitmap;
HINSTANCE gInst;
LPCWSTR bmpName;

void DrawBonobono(HWND hWnd, HDC hdc, int blink) {
	//HDC Memdc;
	//hdc = GetDC(hWnd);				// ����̽� ���ؽ�Ʈ ���
	//Memdc = CreateCompatibleDC(hdc);		//�޸�dc ����
	//myBitmap = LoadBitmap(gInst, bmpName); //1 2 �ε�
	//oldBitmap = (HBITMAP)SelectObject(Memdc, myBitmap); //��Ʈ�� ����
	////800, 400
	//BitBlt(hdc, 268, 112, 263, 258, Memdc, 0, 0, SRCCOPY); //���� �� ���
	//SelectObject(Memdc, oldBitmap);
	//DeleteObject(myBitmap);
	//ReleaseDC(hWnd, hdc);			// ����̽� ���ؽ�Ʈ ����
}

void DrawRyan(HWND hWnd, HDC hdc, int left, int top, int right, int bottom) {
	//// ���̿� �׸���
	//HDC Memdc;
	//hdc = GetDC(hWnd);				// ����̽� ���ؽ�Ʈ ���
	//Memdc = CreateCompatibleDC(hdc);		//�޸�dc ����
	//myBitmap = LoadBitmap(gInst, MAKEINTRESOURCE(IDB_BITMAP3)); //3 �ε�
	//oldBitmap = (HBITMAP)SelectObject(Memdc, myBitmap); //��Ʈ�� ����
	//BitBlt(hdc, startPoint.x, startPoint.y, 263, 258, Memdc, 0, 0, SRCCOPY); //���� �� ���
	//SelectObject(Memdc, oldBitmap);
	//DeleteObject(myBitmap);
	//ReleaseDC(hWnd, hdc);			// ����̽� ���ؽ�Ʈ ����
}