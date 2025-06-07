#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsAnimationAsset {
    private: char pad_0[0x40]; public:
    void* get_Path();
    _Script_CoreUObject::Object*& get_Asset();
    void* get_Name();
    bool get_m_pathOverride();
    void set_m_pathOverride(bool value);
    int32_t& get_m_assetIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
