#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_CopyBone : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x38]; public:
    void* get_SourceBone();
    void* get_TargetBone();
    bool get_bCopyTranslation();
    void set_bCopyTranslation(bool value);
    bool get_bCopyRotation();
    void set_bCopyRotation(bool value);
    bool get_bCopyScale();
    void set_bCopyScale(bool value);
    void* get_ControlSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
