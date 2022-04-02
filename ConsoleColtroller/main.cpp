
#include "ConcoleGameLib.h"

using namespace ch::cl;

int main(int argc, char* argv[]) {

  printf("aaa");
  CsCon::setConcoleColor(EnumColor::BLACK, EnumColor::RED);
  printf("1sdasdassdd");
  CsCon::sleep(1000);
  CsCon::setConsoleSize(100, 40);
  CsCon::sleep(1000);
  printf("2");
  CsCon::setMouseVisible(false);
  CsCon::sleep(1000);
  printf("3");
  CsCon::setConcoleColor(EnumColor::BLACK, EnumColor::YELLOW);
  printf("asdasd");
  CsCon::sleep(100000);

  return 0;
}
