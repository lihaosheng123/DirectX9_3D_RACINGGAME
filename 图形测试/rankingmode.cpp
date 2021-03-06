#include "main.h"
#include "ranking.h"
#include "fade.h"
#include "input.h"
#include "keyboard.h"
//=============================================================================
//  関数名　：InitRankingMode
//  機能概要：プリゴンの初期化
//  戻り値　：
//=============================================================================
void InitRankingMode (void)
{
	InitRanking();
}
//=============================================================================
//  関数名　：UninitRankingMode
//  機能概要：プリゴンの終了処理
//  戻り値　：
//=============================================================================
void UninitRankingMode(void)
{
	UninitRanking();
}
//=============================================================================
//  関数名　：DrawRankingMode
//  機能概要：プリゴンの描画処理
//  戻り値　：
//=============================================================================
void DrawRankingMode(void)
{
	DrawRanking();

}
//=============================================================================
//  関数名　：UpdateRankingMode
//  機能概要：プリゴンの更新処理
//  戻り値　：
//=============================================================================
void UpdateRankingMode(void)
{
	UpdateRanking();
		if(GetKeyboardTrigger(DIK_RETURN))
		{
			SetFade(FADE_OUT,MODE_TITLE);
		}
}