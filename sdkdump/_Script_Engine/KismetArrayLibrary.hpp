#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetArrayLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetArrayPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void FilterArray(void*& TargetArray, void* FilterClass, void*& FilteredArray);
    void Array_Swap(void*& TargetArray, int32_t FirstIndex, int32_t SecondIndex);
    void Array_Shuffle(void*& TargetArray);
    void Array_Set(void*& TargetArray, int32_t Index, int32_t& Item, bool bSizeToFit);
    void Array_Resize(void*& TargetArray, int32_t Size);
    bool Array_RemoveItem(void*& TargetArray, int32_t& Item);
    void Array_Remove(void*& TargetArray, int32_t IndexToRemove);
    int32_t Array_Length(void*& TargetArray);
    int32_t Array_LastIndex(void*& TargetArray);
    bool Array_IsValidIndex(void*& TargetArray, int32_t IndexToTest);
    void Array_Insert(void*& TargetArray, int32_t& NewItem, int32_t Index);
    void Array_Get(void*& TargetArray, int32_t Index, int32_t& Item);
    int32_t Array_Find(void*& TargetArray, int32_t& ItemToFind);
    bool Array_Contains(void*& TargetArray, int32_t& ItemToFind);
    void Array_Clear(void*& TargetArray);
    void Array_Append(void*& TargetArray, void*& SourceArray);
    int32_t Array_AddUnique(void*& TargetArray, int32_t& NewItem);
    int32_t Array_Add(void*& TargetArray, int32_t& NewItem);
}; // Size: 0x28
#pragma pack(pop)
}
