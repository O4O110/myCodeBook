/*
1.	問從左上角走到右下角有幾種解法
-	此問題可分為(1)往下(2)往右，兩個走法。
*/
const int H = 8, W = 8;
int f[2][W];    // 兩條陣列，儲存最近算出來的問題答案。

void staircase_walk()
{	    // [Initial States]
    for (int j=0; j<W; ++j) f[0][j] = 1;

    // [Computation]
    for (int i=1; i<H; i++)
       for (int j=1; j<W; j++)
           // 只是多了 mod 2，
          // 外觀看起來就像兩條陣列輪替使用。
         f[i % 2][j] = f[(i-1) % 2][j] + f[i % 2][j-1];
	
	    // 輸出結果
	    cout << "由(0,0)走到(7,7)有" << f[7 % 2][7] << "種走法";
	//  cout << "由(0,0)走到(7,7)有" << f[(H-1) % 2][W-1] << "種走法";
}
