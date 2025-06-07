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
struct ParticleModuleLocationBoneSocket : public ParticleModuleLocationBase {
    private: char pad_30[0x40]; public:
    void* get_SourceType();
    void* get_UniversalOffset();
    void* get_SourceLocations();
    void* get_SelectionMethod();
    bool get_bUpdatePositionEachFrame();
    void set_bUpdatePositionEachFrame(bool value);
    bool get_bOrientMeshEmitters();
    void set_bOrientMeshEmitters(bool value);
    bool get_bInheritBoneVelocity();
    void set_bInheritBoneVelocity(bool value);
    float& get_InheritVelocityScale();
    void* get_SkelMeshActorParamName();
    int32_t& get_NumPreSelectedIndices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
