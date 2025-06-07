#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationAsset.hpp"
#include "BlendSpaceBase.hpp"
int32_t& _Script_Engine::BlendSpaceBase::get_SampleIndexWithMarkers() {
    return *(int32_t*)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::BlendSpaceBase::get_bRotationBlendInMeshSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::BlendSpaceBase::set_bRotationBlendInMeshSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BlendSpaceBase::get_InterpolationParam() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::BlendSpaceBase::get_AnimLength() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_Engine::BlendSpaceBase::get_TargetWeightInterpolationSpeedPerSec() {
    return *(float*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::BlendSpaceBase::get_NotifyTriggerMode() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_Engine::BlendSpaceBase::get_PerBoneBlend() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::BlendSpaceBase::get_SampleData() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::BlendSpaceBase::get_GridSamples() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Engine::BlendSpaceBase::get_BlendParameters() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Engine::BlendSpaceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlendSpaceBase");
    return result;
}
