const int H = 8, W = 8;
int a[H][W];
int f[H][W];

void staircase_walk()
{
	// [Initial States]
	f[0][0] = a[0][0];
	for (int i=1; i<H; i++)
		f[i][0] = f[i-1][0] + a[i][0];
	for (int j=1; j<W; j++)
		f[0][j] = f[0][j-1] + a[0][j];

	// [Computation]
	for (int i=1; i<H; i++)
		for (int j=1; j<W; j++)
			f[i][j] = max(f[i-1][j], f[i][j-1]) + a[i][j];

	// 輸出結果
	cout << "由(0,0)走到(7,7)的最小總和" << f[7][7];
//	cout << "由(0,0)走到(7,7)的最小總和" << f[H-1][W-1];

	int h, w;
	while (cin >> h >> w)
		cout << "由(0,0)走到(h,w)的最小總和" << f[h][w];
}
