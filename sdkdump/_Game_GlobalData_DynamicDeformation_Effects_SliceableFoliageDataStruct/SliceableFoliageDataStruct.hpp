#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_DynamicDeformation_Effects_SliceableFoliageDataStruct {
#pragma pack(push, 1)
struct SliceableFoliageDataStruct {
    private: char pad_0[0x28]; public:
    void* get_StaticMesh_9_2A1F997D461E56D72F18CF870EC2596E();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
