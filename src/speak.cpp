/**
 * @file speak.cpp
 * @brief 音声を喋らせる
 * @author naokichi
 * @date 2023/02/27
 * @note 実行ファイルと同じディレクトリにArgumentSpeak.vbsを配置してください
 */

#include <speak.h>

/**
 * @brief メッセージを喋らせる
 * @param msg 喋らせるメッセージの文字列
 */
void Speak(const std::string msg) {
  std::string command = "start ArgumentSpeak.vbs " + msg;
  std::system(command.c_str());
}