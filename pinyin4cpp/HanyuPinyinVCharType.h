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

#ifndef HANYUPINYINVCHARTYPE_H
#define HANYUPINYINVCHARTYPE_H
#include <wstring>
#include "pinyin4cpp_global.h"


/**
 * The option indicates that the output of 'ü' is "u:"
 */
const wstring  HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_AND_COLON= "WITH_U_AND_COLON";
/**
 * The option indicates that the output of 'ü' is "v"
 */
const wstring  HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_V="WITH_V";
/**
 * The option indicates that the output of 'ü' is "ü" in Unicode form
 */
const wstring  HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_UNICODE="WITH_U_UNICODE";

class PINYIN4CPPSHARED_EXPORT HanyuPinyinVCharType{
public:
    HanyuPinyinVCharType();
    HanyuPinyinVCharType(wstring name);
    static HanyuPinyinVCharType *WITH_U_AND_COLON;
    static HanyuPinyinVCharType *WITH_V;
    static HanyuPinyinVCharType *WITH_U_UNICODE;

    wstring getName();
    void setName(wstring name);
private:
    wstring mName;
};

#endif // HANYUPINYINVCHARTYPE_H
