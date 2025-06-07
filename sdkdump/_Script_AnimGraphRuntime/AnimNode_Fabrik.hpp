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
struct AnimNode_Fabrik : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x100]; public:
    void* get_EffectorTransform();
    void* get_EffectorTransformSpace();
    void* get_EffectorTransformBone();
    void* get_EffectorTarget();
    void* get_EffectorRotationSource();
    void* get_TipBone();
    void* get_RootBone();
    float& get_Precision();
    int32_t& get_MaxIterations();
    bool get_bEnableDebugDraw();
    void set_bEnableDebugDraw(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1f0
#pragma pack(pop)
}
