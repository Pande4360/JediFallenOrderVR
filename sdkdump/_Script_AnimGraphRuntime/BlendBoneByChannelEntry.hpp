#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct BlendBoneByChannelEntry {
    private: char pad_0[0x38]; public:
    void* get_SourceBone();
    void* get_TargetBone();
    bool get_bBlendTranslation();
    void set_bBlendTranslation(bool value);
    bool get_bBlendRotation();
    void set_bBlendRotation(bool value);
    bool get_bBlendScale();
    void set_bBlendScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
