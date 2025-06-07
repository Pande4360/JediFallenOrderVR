#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "DebugCameraController.hpp"
#include "DrawFrustumComponent.hpp"
#include "HitResult.hpp"
#include "PlayerController.hpp"
bool _Script_Engine::DebugCameraController::get_bShowSelectedInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d0 + 0)) & 1 != 0;
}
float& _Script_Engine::DebugCameraController::get_SpeedScale() {
    return *(float*)((uintptr_t)this + 0x700);
}
_Script_Engine::DrawFrustumComponent*& _Script_Engine::DebugCameraController::get_DrawFrustum() {
    return *(_Script_Engine::DrawFrustumComponent**)((uintptr_t)this + 0x6d8);
}
void _Script_Engine::DebugCameraController::set_bShowSelectedInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DebugCameraController::get_bIsFrozenRendering() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d0 + 0)) & 2 != 0;
}
void _Script_Engine::DebugCameraController::set_bIsFrozenRendering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::DebugCameraController::get_InitialAccel() {
    return *(float*)((uintptr_t)this + 0x708);
}
float& _Script_Engine::DebugCameraController::get_InitialMaxSpeed() {
    return *(float*)((uintptr_t)this + 0x704);
}
float& _Script_Engine::DebugCameraController::get_InitialDecel() {
    return *(float*)((uintptr_t)this + 0x70c);
}
_Script_CoreUObject::Class* _Script_Engine::DebugCameraController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DebugCameraController");
    return result;
}
void _Script_Engine::DebugCameraController::ToggleDisplay() {
    return;
}
void _Script_Engine::DebugCameraController::ShowDebugSelectedInfo() {
    return;
}
void _Script_Engine::DebugCameraController::SetPawnMovementSpeedScale(float NewSpeedScale) {
    return;
}
void _Script_Engine::DebugCameraController::ReceiveOnDeactivate(_Script_Engine::PlayerController* RestoredPC) {
    return;
}
void _Script_Engine::DebugCameraController::ReceiveOnActorSelected(_Script_Engine::Actor* NewSelectedActor, _Script_CoreUObject::Vector& SelectHitLocation, _Script_CoreUObject::Vector& SelectHitNormal, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_Engine::DebugCameraController::ReceiveOnActivate(_Script_Engine::PlayerController* OriginalPC) {
    return;
}
_Script_Engine::Actor* _Script_Engine::DebugCameraController::GetSelectedActor() {
    return;
}
