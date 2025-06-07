#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CurveTable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CompositeCurveTable : public CurveTable {
    private: char pad_98[0x20]; public:
    void* get_ParentTables();
    void* get_OldParentTables();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
