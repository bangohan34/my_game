#include "DxLib.h"
#include <vector>
#include <iostream>
using namespace std;

void bom(int x, int y) {
	x+=2;
	y+=2;
	for (int i = 7; i <= 9; i++) {
		DrawPixel(x + i, y + 1, GetColor(0, 0, 0));
	}
	for (int i = 4; i <= 12; i++) {
		if (i == 8)continue;
		DrawPixel(x + i, y + 2, GetColor(0, 0, 0));
	}
	for (int i = 2; i <= 14; i++) {
		if (i >= 5 && i <= 11)continue;
		DrawPixel(x + i, y + 3, GetColor(0, 0, 0));
	}
	for (int i = 2; i <= 14; i++) {
		if (i >= 3 && i <= 13)continue;
		DrawPixel(x + i, y + 4, GetColor(0, 0, 0));
	}
	for (int i = 1; i <= 15; i++) {
		if (i >= 3 && i <= 13)continue;
		DrawPixel(x + i, y + 5, GetColor(0, 0, 0));
	}
	for (int i = 1; i <= 15; i++) {
		if (i >= 2 && i <= 14) {
			if (i == 5 || i == 6 || i == 10 || i == 11) {
				DrawPixel(x + i, y + 6, GetColor(0, 0, 0));
			}
			continue;
		}
		DrawPixel(x + i, y + 6, GetColor(0, 0, 0));
	}
	for (int i = 1; i <= 15; i++) {
		if (i >= 2 && i <= 14) {
			if (i == 5 || i == 6 || i == 10 || i == 11) {
				DrawPixel(x + i, y + 7, GetColor(0, 0, 0));
			}
			continue;
		}
		DrawPixel(x + i, y + 7, GetColor(0, 0, 0));
	}
	for (int i = 1; i <= 15; i++) {
		if (i >= 2 && i <= 14) {
			continue;
		}
		DrawPixel(x + i, y + 8, GetColor(0, 0, 0));
	}
	for (int i = 1; i <= 15; i++) {
		if (i >= 2 && i <= 14) {
			if (i == 7 || i == 8 || i == 9) {
				DrawPixel(x + i, y + 9, GetColor(0, 0, 0));
			}
			continue;
		}
		DrawPixel(x + i, y + 9, GetColor(0, 0, 0));
	}
	for (int i = 1; i <= 15; i++) {
		if (i >= 3 && i <= 13)continue;
		DrawPixel(x + i, y + 10, GetColor(0, 0, 0));
	}
	for (int i = 2; i <= 14; i++) {
		if (i >= 4 && i <= 12)continue;
		DrawPixel(x + i, y + 11, GetColor(0, 0, 0));
	}
	for (int i = 3; i <= 13; i++) {
		if (i == 4 || i == 8 || i == 12)continue;
		DrawPixel(x + i, y + 12, GetColor(0, 0, 0));
	}
	for (int i = 3; i <= 13; i++) {
		if (i == 4 || i == 8 || i == 12 || i == 6 || i == 10)continue;
		DrawPixel(x + i, y + 13, GetColor(0, 0, 0));
	}
	for (int i = 3; i <= 13; i++) {
		if (i == 4 || i == 8 || i == 12 || i == 6 || i == 10)continue;
		DrawPixel(x + i, y + 14, GetColor(0, 0, 0));
	}
	for (int i = 3; i <= 13; i++) {
		if (i == 6 || i == 10)continue;
		DrawPixel(x + i, y + 15, GetColor(0, 0, 0));
	}
}
void bomexp(int x,int y) {
	x--;
	y--;
	/*for (int i = 7; i <= 16; i++) {
		if ((i >= 8 && i <= 12) || i == 14) {
			continue;
		}
		DrawPixel(x + i, y, GetColor(255, 43, 45));
	}*/
	for (int i = 4; i <= 16; i++){
		if (i == 5 || (i >= 9 && i <= 11)) {
			continue;
		}
		DrawPixel(x + i, y + 1, GetColor(255, 43, 45));
	}
	for (int i = 4; i <= 17; i++) {
		DrawPixel(x + i, y + 2, GetColor(255, 43, 45));
	}
	for (int i = 4; i <= 17; i++) {
		if (i == 6 || i == 13) {
			DrawPixel(x + i, y + 3, GetColor(255, 255, 22));
			continue;
		}
		DrawPixel(x + i, y + 3, GetColor(255, 43, 45));
	}
	for (int i = 3; i <= 17; i++) {
		if (i == 6 || i == 9 || i == 10 || i == 12 || i == 13) {
			DrawPixel(x + i, y + 4, GetColor(255, 255, 22));
			continue;
		}
		DrawPixel(x + i, y + 4, GetColor(255, 43, 45));
	}
	for (int i = 4; i <= 17; i++) {
		if (i >= 6 && i <= 14) {
			DrawPixel(x + i, y + 5, GetColor(255, 255, 22));
			continue;
		}
		DrawPixel(x + i, y + 5, GetColor(255, 43, 45));
	}
	for (int i = 4; i <= 16; i++) {
		if (i >= 6 && i <= 14) {
			DrawPixel(x + i, y + 6, GetColor(255, 255, 22));
			continue;
		}
		DrawPixel(x + i, y + 6, GetColor(255, 43, 45));
	}
	for (int i = 5; i <= 16; i++) {
		if (i >= 7 && i <= 14) {
			DrawPixel(x + i, y + 7, GetColor(255, 255, 22));
			continue;
		}
		DrawPixel(x + i, y + 7, GetColor(255, 43, 45));
	}
	for (int i = 5; i <= 17; i++) {
		DrawPixel(x + i, y + 8, GetColor(0,0,0));
	}
	DrawPixel(x + 5, y + 9, GetColor(0, 0, 0));
	DrawPixel(x + 17, y + 9, GetColor(0, 0, 0));
	DrawPixel(x + 4, y + 10, GetColor(0, 0, 0));
	DrawPixel(x + 5, y + 10, GetColor(0, 0, 0));
	DrawPixel(x + 17, y + 10, GetColor(0, 0, 0));
	DrawPixel(x + 18, y + 10, GetColor(0, 0, 0));
	DrawPixel(x + 4, y + 11, GetColor(0, 0, 0));
	DrawPixel(x + 8, y + 11, GetColor(0, 0, 0));
	DrawPixel(x + 9, y + 11, GetColor(0, 0, 0));
	DrawPixel(x + 12, y + 11, GetColor(0, 0, 0));
	DrawPixel(x + 13, y + 11, GetColor(0, 0, 0)); 
	DrawPixel(x + 18, y + 11, GetColor(0, 0, 0));
	DrawPixel(x + 4, y + 12, GetColor(0, 0, 0));
	DrawPixel(x + 8, y + 12, GetColor(0, 0, 0));
	DrawPixel(x + 9, y + 12, GetColor(0, 0, 0));
	DrawPixel(x + 12, y + 12, GetColor(0, 0, 0));
	DrawPixel(x + 13, y + 12, GetColor(0, 0, 0));
	DrawPixel(x + 18, y + 12, GetColor(0, 0, 0));
	DrawPixel(x + 4, y + 13, GetColor(0, 0, 0));
	DrawPixel(x + 18, y + 13, GetColor(0, 0, 0));
	DrawPixel(x + 4, y + 14, GetColor(0, 0, 0));
	DrawPixel(x + 9, y + 14, GetColor(0, 0, 0));
	DrawPixel(x + 12, y + 14, GetColor(0, 0, 0));
	DrawPixel(x + 18, y + 14, GetColor(0, 0, 0));
	for (int i = 0; i < 22; i++) {
		if (i == 4 || i == 5 || i == 10 || i == 11 || i == 17 || i == 18) {
			DrawPixel(x + i, y + 15, GetColor(0, 0, 0));
		}
	}
	for (int i = 0; i < 22; i++) {
		if (i == 5 || i == 6 || i == 16 || i == 17) {
			DrawPixel(x + i, y + 16, GetColor(0, 0, 0));
		}
	}
	for (int i = 0; i < 22; i++) {
		if (i == 6 || i == 8 || i == 9 || i == 10 || i == 12 || i == 13 || i == 14 || i == 16) {
			DrawPixel(x + i, y + 17, GetColor(0, 0, 0));
		}
	}
	for (int i = 0; i < 22; i++) {
		if (i == 6 || i == 8 || i == 10 || i == 12 || i == 14 || i == 16) {
			DrawPixel(x + i, y + 18, GetColor(0, 0, 0));
		}
	}
	for (int i = 0; i < 22; i++) {
		if (i == 6 || i == 8 || i == 10 || i == 12 || i == 14 || i == 16) {
			DrawPixel(x + i, y + 19, GetColor(0, 0, 0));
		}
	}
	for (int i = 6; i <= 16; i++) {
		if (i==9||i==13) {
			continue;
		}
		DrawPixel(x + i, y + 20, GetColor(0, 0, 0));
	}
}
void cover(int x, int y) {
	DrawBox(x, y, x + 20, y + 20, GetColor(90, 94, 112), true); //�J�o�[������Ƃ���Ă�
}
void mark(int x, int y) {
	vector<int>bikkuri =
	{
		0,0,0,0,0,1,1,1,1,0,0,
	  	  0,0,0,1,1,1,1,1,1,0,
		  0,0,0,1,1,1,1,1,1,0,
		  0,0,0,1,1,1,1,1,1,0,
		  0,0,0,1,1,1,1,1,1,0,
		  0,0,0,1,1,1,1,1,1,0,
		  0,0,0,1,1,1,1,1,0,0,
		  0,0,0,1,1,1,1,1,0,0,
		  0,0,0,1,1,1,1,0,0,0,
		  0,0,0,1,1,1,1,0,0,0,
		  0,0,0,1,1,1,0,0,0,0,
		  0,0,0,1,1,0,0,0,0,0,
		  0,0,0,0,0,0,0,0,0,0,
		  0,1,1,1,0,0,0,0,0,0,
		  1,1,1,1,0,0,0,0,0,0,
		  1,1,1,1,0,0,0,0,0,0,
		  0,1,1,0,0,0,0,0,0,0
	};
	int a = x, b = y;
	for (int i = 1; i <= 17 * 10; i++) {
		if (bikkuri.at(i) == 1) {
			DrawPixel(a + 4 + i % 10 , b + 1, GetColor(255, 0, 0));
		}
		if (i % 10 == 0) {
			b++;
		}
	}
}
void screan_reset(int bomamount, int openamount, int markamount) {
	ClearDrawScreen();
	DrawBox(0, 0, 640, 480, GetColor(55, 55, 55), true); //�w�i���D�F��
	DrawBox(20, 20, 620, 460, GetColor(255, 255, 255), true); //�O�g
	DrawBox(460, 20, 480, 460, GetColor(55, 55, 55), true); //�^�񒆂̋�؂�
	for (int i = 42; i < 460; i += 22) {
		DrawLine(i, 20, i, 460, GetColor(55, 55, 55)); //���C���̏c��؂�
	}
	for (int i = 42; i < 460; i += 22) {
		DrawLine(20, i, 460, i, GetColor(55, 55, 55)); //���C���̉���؂�
	}
	SetFontSize(20);
	DrawFormatString(542, 140, GetColor(0, 0, 0),":");
	DrawFormatString(553, 142, GetColor(0, 0, 0), "%d", bomamount);
	DrawString(485, 50, "Minesweeper!", GetColor(0, 0, 255));
	bom(520, 140);
	cover(520, 170);
	DrawFormatString(542, 170, GetColor(0, 0, 0), ":");
	DrawFormatString(553, 172, GetColor(0, 0, 0), "%d", 20 * 20 - openamount);
	mark(520, 200);
	DrawFormatString(542, 200, GetColor(0, 0, 0), ":");
	DrawFormatString(553, 202, GetColor(0, 0, 0), "%d", markamount);
}
void white(vector<vector<int>>bomposition_dash, vector<vector<int>>bomposition, vector<vector<int>>&open, int x, int y) {
	if (bomposition_dash.at(x).at(y) == 10) {
		for (int i = -1; i <= 1; i++) {
			for (int j = -1; j <= 1; j++) {
				if (bomposition_dash.at(x + i).at(y + j) < 10 && bomposition.at(x + i).at(y + j) == 0 && open.at(x + i).at(y + j) == 0) {
					open.at(x + i).at(y + j) = 1;
					x += i;
					y += j;
					bomposition_dash.at(x).at(y) += 10;
					if (x >= 1 && x <= 20 && y >= 1 && y <= 20) {
						white(bomposition_dash, bomposition, open, x, y);
					}
					bomposition_dash.at(x).at(y) -= 10;
					x -= i;
					y -= j;
				}
			}
		}
	}
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	if (DxLib_Init() == -1) {
		return -1;
	}
	ChangeWindowMode(true);
	SetMouseDispFlag(true);

	//�z�[�����
	DrawBox(0, 0, 640, 480, GetColor(55, 55, 55), true); //�w�i���D�F��
	SetFontSize(50);
	DrawString(170, 200, "Minesweeper", GetColor(150, 150, 255));
	WaitKey();
	ClearDrawScreen();
	SetWindowSizeChangeEnableFlag(true);

	//�n���̈ʒu
	startgame:
	int bomnumber = 1, bomamount = 0,randam_number;
	int openamount = 0, markamount = 0;
	vector<vector<int>>bomposition(22, vector<int>(22, 0));
	vector<vector<int>>bomposition_dash(22, vector<int>(22, 0));
	vector<vector<int>>open(22, vector<int>(22, 0));
	vector<vector<int>>bikkuriposition(22, vector<int>(22, 1));
	for (int i = 1; i < 21; i++) {
		for (int j = 1; j < 21; j++) {
			randam_number = GetRand(100);
			if (randam_number >= 80) {
				bomposition.at(i).at(j) = bomnumber;
				bomamount++;
			}
		}
	}
	bomposition_dash = bomposition;

	//�Q�[�����
	screan_reset(bomamount, openamount, markamount);

	//�Q�[�����[�v
	int roop = 1;
	int click_x = 0, click_y = 0, x, y, click_on_or_not_left, click_on_or_not_right, near_bomamount = 0,mouse_set = 1;
	bool won_lose;
	for (int i = 1; i < 21; i++) { //�J�o�[��\��(����)
		for (int j = 1; j < 21; j++) {
			if (bomposition.at(i).at(j) < 10) {
				cover(21 + 22 * i - 22, 21 + 22 * j - 22);
			}
		}
	}
	for (int i = 1; i < 21; i++) {
		for (int j = 1; j < 21; j++) {
			if (bomposition.at(i).at(j) == 0) { //������\��
				near_bomamount = bomposition.at(i - 1).at(j - 1) + bomposition.at(i - 1).at(j) + bomposition.at(i - 1).at(j + 1)
					+ bomposition.at(i).at(j - 1) + bomposition.at(i).at(j + 1) + bomposition.at(i + 1).at(j - 1)
					+ bomposition.at(i + 1).at(j) + bomposition.at(i + 1).at(j + 1);
				if (near_bomamount == 0) {
					bomposition_dash.at(i).at(j) = 0;
				}
				if (near_bomamount == 1) {
					bomposition_dash.at(i).at(j) = 1;
				}
				if (near_bomamount == 2) {
					bomposition_dash.at(i).at(j) = 2;
				}
				if (near_bomamount == 3) {
					bomposition_dash.at(i).at(j) = 3;
				}
				if (near_bomamount == 4) {
					bomposition_dash.at(i).at(j) = 4;
				}
				if (near_bomamount == 5) {
					bomposition_dash.at(i).at(j) = 5;
				}
				if (near_bomamount == 6) {
					bomposition_dash.at(i).at(j) = 6;
				}
				if (near_bomamount == 7) {
					bomposition_dash.at(i).at(j) = 7;
				}
				if (near_bomamount == 8) {
					bomposition_dash.at(i).at(j) = 8;
				}
			}
		}
	}
	while (roop) {
		/*for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				if (bomposition.at(i).at(j) == 1) {
					bom(21 + 22 * i, 21 + 22 * j);
				}
			}
		}*/
	osenai:
		openamount = 0;
		markamount = 0;
		for (int i = 1; i < 21; i++) { //�J���Ă鐔�����߂�
			for (int j = 1; j < 21; j++) {
				if (open.at(i).at(j) == 1) {
					openamount++;
				}
				if (bikkuriposition.at(i).at(j) % 2 == 0 && open.at(i).at(j) == 0) {
					markamount++;
				}
			}
		}
		if (mouse_set) {
			WaitKey();
			mouse_set = 0;
			continue;
		}
		if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0) { //���N���b�N����Ă�����
			click_on_or_not_left = 1;
			GetMousePoint(&click_x, &click_y);
			if (click_x >= 21 && click_x <= 460 && click_y >= 21 && click_y <= 460) {
				x = (click_x - 21) / 22 + 1;
				y = (click_y - 21) / 22 + 1;
				if (bikkuriposition.at(x).at(y) % 2 == 0) {
					goto osenai;
				}
				if (bomposition.at(x).at(y) == bomnumber) { //���e��I��ł��܂����ꍇ
					roop = 0;
					screan_reset(bomamount, openamount, markamount);
					for (int i = 1; i < 21; i++) {
						for (int j = 1; j < 21; j++) {
							if (bomposition.at(i).at(j) == bomnumber) {
								bomexp(21 + 22 * i - 22, 21 + 22 * j - 22);
							}
						}
					}
					won_lose = false;
					continue;
				}
				else { //���e����������ꍇ
					open.at(x).at(y) = 1;
					bomposition_dash.at(x).at(y) += 10;
					openamount++;
					screan_reset(bomamount, openamount, markamount);
					for (int i = 1; i < 21; i++) {
						for (int j = 1; j < 21; j++) {
							if (bomposition.at(i).at(j) == 0) { //������\��
								near_bomamount = bomposition.at(i - 1).at(j - 1) + bomposition.at(i - 1).at(j) + bomposition.at(i - 1).at(j + 1)
									+ bomposition.at(i).at(j - 1) + bomposition.at(i).at(j + 1) + bomposition.at(i + 1).at(j - 1)
									+ bomposition.at(i + 1).at(j) + bomposition.at(i + 1).at(j + 1);
								if (near_bomamount == 1) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "1", GetColor(0, 0, 255));
								}
								if (near_bomamount == 2) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "2", GetColor(0, 0, 255));
								}
								if (near_bomamount == 3) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "3", GetColor(0, 0, 255));
								}
								if (near_bomamount == 4) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "4", GetColor(0, 0, 255));
								}
								if (near_bomamount == 5) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "5", GetColor(0, 0, 255));
								}
								if (near_bomamount == 6) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "6", GetColor(0, 0, 255));
								}
								if (near_bomamount == 7) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "7", GetColor(0, 0, 255));
								}
								if (near_bomamount == 8) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "8", GetColor(0, 0, 255));
								}
							}
						}
					}
					white(bomposition_dash, bomposition, open, x, y); //�����Ƃ���N���b�N����Ǝ���̔����Ƃ�����N���b�N
					/*if(bomposition_dash.at(x).at(y) == 10){ //�����Ƃ���N���b�N����Ǝ���̔����Ƃ�����N���b�N�@�O�̃o�[�W����
						for (int i = -1; i <= 1; i++) {
							for (int j = -1; j <= 1; j++) {
								if (bomposition_dash.at(x + i).at(y + j) < 10 && bomposition.at(x + i).at(y + j) == 0) {
									open.at(x + i).at(y + j) = 1;
								}
							}
						}
					}*/
					openamount = 0;
					markamount = 0;
					for (int i = 1; i < 21; i++) { //�J���Ă鐔�����߂�
						for (int j = 1; j < 21; j++) {
							if (open.at(i).at(j) == 1) {
								openamount++;
							}
							if (bikkuriposition.at(i).at(j) % 2 == 0 && open.at(i).at(j) == 0) {
								markamount++;
							}
						}
					}
					screan_reset(bomamount, openamount, markamount);
					for (int i = 1; i < 21; i++) {
						for (int j = 1; j < 21; j++) {
							if (bomposition.at(i).at(j) == 0) { //������\��
								near_bomamount = bomposition.at(i - 1).at(j - 1) + bomposition.at(i - 1).at(j) + bomposition.at(i - 1).at(j + 1)
									+ bomposition.at(i).at(j - 1) + bomposition.at(i).at(j + 1) + bomposition.at(i + 1).at(j - 1)
									+ bomposition.at(i + 1).at(j) + bomposition.at(i + 1).at(j + 1);
								if (near_bomamount == 1) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "1", GetColor(0, 0, 255));
								}
								if (near_bomamount == 2) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "2", GetColor(0, 0, 255));
								}
								if (near_bomamount == 3) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "3", GetColor(0, 0, 255));
								}
								if (near_bomamount == 4) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "4", GetColor(0, 0, 255));
								}
								if (near_bomamount == 5) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "5", GetColor(0, 0, 255));
								}
								if (near_bomamount == 6) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "6", GetColor(0, 0, 255));
								}
								if (near_bomamount == 7) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "7", GetColor(0, 0, 255));
								}
								if (near_bomamount == 8) {
									DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "8", GetColor(0, 0, 255));
								}
							}
						}
					}
					for (int i = 1; i < 21; i++) {
						for (int j = 1; j < 21; j++) {
							if (open.at(i).at(j) == 0) { //�J�o�[��\��
								cover(21 + 22 * i - 22, 21 + 22 * j - 22);
							}
							if (bikkuriposition.at(i).at(j) % 2 == 0 && open.at(i).at(j) == 0) {
								mark(21 + 22 * i - 22, 21 + 22 * j - 22);
							}
						}
					}
					/*if (abc % 2 == 1) {
						bom(600, 300);
					}
					abc++;*/
				}
			}
			while (click_on_or_not_left) { //����������̂�h��
				if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0) {}
				else {
					click_on_or_not_left = 0;
				}
			}
		}
		if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0) { //�E�N���b�N����Ă�����
			click_on_or_not_right = 1;
			GetMousePoint(&click_x, &click_y);
			if (click_x >= 21 && click_x <= 460 && click_y >= 21 && click_y <= 460) {
				x = (click_x - 21) / 22 + 1;
				y = (click_y - 21) / 22 + 1;
				mark(21 + 22 * x - 22, 21 + 22 * y - 22);
				markamount = 0;
				bikkuriposition.at(x).at(y)++;
				for (int i = 1; i < 21; i++) { 
					for (int j = 1; j < 21; j++) {
						if (bikkuriposition.at(i).at(j) % 2 == 0 && open.at(i).at(j) == 0) {
							markamount++;
						}
					}
				}
				screan_reset(bomamount, openamount, markamount);
				for (int i = 1; i < 21; i++) {
					for (int j = 1; j < 21; j++) {
						if (bomposition.at(i).at(j) == 0) { //������\��
							near_bomamount = bomposition.at(i - 1).at(j - 1) + bomposition.at(i - 1).at(j) + bomposition.at(i - 1).at(j + 1)
								+ bomposition.at(i).at(j - 1) + bomposition.at(i).at(j + 1) + bomposition.at(i + 1).at(j - 1)
								+ bomposition.at(i + 1).at(j) + bomposition.at(i + 1).at(j + 1);
							if (near_bomamount == 1) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "1", GetColor(0, 0, 255));
							}
							if (near_bomamount == 2) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "2", GetColor(0, 0, 255));
							}
							if (near_bomamount == 3) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "3", GetColor(0, 0, 255));
							}
							if (near_bomamount == 4) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "4", GetColor(0, 0, 255));
							}
							if (near_bomamount == 5) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "5", GetColor(0, 0, 255));
							}
							if (near_bomamount == 6) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "6", GetColor(0, 0, 255));
							}
							if (near_bomamount == 7) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "7", GetColor(0, 0, 255));
							}
							if (near_bomamount == 8) {
								DrawString(21 + 22 * i + 6 - 22, 21 + 22 * j + 1 - 22, "8", GetColor(0, 0, 255));
							}
						}
					}
				}
				for (int i = 1; i < 21; i++) {
					for (int j = 1; j < 21; j++) {
						if (open.at(i).at(j) == 0) { //�J�o�[��\��
							cover(21 + 22 * i - 22, 21 + 22 * j - 22);
							openamount++;
						}
						if (bikkuriposition.at(i).at(j) % 2 == 0 && open.at(i).at(j) == 0) {
							mark(21 + 22 * i - 22, 21 + 22 * j - 22);
						}
					}
				}
			}
			while (click_on_or_not_right) { //����������̂�h��
				if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0) {}
				else {
					click_on_or_not_right = 0;
				}
			}
		}
		if (20 * 20 - bomamount == openamount) {
			won_lose = true;
			roop = 0;
		}
	}
	WaitKey();

	//�I���̉��
	ClearDrawScreen();
	mouse_set = 1;
	DrawBox(0, 0, 640, 480, GetColor(55, 55, 55), true); //�w�i���D�F��
	if (won_lose == true) {
		DrawString(300, 170, "WON", GetColor(255, 0, 0));
	}
	else {
		DrawString(300, 170, "LOSE", GetColor(255, 0, 0));
	}
	DrawBox(120, 280, 290, 340, GetColor(194, 193, 198), true);
	DrawString(140, 320, "RETRY", GetColor(255, 0, 0));
	DrawBox(350, 280, 520, 340, GetColor(194, 193, 198), true);
	DrawString(370, 320, "EXIT", GetColor(255, 0, 0));
	WaitKey();
	end:
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0) {
		GetMousePoint(&click_x, &click_y);
		if (click_x >= 120 && click_x <= 290 && click_y >= 280 && click_y <= 340) {
			goto startgame;
		}
		if (click_x >= 350 && click_x <= 520 && click_y >= 280 && click_y <= 340) {
			DxLib_End();
			return 0;
		}
	}
	goto end;
};