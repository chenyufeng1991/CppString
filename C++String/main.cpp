//
//  main.cpp
//  C++String
//
//  Created by chenyufeng on 8/9/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string str("chenyufeng",3);
    cout << str << endl;

    string str2("chenyufeng",2,3);
    cout << str2 << endl;

    // = :字符串赋值
    str2 = "Robert";
    cout << str2 << endl;

    // swap:交换两个字符串的值
    string string1 = "chen";
    string string2 = "yufeng";
    swap(string1, string2);
    cout << "string1 = " << string1 << ";string2 = " << string2 << endl;

    // += ,append：在尾部添加字符串
    string stringOrigin = "chen";
    string stringAppend = "yufeng";
    stringOrigin = stringOrigin + stringAppend;
    cout << "stringOrigin = " << stringOrigin << endl;

    stringOrigin.append("_OK");
    cout << "stringOriginAppend = " << stringOrigin << endl;

    // insert：在指定position插入字符串
    string stringInsertOrigin = "chenyufeng";
    stringInsertOrigin.insert(3, "__");
    cout << "stringInsertOrigin = " << stringInsertOrigin << endl;

    // erase: 删除字符
    string stringEraseOrigin = "chenyufeng";
    stringEraseOrigin.erase();
    cout << "stringEraseOrigin = " << stringEraseOrigin << endl;

    // clear ：删除全部字符
    string stringClearOrigin = "chenyufeng";
    stringClearOrigin.clear();
    cout << "stringClearOrigin = " << stringClearOrigin << endl;

    // replace: 替换字符串,某个pos位置开始的size个字符替换成后面的“”字符串
    string stringReplaceOrigin = "chenyufeng";
    stringReplaceOrigin.replace(3, 2, "66");
    cout << "stringReplaceOrigin = " << stringReplaceOrigin << endl;

    // ==，<,>,<=,>=:比较字符串
    string stringLeft = "zhen";
    string stringRight = "yufeng";
    if (stringLeft == stringRight)
    {
        cout << "equal" << endl;
    }

    if (stringLeft != stringRight)
    {
        cout << "not equal" << endl;
    }

    if (stringLeft < stringRight)
    {
        cout << "stringLeft < stringRight" << endl;
    }

    if (stringLeft > stringRight)
    {
        cout << "stringLeft > stringRight" << endl;
    }

    // size(), length():计算字符串长度
    string stringCount = "chenyufeng";
    cout << "stringSize = " << stringCount.size() << endl;
    cout << "stringLength = " << stringCount.length() << endl;

    // empty():判断字符串是否为空
    string stringIsEmpty = "";
    string stringNotEmpty = "chen";
    if (stringIsEmpty.empty())
    {
        cout << "stringIsEmpty == empty" << endl;
    }
    else
    {
        cout << "stringIsEmpty != empty" << endl;
    }

    if (stringNotEmpty.empty())
    {
        cout << "stringNotEmpty == empty" << endl;
    }
    else
    {
        cout << "stringNotEmpty != empty" << endl;
    }

    // 输入输出stream
    cout << "请输入一个字符串"<<endl;
    string stringInput;
    cin >> stringInput;
    cout << "stringInput = " << stringInput << endl;

    // max_size:
    string stringMaxSize;
    cout << "stringMaxSize = " << stringMaxSize.max_size() << endl;

    // [],at() :元素存取
    string stringAt = "chenyufeng";
    cout << "stringAt[3] = " <<stringAt[3] << endl;
    cout << "stringAt.at(3) = " << stringAt.at(3) << endl;

    stringAt[3] = '6';
    stringAt.at(5) = '9';
    cout << "stringAt = " << stringAt << endl;

    // compare()
    string stringCompare = "chenyufeng";
    int aaa = stringCompare.compare("chen"); // > 0
    int bbb = stringCompare.compare("chenyufeng"); // == 0
    int ccc = stringCompare.compare("done"); // < 0
    cout << "aaa = " << aaa << ";bbb = " << bbb << ";ccc = " << ccc << endl;

    // substr
    string stringSubstr = "chenyufeng";
    // 从索引为4开始的3个字符
    cout << "stringSubstr.substr(4,3) = " << stringSubstr.substr(4,3) << endl;

    // 从索引为4开始的所有字符
    cout << "stringSubstr.substr(4) = " <<stringSubstr.substr(4) << endl;

    // 整个字符
    cout << "stringSubstr.substr() = " <<stringSubstr.substr() << endl;

    // find
    string stringFind = "chenyufeng";
    int index = (int)stringFind.find('n');
    cout << "stringFind.find('n') = " << index << endl;
    cout << "stringFind.find_first_of('e') = " << stringFind.find_first_of('e') << endl;
    cout << "stringFind.find_last_of('e') = " << stringFind.find_last_of('e') << endl;

    return 0;
}
