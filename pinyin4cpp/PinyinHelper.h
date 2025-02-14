/*
 * Copyright 2015 handsomezhou & Li Min
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PINYINHELPER_H
#define PINYINHELPER_H
#include <wchar.h>
#include <QList>
#include "HanyuPinyinOutputFormat.h"
#include "pinyin4cpp_global.h"

class PINYIN4CPPSHARED_EXPORT PinyinHelper{
public:
    static void toHanyuPinyinStringArray(wchar_t  ch, HanyuPinyinOutputFormat *outputFormat, vector<wstring>*pinyinList);
private:
    PinyinHelper();
    static void getFormattedHanyuPinyinStringArray(wchar_t  ch, HanyuPinyinOutputFormat *outputFormat, vector<wstring>*pinyinList);
    static void getUnformattedHanyuPinyinStringArray(wchar_t  ch, vector<wstring>*pinyinList);

};

#endif // PINYINHELPER_H
