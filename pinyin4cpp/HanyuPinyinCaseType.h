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

#ifndef HANYUPINYINCASETYPE_H
#define HANYUPINYINCASETYPE_H
#include<wstring>
#include "pinyin4cpp_global.h"

/**
 * The option indicates that hanyu pinyin is outputted as uppercase letters
 */
const wstring HAN_YU_PIN_YIN_CASE_TYPE_UPPERCASE = "UPPERCASE";
/**
 * The option indicates that hanyu pinyin is outputted as lowercase letters
 */
const wstring HAN_YU_PIN_YIN_CASE_TYPE_LOWERCASE = "LOWERCASE";

class PINYIN4CPPSHARED_EXPORT HanyuPinyinCaseType{
public:
    HanyuPinyinCaseType();
    static HanyuPinyinCaseType *UPPERCASE;
    static HanyuPinyinCaseType *LOWERCASE;
    wstring getName();
protected:
    HanyuPinyinCaseType(wstring name);
    void setName(wstring name);
private:
    wstring mName;
};

#endif // HANYUPINYINCASETYPE_H
