#include "yuhanCG.h"

HDC hdc;
PAINTSTRUCT ps;
HBITMAP myBitmap, oldBitmap;
HINSTANCE gInst;
LPCWSTR bmpName;

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

void DrawRyan(HWND hWnd, HDC hdc, int left, int top, int right, int bottom) {

}