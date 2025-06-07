#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CameraAnim.hpp"
#include "CameraAnimInst.hpp"
#include "CameraShake.hpp"
#include "MinimalViewInfo.hpp"
#include "PlayerCameraManager.hpp"
float& _Script_Engine::CameraShake::get_OscillationBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::CameraShake::get_bSingleInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_Engine::CameraShake::get_RotOscillation() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::CameraShake::set_bSingleInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::CameraShake::get_OscillationDuration() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_Engine::CameraAnim*& _Script_Engine::CameraShake::get_Anim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::CameraShake::get_OscillationBlendInTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::CameraShake::get_FOVOscillation() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::CameraShake::get_LocOscillation() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::CameraShake::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_Engine::CameraShake::get_AnimScale() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::CameraShake::get_AnimBlendInTime() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_Engine::CameraShake::get_AnimBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::CameraShake::get_RandomAnimSegmentDuration() {
    return *(float*)((uintptr_t)this + 0x9c);
}
bool _Script_Engine::CameraShake::get_bRandomAnimSegment() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::CameraShake::set_bRandomAnimSegment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::PlayerCameraManager*& _Script_Engine::CameraShake::get_CameraOwner() {
    return *(_Script_Engine::PlayerCameraManager**)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::CameraShake::get_ShakeScale() {
    return *(float*)((uintptr_t)this + 0x148);
}
float& _Script_Engine::CameraShake::get_OscillatorTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x14c);
}
_Script_Engine::CameraAnimInst*& _Script_Engine::CameraShake::get_AnimInst() {
    return *(_Script_Engine::CameraAnimInst**)((uintptr_t)this + 0x150);
}
void _Script_Engine::CameraShake::ReceiveStopShake(bool bImmediately) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::CameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraShake");
    return result;
}
void _Script_Engine::CameraShake::ReceivePlayShake(float Scale) {
    return;
}
bool _Script_Engine::CameraShake::ReceiveIsFinished() {
    return;
}
void _Script_Engine::CameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, _Script_Engine::MinimalViewInfo& POV, _Script_Engine::MinimalViewInfo& ModifiedPOV) {
    return;
}
