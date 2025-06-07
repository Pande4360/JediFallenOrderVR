#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraVariableMetaData {
    private: char pad_0[0x98]; public:
    void* get_PropertyMetaData();
    void* get_Description();
    void* get_CategoryName();
    int32_t& get_EditorSortPriority();
    int32_t& get_CallSortPriority();
    void* get_ReferencerNodes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
