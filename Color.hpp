//! @brief 색상 코드 열거형
//! @note https://www.w3.org/wiki/CSS/Properties/color/keywords
//! @note RGB
enum class ColorCode : //! @brief 색상 코드 열거형
//! @note https://www.w3.org/wiki/CSS/Properties/color/keywords
//! @note ARGB
enum class ColorCode : uint32 {
    AliceBlue					= 0xFFF0F8FF,
    AntiqueWhite				= 0xFFFAEBD7,
    Aqua						= 0xFF00FFFF,
    AquaMarine					= 0xFF7FFFD4,
    Azure						= 0xFFF0FFFF,
    Beige						= 0xFFF5F5DC,
    Bisque						= 0xFFFFE4C4,
    Black						= 0xFF000000,
    BlanchDalmond				= 0xFFFFEBCD,
    Blue						= 0xFF0000FF,
    BlueViolet					= 0xFF8A2BE2,
    Brown						= 0xFFA52A2A,
    Burlywood					= 0xFFDEB887,
    CadetBlue					= 0xFF5F9EA0,
    Chartreuse					= 0xFF7FFFF0,
    Chocolate					= 0xFFD2691E,
    Coral						= 0xFFFF7F50,
    CornflowerBlue				= 0xFF6495ED,
    CornSilk					= 0xFFFFF8DC,
    Crimson						= 0xFFDC143C,
    Cyan						= 0xFF00FFFF,
    DarkBlue					= 0xFF00008B,
    DarkCyan					= 0xFF008B8B,
    DarkGoldenrod				= 0xFFB8860B,
    DarkGray					= 0xFFA9A9A9,
    DarkGreen					= 0xFF006400,
    DarkKhaki					= 0xFFBDB76B,
    DarkMagenta					= 0xFF8B008B,
    DarkOliveGreen				= 0xFF556B2F,
    DarkOrange					= 0xFFFF8C00,
    DarkOrchid					= 0xFF9932CC,
    DarkRed						= 0xFF8B0000,
    DarkSalmon					= 0xFFE9967A,
    DarkSeaGreen				= 0xFF8FBC8F,
    DarkSlateBlue				= 0xFF483D8B,
    DarkSlateGray				= 0xFF2F4F4F,
    DarkTurquoise				= 0xFF00CED1,
    DarkViolet					= 0xFF9400D3,
    DeepPink					= 0xFFFF1493,
    DeepSkyBlue					= 0xFF00BFFF,
    DimGray						= 0xFF696969,
    DodgerBlue					= 0xFF1E90FF,
    FireBrick					= 0xFFB22222,
    FloralWhite					= 0xFFFFFAF0,
    ForestGreen					= 0xFF228B22,
    Fuchisa						= 0xFFFF00FF,
    Gainsboro					= 0xFFDCDCDC,
    GhostWhite					= 0xFFF8F8FF,
    Gold						= 0xFFFFD700,
    Goldenrod					= 0xFFDAA520,
    Gray						= 0xFF808080,
    Green						= 0xFF008000,
    GreenYellow					= 0xFFADFF2F,
    Honeydew					= 0xFFF0FFF0,
    HotPink						= 0xFFFF69B4,
    IndianRed					= 0xFFCD5C5C,
    Indigo						= 0xFF4B0082,
    Ivory						= 0xFFFFFFF0,
    Khaki						= 0xFFF0E68C,
    Lavender					= 0xFFE6E6FA,
    LavenderBlush				= 0xFFFFF0F5,
    LawnGreen					= 0xFF7CFC00,
    LemonChiffon				= 0xFFFFFACD,
    LightBlue					= 0xFFADD8E6,
    LightCoral					= 0xFFF08080,
    LightCyan					= 0xFFE0FFFF,
    LightGoldenrodYellow		= 0xFFFAFAD2,
    LightGray					= 0xFFD3D3D3,
    LightGreen					= 0xFF90EE90,
    LightPink					= 0xFFFFB6C1,
    LightSalmon					= 0xFFFFA07A,
    LightSeaGreen				= 0xFF20B2AA,
    LightSkyBlue				= 0xFF87CEFA,
    LightSlateGray				= 0xFF778899,
    LightSteelBlue				= 0xFFB0C4DE,
    LightYellow					= 0xFFFFFFE0,
    Lime						= 0xFF00FF00,
    LimeGreen					= 0xFF32CD32,
    Linen						= 0xFFFAF0E6,
    Magenta						= 0xFFFF00FF,
    Maroon						= 0xFF800000,
    MediumAquaMarine			= 0xFF66CDAA,
    MediumBlue					= 0xFF0000CD,
    MediumOrchid				= 0xFFBA55D3,
    MediumPurple				= 0xFF9370DB,
    MediumSeaGreen				= 0xFF3CB371,
    MediumSlateBlue				= 0xFF7B68EE,
    MediumSpringGreen			= 0xFF00FA9A,
    MediumTurquoise				= 0xFF48D1CC,
    MediumVioletRed				= 0xFFC71585,
    MidnightBlue				= 0xFF191970,
    MintCream					= 0xFFF5FFFA,
    MistyRose					= 0xFFFFE4E1,
    Moccasin					= 0xFFFFE4B5,
    NavyjoWhite					= 0xFFFFDEAD,
    Navy						= 0xFF000080,
    OldLace						= 0xFFFDF5E6,
    Olive						= 0xFF808000,
    OliveDrab					= 0xFF6B8E23,
    Orange						= 0xFFFFA500,
    OrangeRed					= 0xFFFF4500,
    Orchid						= 0xFFDA70D6,
    PaleGoldenrod				= 0xFFEEE8AA,
    PaleGreen					= 0xFF98FB98,
    PaleTurquoise				= 0xFFAFEEEE,
    PaleVioletRed				= 0xFFDB7093,
    PapayaWhip					= 0xFFFFEFD5,
    PeachPuff					= 0xFFFFDAB9,
    Peru						= 0xFFCD853F,
    Pink						= 0xFFFFC0CB,
    Plum						= 0xFFDDA0DD,
    PowderBlue					= 0xFFB0E0E6,
    Purple						= 0xFF800080,
    Red							= 0xFFFF0000,
    RosyBrown					= 0xFFBC8F8F,
    RoyalBlue					= 0xFF4169E1,
    SaddleBrown					= 0xFF8B4513,
    Salmon						= 0xFFFA8072,
    SandyBrown					= 0xFFF4A460,
    SeaGreen					= 0xFF2E8B57,
    SeaShell					= 0xFFFFF5EE,
    Sienna						= 0xFFA0522D,
    Silver						= 0xFFC0C0C0,
    SkyBlue						= 0xFF87CEEB,
    SlateBlue					= 0xFF6A5ACD,
    SlateGray					= 0xFF708090,
    Snow						= 0xFFFFFAFA,
    SpringGreen					= 0xFF00FF7F,
    SteelBlue					= 0xFF4682B4,
    Tan							= 0xFFD2B48C,
    Teal						= 0xFF008080,
    Thistle						= 0xFFD8BFD8,
    Tomato						= 0xFFFF6347,
    Turquoise					= 0xFF40E0D0,
    Violet						= 0xFFEE82EE,
    Wheat						= 0xFFF5DEB3,
    White						= 0xFFFFFFFF,
    WhiteSmoke					= 0xFFF5F5F5,
    Yellow						= 0xFFFFFF00,
    YellowGreen					= 0xFF9ACD32,
}; {
    AliceBlue					= 0xF0F8FF,
    AntiqueWhite				= 0xFAEBD7,
    Aqua						= 0x00FFFF,
    AquaMarine					= 0x7FFFD4,
    Azure						= 0xF0FFFF,
    Beige						= 0xF5F5DC,
    Bisque						= 0xFFE4C4,
    Black						= 0x000000,
    BlanchDalmond				= 0xFFEBCD,
    Blue						= 0x0000FF,
    BlueViolet					= 0x8A2BE2,
    Brown						= 0xA52A2A,
    Burlywood					= 0xDEB887,
    CadetBlue					= 0x5F9EA0,
    Chartreuse					= 0x7FFFF0,
    Chocolate					= 0xD2691E,
    Coral						= 0xFF7F50,
    CornflowerBlue				= 0x6495ED,
    CornSilk					= 0xFFF8DC,
    Crimson						= 0xDC143C,
    Cyan						= 0x00FFFF,
    DarkBlue					= 0x00008B,
    DarkCyan					= 0x008B8B,
    DarkGoldenrod				= 0xB8860B,
    DarkGray					= 0xA9A9A9,
    DarkGreen					= 0x006400,
    DarkKhaki					= 0xBDB76B,
    DarkMagenta					= 0x8B008B,
    DarkOliveGreen				= 0x556B2F,
    DarkOrange					= 0xFF8C00,
    DarkOrchid					= 0x9932CC,
    DarkRed						= 0x8B0000,
    DarkSalmon					= 0xE9967A,
    DarkSeaGreen				= 0x8FBC8F,
    DarkSlateBlue				= 0x483D8B,
    DarkSlateGray				= 0x2F4F4F,
    DarkTurquoise				= 0x00CED1,
    DarkViolet					= 0x9400D3,
    DeepPink					= 0xFF1493,
    DeepSkyBlue					= 0x00BFFF,
    DimGray						= 0x696969,
    DodgerBlue					= 0x1E90FF,
    FireBrick					= 0xB22222,
    FloralWhite					= 0xFFFAF0,
    ForestGreen					= 0x228B22,
    Fuchisa						= 0xFF00FF,
    Gainsboro					= 0xDCDCDC,
    GhostWhite					= 0xF8F8FF,
    Gold						= 0xFFD700,
    Goldenrod					= 0xDAA520,
    Gray						= 0x808080,
    Green						= 0x008000,
    GreenYellow					= 0xADFF2F,
    Honeydew					= 0xF0FFF0,
    HotPink						= 0xFF69B4,
    IndianRed					= 0xCD5C5C,
    Indigo						= 0x4B0082,
    Ivory						= 0xFFFFF0,
    Khaki						= 0xF0E68C,
    Lavender					= 0xE6E6FA,
    LavenderBlush				= 0xFFF0F5,
    LawnGreen					= 0x7CFC00,
    LemonChiffon				= 0xFFFACD,
    LightBlue					= 0xADD8E6,
    LightCoral					= 0xF08080,
    LightCyan					= 0xE0FFFF,
    LightGoldenrodYellow		= 0xFAFAD2,
    LightGray					= 0xD3D3D3,
    LightGreen					= 0x90EE90,
    LightPink					= 0xFFB6C1,
    LightSalmon					= 0xFFA07A,
    LightSeaGreen				= 0x20B2AA,
    LightSkyBlue				= 0x87CEFA,
    LightSlateGray				= 0x778899,
    LightSteelBlue				= 0xB0C4DE,
    LightYellow					= 0xFFFFE0,
    Lime						= 0x00FF00,
    LimeGreen					= 0x32CD32,
    Linen						= 0xFAF0E6,
    Magenta						= 0xFF00FF,
    Maroon						= 0x800000,
    MediumAquaMarine			= 0x66CDAA,
    MediumBlue					= 0x0000CD,
    MediumOrchid				= 0xBA55D3,
    MediumPurple				= 0x9370DB,
    MediumSeaGreen				= 0x3CB371,
    MediumSlateBlue				= 0x7B68EE,
    MediumSpringGreen			= 0x00FA9A,
    MediumTurquoise				= 0x48D1CC,
    MediumVioletRed				= 0xC71585,
    MidnightBlue				= 0x191970,
    MintCream					= 0xF5FFFA,
    MistyRose					= 0xFFE4E1,
    Moccasin					= 0xFFE4B5,
    NavyjoWhite					= 0xFFDEAD,
    Navy						= 0x000080,
    OldLace						= 0xFDF5E6,
    Olive						= 0x808000,
    OliveDrab					= 0x6B8E23,
    Orange						= 0xFFA500,
    OrangeRed					= 0xFF4500,
    Orchid						= 0xDA70D6,
    PaleGoldenrod				= 0xEEE8AA,
    PaleGreen					= 0x98FB98,
    PaleTurquoise				= 0xAFEEEE,
    PaleVioletRed				= 0xDB7093,
    PapayaWhip					= 0xFFEFD5,
    PeachPuff					= 0xFFDAB9,
    Peru						= 0xCD853F,
    Pink						= 0xFFC0CB,
    Plum						= 0xDDA0DD,
    PowderBlue					= 0xB0E0E6,
    Purple						= 0x800080,
    Red							= 0xFF0000,
    RosyBrown					= 0xBC8F8F,
    RoyalBlue					= 0x4169E1,
    SaddleBrown					= 0x8B4513,
    Salmon						= 0xFA8072,
    SandyBrown					= 0xF4A460,
    SeaGreen					= 0x2E8B57,
    SeaShell					= 0xFFF5EE,
    Sienna						= 0xA0522D,
    Silver						= 0xC0C0C0,
    SkyBlue						= 0x87CEEB,
    SlateBlue					= 0x6A5ACD,
    SlateGray					= 0x708090,
    Snow						= 0xFFFAFA,
    SpringGreen					= 0x00FF7F,
    SteelBlue					= 0x4682B4,
    Tan							= 0xD2B48C,
    Teal						= 0x008080,
    Thistle						= 0xD8BFD8,
    Tomato						= 0xFF6347,
    Turquoise					= 0x40E0D0,
    Violet						= 0xEE82EE,
    Wheat						= 0xF5DEB3,
    White						= 0xFFFFFF,
    WhiteSmoke					= 0xF5F5F5,
    Yellow						= 0xFFFF00,
    YellowGreen					= 0x9ACD32,
};

