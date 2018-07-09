// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <time.h>
#include <Windows.h>
#include <iostream>
#include <list>
#include <algorithm>

#include "consoleUtil.h"
using namespace std;

enum JANKEN {
	GU,
	CHYOKI,
	PA
};

// ジャンケンの試合回数
#define KAI 10

// 判定用配列1
static int JResult[3][3] = {{0,1,2},{2,0,1},{1,2,0} };
// 試合結果格納List
static list<int> GResult;

// Plaayer1勝利回数 p1r
static int p1r;
// Plaayer2勝利回数 p1r
static int p2r;

// TODO: プログラムに必要な追加ヘッダーをここで参照してください
