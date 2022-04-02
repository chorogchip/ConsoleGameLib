#ifndef CH_CL_ENUMCOLOR_H
#define CH_CL_ENUMCOLOR_H

namespace ch { namespace cl {
////////////////////////////////////////////////////////////
/// \brief 색깔을 나타내는 Enum Class 이다.
////////////////////////////////////////////////////////////
enum class EnumColor : int {
  BLACK        = 0,
  BLUE_DARK    = 1,
  GREEN_DARK   = 2,
  SKYBLUE_DARK = 3,
  RED_DARK     = 4,
  PURPLE_DARK  = 5,
  YELLOW_DARK  = 6,
  GREY         = 7,
  GREY_DARK    = 8,
  BLUE         = 9,
  GREEN        = 10,
  SKYBLUE      = 11,
  RED          = 12,
  PURPLE       = 13,
  YELLOW       = 14,
  WHITE        = 15,
};  // EnumColor
}}  // namespace ch::cl

#endif  // CH_CL_ENUMCOLOR_H