// このサンプルの実行にはefontが必要です。
// need efont to run this example.
//
// URL : https://github.com/tanakamasayuki/efont
//

// 使用する文字セットに応じたヘッダをincludeします。
// Include a header corresponding to the character set used.
//#include <efontEnableAll.h>
//#include <efontEnableAscii.h>
//#include <efontEnableCJK.h>
//#include <efontEnableCn.h>
#include <efontEnableJa.h>
//#include <efontEnableJaMini.h>
//#include <efontEnableKr.h>
//#include <efontEnableTw.h>

// efontのフォントデータをincludeします。
// Include the font data of efont.
#include <efontFontData.h>

#define LGFX_M5PAPER

// LovyanGFXより先に efontのincludeが必要です。
// need to include efont before LovyanGFX.
#include <LovyanGFX.hpp>

static LGFX lcd;

void setup()
{
  lcd.init();

  // setFont関数に引数efontを指定すると、printやdrawString等でefontを使用できます。
  lcd.setFont(&fonts::efont);

  lcd.setTextWrap(true, true);
}

void loop()
{
  lcd.setTextColor(0, 0xFFFFFF);
  lcd.setTextSize(2,2);

  lcd.setCursor(45,350);
  lcd.print("YUKI.N> みえてる？");
  delay(10000);
}

