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
struct AnimNode_ModifyBone : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x48]; public:
    void* get_BoneToModify();
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    void* get_TranslationMode();
    void* get_RotationMode();
    void* get_ScaleMode();
    void* get_TranslationSpace();
    void* get_RotationSpace();
    void* get_ScaleSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
