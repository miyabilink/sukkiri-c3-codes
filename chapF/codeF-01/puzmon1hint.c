/*=== puzmon1hint: ゲーム全体の流れの実装 ===*/
/*** インクルード宣言 ***/

#include <stdio.h>

/*** 列挙型宣言 ***/

/*** グローバル定数の宣言 ***/

/*** 構造体型宣言 ***/

/*** プロトタイプ宣言 ***/

// HINT: goDungeon関数のプロトタイプ宣言
// HINT: doBattle関数のプロトタイプ宣言

/*** 関数宣言 ***/

// (1)ゲーム開始から終了までの流れ
int main(int argc, char** argv)
{
  // HINT: もし起動時のコマンドライン引数の数が異常なら{
  // HINT:     エラーメッセージを表示して異常終了
  // HINT: }

  printf("*** Puzzle & Monsters ***\n");

  // いざ、ダンジョンへ
  // HINT: ダンジョンに行く関数を呼び出し、勝利数を戻り値で得る

  // 冒険終了後
  // HINT: 勝利数が5なら {
  // HINT:     ゲームクリアの表示をする
  // HINT: } そうでないなら {
  // HINT:     ゲームオーバーの表示をする
  // HINT: }

  // HINT: 倒したモンスター数を表示する
  return 0;
}

// (2)ダンジョン開始から終了までの流れ
int goDungeon(/* HINT: プレイヤー名 */)
{
  // HINT:「○○はダンジョンに到着した」と表示する

  // HINT: 勝利数を格納する変数を準備し0にセットする
  // HINT: スライムと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  // HINT: ゴブリンと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  // HINT: オオコウモリと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  // HINT: ウェアウルフと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す
  // HINT: ドラゴンと戦うバトルを実行する関数を呼び出し、結果を勝利数に足す

  // HINT: 「○○はダンジョンを制覇した！」と表示する
  return /* HINT: 勝利数 */;
}

// (3)バトル開始から終了までの流れ
int doBattle(/* HINT: プレイヤー名 */ , /* 敵の名前 */)
{
  // HINT: 「××が現れた」と表示する

  // （ダミー戦闘で即勝利確定）

  // HINT: 「××を倒した！」と表示する
  return 1;   // 倒した敵の数（常に1）を返す
}

/*** ユーティリティ関数宣言 ***/
