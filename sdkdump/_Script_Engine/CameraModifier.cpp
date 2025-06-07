#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "CameraModifier.hpp"
#include "PlayerCameraManager.hpp"
#include "PostProcessSettings.hpp"
bool _Script_Engine::CameraModifier::get_bDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::CameraModifier::set_bDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CameraModifier::get_bExclusive() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
void _Script_Engine::CameraModifier::set_bExclusive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::CameraModifier::get_Priority() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_Engine::PlayerCameraManager*& _Script_Engine::CameraModifier::get_CameraOwner() {
    return *(_Script_Engine::PlayerCameraManager**)((uintptr_t)this + 0x30);
}
float& _Script_Engine::CameraModifier::get_AlphaInTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::CameraModifier::get_AlphaOutTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::CameraModifier::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::CameraModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraModifier");
    return result;
}
bool _Script_Engine::CameraModifier::IsDisabled() {
    return;
}
_Script_Engine::Actor* _Script_Engine::CameraModifier::GetViewTarget() {
    return;
}
void _Script_Engine::CameraModifier::EnableModifier() {
    return;
}
void _Script_Engine::CameraModifier::DisableModifier(bool bImmediate) {
    return;
}
void _Script_Engine::CameraModifier::BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, _Script_Engine::PostProcessSettings& PostProcessSettings) {
    return;
}
void _Script_Engine::CameraModifier::BlueprintModifyCamera(float DeltaTime, _Script_CoreUObject::Vector ViewLocation, _Script_CoreUObject::Rotator ViewRotation, float FOV, _Script_CoreUObject::Vector& NewViewLocation, _Script_CoreUObject::Rotator& NewViewRotation, float& NewFOV) {
    return;
}
