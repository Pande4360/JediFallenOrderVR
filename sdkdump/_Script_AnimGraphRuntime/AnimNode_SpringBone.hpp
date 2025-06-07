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
struct AnimNode_SpringBone : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x68]; public:
    void* get_SpringBone();
    bool get_bLimitDisplacement();
    void set_bLimitDisplacement(bool value);
    float& get_MaxDisplacement();
    float& get_SpringStiffness();
    float& get_SpringDamping();
    float& get_ErrorResetThresh();
    bool get_bNoZSpring();
    void set_bNoZSpring(bool value);
    bool get_bTranslateX();
    void set_bTranslateX(bool value);
    bool get_bTranslateY();
    void set_bTranslateY(bool value);
    bool get_bTranslateZ();
    void set_bTranslateZ(bool value);
    bool get_bRotateX();
    void set_bRotateX(bool value);
    bool get_bRotateY();
    void set_bRotateY(bool value);
    bool get_bRotateZ();
    void set_bRotateZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
