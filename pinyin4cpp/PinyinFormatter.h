#ifndef PINYINFORMATTER_H
#define PINYINFORMATTER_H
#include <wstring>
#include "HanyuPinyinOutputFormat.h"

class PinyinFormatter{
public:
    static wstring formatHanyuPinyin(wstring pinyinStr,HanyuPinyinOutputFormat *outputFormat);
private:

};
#endif // PINYINFORMATTER_H
