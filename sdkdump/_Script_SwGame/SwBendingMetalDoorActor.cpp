#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapDoorComponent.hpp"
#include "SwBendingMetalDoorActor.hpp"
bool _Script_SwGame::SwBendingMetalDoorActor::get_SetToForceIgnoredWhenDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x369 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_SaveGameType() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Script_SwGame::SwBendingMetalDoorActor::set_EnableDebugDrawForAxes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x371 + 0);
    *(uint8_t*)((uintptr_t)this + 0x371 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwBendingMetalDoorActor::set_SetToForceIgnoredWhenDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x369 + 0);
    *(uint8_t*)((uintptr_t)this + 0x369 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwBendingMetalDoorActor::get_EnableDebugDrawForAxes() {
    return (*(uint8_t*)((uintptr_t)this + 0x371 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_InitialPosition() {
    return *(float*)((uintptr_t)this + 0x36c);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_ForwardDirectionAxis() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Script_SwGame::SwBendingMetalDoorActor::get_ReactOnForcePush() {
    return (*(uint8_t*)((uintptr_t)this + 0x372 + 0)) & 1 != 0;
}
void _Script_SwGame::SwBendingMetalDoorActor::set_ReactOnForcePush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x372 + 0);
    *(uint8_t*)((uintptr_t)this + 0x372 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_ForcePushInitialVelocity() {
    return *(float*)((uintptr_t)this + 0x374);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_ForcePushMovementDampingCoef() {
    return *(float*)((uintptr_t)this + 0x378);
}
bool _Script_SwGame::SwBendingMetalDoorActor::get_ReactOnForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x37c + 0)) & 1 != 0;
}
void _Script_SwGame::SwBendingMetalDoorActor::set_ReactOnForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37c + 0);
    *(uint8_t*)((uintptr_t)this + 0x37c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_ForcePullMode() {
    return (void*)((uintptr_t)this + 0x37d);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_ForcePullInitialVelocity() {
    return *(float*)((uintptr_t)this + 0x380);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_ForcePullMovementDampingCoef() {
    return *(float*)((uintptr_t)this + 0x384);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_ForcePush_MovementOscillation() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_ForcePush_FinishOscillation() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_ForcePull_MovementOscillation() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_ForcePull_FinishOscillation() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Script_RsGameTechRT::RsWorldMapDoorComponent*& _Script_SwGame::SwBendingMetalDoorActor::get_WorldMapDoorComponent() {
    return *(_Script_RsGameTechRT::RsWorldMapDoorComponent**)((uintptr_t)this + 0x3c8);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_GoBackToInitialPositionAfterTime() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_GoBackToInitialPositionVelocity() {
    return *(float*)((uintptr_t)this + 0x3d4);
}
void* _Script_SwGame::SwBendingMetalDoorActor::get_OnFullyOpenedEvent() {
    return (void*)((uintptr_t)this + 0x3d8);
}
_Script_Engine::SkeletalMeshComponent*& _Script_SwGame::SwBendingMetalDoorActor::get_TargetSkeletalMeshComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3e8);
}
float& _Script_SwGame::SwBendingMetalDoorActor::get_m_SavedPosition() {
    return *(float*)((uintptr_t)this + 0x3f0);
}
int32_t& _Script_SwGame::SwBendingMetalDoorActor::get_m_SavedEncountersInstance() {
    return *(int32_t*)((uintptr_t)this + 0x3f4);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBendingMetalDoorActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBendingMetalDoorActor");
    return result;
}
void _Script_SwGame::SwBendingMetalDoorActor::TriggerPushMovement(_Script_Engine::Actor* BendingMetalDoorActor, float DirectionMultiplier, float PushInitialVelocity) {
    return;
}
