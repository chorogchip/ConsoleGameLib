#include "CsCon.h"

namespace ch { namespace cl {

void CsCon::setConsoleTitle(const char* title) {
  std::string str;
  str += "title ";
  str += std::string(title);
  system(str.c_str());
}

void CsCon::setConsoleSize(int window_x, int window_y) {
  std::string str;
  str += "mode con: cols=";
  str += std::to_string(window_x);
  str += " lines=";
  str += std::to_string(window_y);
  system(str.c_str());
}

void CsCon::clearColsole() {
  system("cls");
}

void CsCon::setConcoleColor(EnumColor background_color, EnumColor text_color) {
  std::string str = "color ";
  int i_bk = static_cast<int>(background_color);
  int i_tx = static_cast<int>(text_color);
  char c_bk = i_bk <= 9 ? static_cast<char>(i_bk + '0') : static_cast<char>(i_bk - 10 + 'A');
  char c_tx = i_tx <= 9 ? static_cast<char>(i_tx + '0') : static_cast<char>(i_tx - 10 + 'A');
  str += c_bk;
  str += c_tx;
  system(str.c_str());
}

void CsCon::sleep(unsigned long miliseconds) {
  Sleep(miliseconds);
}

void CsCon::setMouseVisible(bool is_mouse_visible) {
   CONSOLE_CURSOR_INFO cursor = { 0, };
   cursor.dwSize = 1;
   if(is_mouse_visible) {
     cursor.bVisible = TRUE;
   } else {
     cursor.bVisible = FALSE;
   }
   SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}

}}  // namespace ch::cl