//! @brief 색상 코드 열거형
//! @note https://www.w3.org/wiki/CSS/Properties/color/keywords
//! @note ARGB
enum class ColorCode : unsigned int {
    AliceBlue					= 0xFFF0F8FF,
    AntiqueWhite				= 0xFFFAEBD7,
    Aqua						= 0xFF00FFFF,
    AquaMarine					= 0xFF7FFFD4,
    Azure						= 0xFFF0FFFF,
    Beige						= 0xFFF5F5DC,
    Bisque						= 0xFFFFE4C4,
    Black						= 0xFF000000,
    BlanchDalmond				= 0xFFFFEBCD,
    Blue						= 0xFF0000FF,
    BlueViolet					= 0xFF8A2BE2,
    Brown						= 0xFFA52A2A,
    Burlywood					= 0xFFDEB887,
    CadetBlue					= 0xFF5F9EA0,
    Chartreuse					= 0xFF7FFFF0,
    Chocolate					= 0xFFD2691E,
    Coral						= 0xFFFF7F50,
    CornflowerBlue				= 0xFF6495ED,
    CornSilk					= 0xFFFFF8DC,
    Crimson						= 0xFFDC143C,
    Cyan						= 0xFF00FFFF,
    DarkBlue					= 0xFF00008B,
    DarkCyan					= 0xFF008B8B,
    DarkGoldenrod				= 0xFFB8860B,
    DarkGray					= 0xFFA9A9A9,
    DarkGreen					= 0xFF006400,
    DarkKhaki					= 0xFFBDB76B,
    DarkMagenta					= 0xFF8B008B,
    DarkOliveGreen				= 0xFF556B2F,
    DarkOrange					= 0xFFFF8C00,
    DarkOrchid					= 0xFF9932CC,
    DarkRed						= 0xFF8B0000,
    DarkSalmon					= 0xFFE9967A,
    DarkSeaGreen				= 0xFF8FBC8F,
    DarkSlateBlue				= 0xFF483D8B,
    DarkSlateGray				= 0xFF2F4F4F,
    DarkTurquoise				= 0xFF00CED1,
    DarkViolet					= 0xFF9400D3,
    DeepPink					= 0xFFFF1493,
    DeepSkyBlue					= 0xFF00BFFF,
    DimGray						= 0xFF696969,
    DodgerBlue					= 0xFF1E90FF,
    FireBrick					= 0xFFB22222,
    FloralWhite					= 0xFFFFFAF0,
    ForestGreen					= 0xFF228B22,
    Fuchisa						= 0xFFFF00FF,
    Gainsboro					= 0xFFDCDCDC,
    GhostWhite					= 0xFFF8F8FF,
    Gold						= 0xFFFFD700,
    Goldenrod					= 0xFFDAA520,
    Gray						= 0xFF808080,
    Green						= 0xFF008000,
    GreenYellow					= 0xFFADFF2F,
    Honeydew					= 0xFFF0FFF0,
    HotPink						= 0xFFFF69B4,
    IndianRed					= 0xFFCD5C5C,
    Indigo						= 0xFF4B0082,
    Ivory						= 0xFFFFFFF0,
    Khaki						= 0xFFF0E68C,
    Lavender					= 0xFFE6E6FA,
    LavenderBlush				= 0xFFFFF0F5,
    LawnGreen					= 0xFF7CFC00,
    LemonChiffon				= 0xFFFFFACD,
    LightBlue					= 0xFFADD8E6,
    LightCoral					= 0xFFF08080,
    LightCyan					= 0xFFE0FFFF,
    LightGoldenrodYellow		= 0xFFFAFAD2,
    LightGray					= 0xFFD3D3D3,
    LightGreen					= 0xFF90EE90,
    LightPink					= 0xFFFFB6C1,
    LightSalmon					= 0xFFFFA07A,
    LightSeaGreen				= 0xFF20B2AA,
    LightSkyBlue				= 0xFF87CEFA,
    LightSlateGray				= 0xFF778899,
    LightSteelBlue				= 0xFFB0C4DE,
    LightYellow					= 0xFFFFFFE0,
    Lime						= 0xFF00FF00,
    LimeGreen					= 0xFF32CD32,
    Linen						= 0xFFFAF0E6,
    Magenta						= 0xFFFF00FF,
    Maroon						= 0xFF800000,
    MediumAquaMarine			= 0xFF66CDAA,
    MediumBlue					= 0xFF0000CD,
    MediumOrchid				= 0xFFBA55D3,
    MediumPurple				= 0xFF9370DB,
    MediumSeaGreen				= 0xFF3CB371,
    MediumSlateBlue				= 0xFF7B68EE,
    MediumSpringGreen			= 0xFF00FA9A,
    MediumTurquoise				= 0xFF48D1CC,
    MediumVioletRed				= 0xFFC71585,
    MidnightBlue				= 0xFF191970,
    MintCream					= 0xFFF5FFFA,
    MistyRose					= 0xFFFFE4E1,
    Moccasin					= 0xFFFFE4B5,
    NavyjoWhite					= 0xFFFFDEAD,
    Navy						= 0xFF000080,
    OldLace						= 0xFFFDF5E6,
    Olive						= 0xFF808000,
    OliveDrab					= 0xFF6B8E23,
    Orange						= 0xFFFFA500,
    OrangeRed					= 0xFFFF4500,
    Orchid						= 0xFFDA70D6,
    PaleGoldenrod				= 0xFFEEE8AA,
    PaleGreen					= 0xFF98FB98,
    PaleTurquoise				= 0xFFAFEEEE,
    PaleVioletRed				= 0xFFDB7093,
    PapayaWhip					= 0xFFFFEFD5,
    PeachPuff					= 0xFFFFDAB9,
    Peru						= 0xFFCD853F,
    Pink						= 0xFFFFC0CB,
    Plum						= 0xFFDDA0DD,
    PowderBlue					= 0xFFB0E0E6,
    Purple						= 0xFF800080,
    Red							= 0xFFFF0000,
    RosyBrown					= 0xFFBC8F8F,
    RoyalBlue					= 0xFF4169E1,
    SaddleBrown					= 0xFF8B4513,
    Salmon						= 0xFFFA8072,
    SandyBrown					= 0xFFF4A460,
    SeaGreen					= 0xFF2E8B57,
    SeaShell					= 0xFFFFF5EE,
    Sienna						= 0xFFA0522D,
    Silver						= 0xFFC0C0C0,
    SkyBlue						= 0xFF87CEEB,
    SlateBlue					= 0xFF6A5ACD,
    SlateGray					= 0xFF708090,
    Snow						= 0xFFFFFAFA,
    SpringGreen					= 0xFF00FF7F,
    SteelBlue					= 0xFF4682B4,
    Tan							= 0xFFD2B48C,
    Teal						= 0xFF008080,
    Thistle						= 0xFFD8BFD8,
    Tomato						= 0xFFFF6347,
    Turquoise					= 0xFF40E0D0,
    Violet						= 0xFFEE82EE,
    Wheat						= 0xFFF5DEB3,
    White						= 0xFFFFFFFF,
    WhiteSmoke					= 0xFFF5F5F5,
    Yellow						= 0xFFFFFF00,
    YellowGreen					= 0xFF9ACD32,
};

//! @brief Get the color code.
//! @param a Alpha(0~255)
//! @param r Red(0~255)
//! @param g Green(0~255)
//! @param b Blue(0~255)
//! @param the color code. ex) Red(255), Green(0), Blue(0), Alpha(255) ==> 0xFFFF0000 (4,294,901,760)
static inline const unsigned int GetColorCode(int a, int r, int g, int b) noexept {
  return ((a & 0xFF) << 24) | ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | ((b & 0xFF));
}

//! @brief get the color value
//! @param color ColorCode
//! @param a Alpha
//! @param r Red
//! @param g Green
//! @param b Blue
static inline void GetColorValue(unsigned int color, int* a, int* r, int* g, int* b) noexcept {
  if (a != nullptr) /* if (a != NULL) */ {
    *a = (int)((color >> 24) & 0xFF);
  }
  
  if (r != nullptr) /* if (r != NULL) */ {
    *r = (int)((color >> 16) & 0xFF);
  }
  
  if (g != nullptr) /* if (g != NULL) */ {
    *g = (int)((color >> 8) & 0xFF);
  }
  
  if (b != nullptr) /* if (b != NULL) */ {
    *b = (int)((color) & 0xFF);
  }
}