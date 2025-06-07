#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleLocationSkelVertSurface : public ParticleModuleLocationBase {
    private: char pad_30[0x60]; public:
    void* get_SourceType();
    void* get_UniversalOffset();
    bool get_bUpdatePositionEachFrame();
    void set_bUpdatePositionEachFrame(bool value);
    bool get_bOrientMeshEmitters();
    void set_bOrientMeshEmitters(bool value);
    bool get_bInheritBoneVelocity();
    void set_bInheritBoneVelocity(bool value);
    float& get_InheritVelocityScale();
    void* get_SkelMeshActorParamName();
    void* get_ValidAssociatedBones();
    bool get_bEnforceNormalCheck();
    void set_bEnforceNormalCheck(bool value);
    void* get_NormalToCompare();
    float& get_NormalCheckToleranceDegrees();
    float& get_NormalCheckTolerance();
    void* get_ValidMaterialIndices();
    bool get_bInheritVertexColor();
    void set_bInheritVertexColor(bool value);
    bool get_bInheritUV();
    void set_bInheritUV(bool value);
    void* get_InheritUVChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
