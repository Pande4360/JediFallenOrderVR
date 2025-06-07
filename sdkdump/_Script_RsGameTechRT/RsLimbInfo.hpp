#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsLimbInfo {
    private: char pad_0[0x28]; public:
    void* get_LimbTag();
    void* get_LimbColliders();
    void* get_LimbBone();
    float& get_StartingHealth();
    bool get_bAllowDamageAfterDestroy();
    void set_bAllowDamageAfterDestroy(bool value);
    bool get_bAlsoDamageParent();
    void set_bAlsoDamageParent(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
