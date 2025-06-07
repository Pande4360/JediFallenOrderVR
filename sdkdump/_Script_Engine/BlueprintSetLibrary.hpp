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
struct BlueprintSetLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetSetPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void Set_Union(void*& A, void*& B, void*& Result);
    void Set_ToArray(void*& A, void*& Result);
    void Set_RemoveItems(void*& TargetSet, void*& Items);
    bool Set_Remove(void*& TargetSet, int32_t& Item);
    int32_t Set_Length(void*& TargetSet);
    void Set_Intersection(void*& A, void*& B, void*& Result);
    void Set_Difference(void*& A, void*& B, void*& Result);
    bool Set_Contains(void*& TargetSet, int32_t& ItemToFind);
    void Set_Clear(void*& TargetSet);
    void Set_AddItems(void*& TargetSet, void*& NewItems);
    void Set_Add(void*& TargetSet, int32_t& NewItem);
}; // Size: 0x28
#pragma pack(pop)
}
