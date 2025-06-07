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
struct RsIKOverride {
    private: char pad_0[0x100]; public:
    void* get_IkBone();
    void* get_IkGoal();
    void* get_OffsetBoneNameOverride();
    bool get_bPlaceOffsetBoneAtGoal();
    void set_bPlaceOffsetBoneAtGoal(bool value);
    bool get_bIgnoreForHipOffset();
    void set_bIgnoreForHipOffset(bool value);
    bool get_bOverrideBlendInTime();
    void set_bOverrideBlendInTime(bool value);
    float& get_CustomBlendInTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
