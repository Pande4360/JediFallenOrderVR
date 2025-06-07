#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBoneDefinition.hpp"
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_SurfacePlaneBone() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_BoneType() {
    return (void*)((uintptr_t)this + 0x49);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_OffsetBone() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_SurfacePlaneNormalAxis() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_RsGameTechRT::RsIKBoneDefinition::get_bShouldEverEffectHips() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_MinDeltaRotationAllowed() {
    return (void*)((uintptr_t)this + 0x4c);
}
void _Script_RsGameTechRT::RsIKBoneDefinition::set_bShouldEverEffectHips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_MaxDeltaRotationAllowed() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsGameTechRT::RsIKBoneDefinition::get_bDisableCollisionTrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKBoneDefinition::set_bDisableCollisionTrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_Shape() {
    return (void*)((uintptr_t)this + 0x65);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_Extents() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_Offset() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_RsGameTechRT::RsIKBoneDefinition::get_bTraceFromProjectionOnSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0xbd + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsIKBoneDefinition::get_TraceDirection() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_RsGameTechRT::RsIKBoneDefinition::get_bUseSurfaceNormalAsTraceDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKBoneDefinition::set_bUseSurfaceNormalAsTraceDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsIKBoneDefinition::set_bTraceFromProjectionOnSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbd + 0);
    *(uint8_t*)((uintptr_t)this + 0xbd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKBoneDefinition::get_TraceDistAwayFromSurface() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_RsGameTechRT::RsIKBoneDefinition::get_TraceDistTowardsSurface() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_RsGameTechRT::RsIKBoneDefinition::get_TraceMaxSlopeAngle() {
    return *(float*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBoneDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsIKBoneDefinition");
    return result;
}
