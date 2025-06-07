#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ScalarParameterAtlasInstanceData {
    private: char pad_0[0x58]; public:
    bool get_bIsUsedAsAtlasPosition();
    void set_bIsUsedAsAtlasPosition(bool value);
    void* get_Curve();
    void* get_Atlas();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
