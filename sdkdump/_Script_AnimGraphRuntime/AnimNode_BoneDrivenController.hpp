#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_BoneDrivenController : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x78]; public:
    void* get_SourceBone();
    void* get_SourceComponent();
    _Script_Engine::CurveFloat*& get_DrivingCurve();
    float& get_Multiplier();
    bool get_bUseRange();
    void set_bUseRange(bool value);
    float& get_RangeMin();
    float& get_RangeMax();
    float& get_RemappedMin();
    float& get_RemappedMax();
    void* get_DestinationMode();
    void* get_ParameterName();
    void* get_TargetBone();
    void* get_TargetComponent();
    bool get_bAffectTargetTranslationX();
    void set_bAffectTargetTranslationX(bool value);
    bool get_bAffectTargetTranslationY();
    void set_bAffectTargetTranslationY(bool value);
    bool get_bAffectTargetTranslationZ();
    void set_bAffectTargetTranslationZ(bool value);
    bool get_bAffectTargetRotationX();
    void set_bAffectTargetRotationX(bool value);
    bool get_bAffectTargetRotationY();
    void set_bAffectTargetRotationY(bool value);
    bool get_bAffectTargetRotationZ();
    void set_bAffectTargetRotationZ(bool value);
    bool get_bAffectTargetScaleX();
    void set_bAffectTargetScaleX(bool value);
    bool get_bAffectTargetScaleY();
    void set_bAffectTargetScaleY(bool value);
    bool get_bAffectTargetScaleZ();
    void set_bAffectTargetScaleZ(bool value);
    void* get_ModificationMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
