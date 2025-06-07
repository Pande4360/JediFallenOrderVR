#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_GlobalData_Functions_func_Utility {
#pragma pack(push, 1)
struct func_Utility_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GenerateString(int32_t StringLength, _Script_CoreUObject::Object* __WorldContext, void*& String);
    void SortStringArrayAlphabetically(void*& Array, _Script_CoreUObject::Object* __WorldContext, void*& SortedArray);
    void CompareStringsForAlphabeticallyLater(void* String1, void* String2, _Script_CoreUObject::Object* __WorldContext, bool& String1IsLater);
    void SortNameArrayAlphabetically(void*& Array, _Script_CoreUObject::Object* __WorldContext, void*& SortedArray);
    void BitmaskHasFlag(int32_t Bitmask, int32_t TestFlag, _Script_CoreUObject::Object* __WorldContext, bool& Result);
    void BuildString_Object_Array_(void* Append_To, void* Index_Prefix, void* Join, void*& Array, void* Name_Suffix, _Script_CoreUObject::Object* __WorldContext, void*& String);
}; // Size: 0x28
#pragma pack(pop)
}
