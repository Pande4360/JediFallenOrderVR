#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithTessellationOptions {
    private: char pad_0[0xc]; public:
    float& get_ChordTolerance();
    float& get_MaxEdgeLength();
    float& get_NormalTolerance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
