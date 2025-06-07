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
struct AssetBundleEntry {
    private: char pad_0[0x28]; public:
    void* get_BundleScope();
    void* get_BundleName();
    void* get_BundleAssets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
