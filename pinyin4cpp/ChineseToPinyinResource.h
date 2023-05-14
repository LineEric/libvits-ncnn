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

#ifndef CHINESETOPINYINRESOURCE_H
#define CHINESETOPINYINRESOURCE_H
#include <wchar.h>
#include <wstring> //NULL
#include <wstringList>
#include <QHashIterator>

static wstring TEXT_FILE_RESOURCE_PATH = ":/pinyin4cpp/res/text_file/unicode_to_hanyu_pinyin.txt";
static wstring LEFT_BRACKET="(";
static wstring RIGHT_BRACKET=")";
static wstring COMMA=",";

class ChineseToPinyinResource{
public:
    ~ChineseToPinyinResource();
    static ChineseToPinyinResource* getInstance();
    void getHanyuPinyinStringArray(wchar_t  ch, vector<wstring>*pinyinList);
    void freeResource();
private:
    static ChineseToPinyinResource *instance;
    QHash<wstring, wstring> *hanyuPinyinHash;
    ChineseToPinyinResource();
    void initializeResource();
    wstring getHanyuPinyinRecordFromChar(wchar_t  ch);
    bool isValidRecord(wstring record);
};

#endif // CHINESETOPINYINRESOURCE_H
