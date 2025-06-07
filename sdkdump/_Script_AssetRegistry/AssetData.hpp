#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AssetRegistry {
#pragma pack(push, 1)
struct AssetData {
    private: char pad_0[0x50]; public:
    void* get_ObjectPath();
    void* get_PackageName();
    void* get_PackagePath();
    void* get_AssetName();
    void* get_AssetClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
