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
struct RsIKBoneDefinition {
    private: char pad_0[0xd0]; public:
    void* get_Bone();
    void* get_SurfacePlaneBone();
    void* get_OffsetBone();
    void* get_SurfacePlaneNormalAxis();
    void* get_BoneType();
    bool get_bShouldEverEffectHips();
    void set_bShouldEverEffectHips(bool value);
    void* get_MinDeltaRotationAllowed();
    void* get_MaxDeltaRotationAllowed();
    bool get_bDisableCollisionTrace();
    void set_bDisableCollisionTrace(bool value);
    void* get_Shape();
    void* get_Extents();
    void* get_Offset();
    void* get_TraceDirection();
    bool get_bUseSurfaceNormalAsTraceDirection();
    void set_bUseSurfaceNormalAsTraceDirection(bool value);
    bool get_bTraceFromProjectionOnSurface();
    void set_bTraceFromProjectionOnSurface(bool value);
    float& get_TraceDistAwayFromSurface();
    float& get_TraceDistTowardsSurface();
    float& get_TraceMaxSlopeAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
