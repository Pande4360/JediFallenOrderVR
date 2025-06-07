#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerController.hpp"
#include "SwMeditationTrainingCursor.hpp"
#include "SwMeditationTrainingGrid.hpp"
float& _Script_SwGame::SwMeditationTrainingCursor::get_Acceleration() {
    return *(float*)((uintptr_t)this + 0x388);
}
void* _Script_SwGame::SwMeditationTrainingCursor::get_MovementXInputName() {
    return (void*)((uintptr_t)this + 0x370);
}
void _Script_SwGame::SwMeditationTrainingCursor::SetForceMagnetEnabled(bool bInForceEnable) {
    return;
}
void* _Script_SwGame::SwMeditationTrainingCursor::get_MovementYInputName() {
    return (void*)((uintptr_t)this + 0x378);
}
float& _Script_SwGame::SwMeditationTrainingCursor::get_MovementInputDeadZone() {
    return *(float*)((uintptr_t)this + 0x380);
}
float& _Script_SwGame::SwMeditationTrainingCursor::get_MaxSpeed() {
    return *(float*)((uintptr_t)this + 0x384);
}
_Script_Engine::StaticMeshComponent*& _Script_SwGame::SwMeditationTrainingCursor::get_MeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x398);
}
float& _Script_SwGame::SwMeditationTrainingCursor::get_EnemyDetectionRadius() {
    return *(float*)((uintptr_t)this + 0x38c);
}
float& _Script_SwGame::SwMeditationTrainingCursor::get_OuterGridMovementBuffer() {
    return *(float*)((uintptr_t)this + 0x390);
}
_Script_Engine::Actor*& _Script_SwGame::SwMeditationTrainingCursor::get_Camera() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3a0);
}
_Script_SwGame::SwMeditationTrainingGrid*& _Script_SwGame::SwMeditationTrainingCursor::get_MeditationGrid() {
    return *(_Script_SwGame::SwMeditationTrainingGrid**)((uintptr_t)this + 0x3a8);
}
_Script_RsGameTechRT::RsPlayerController*& _Script_SwGame::SwMeditationTrainingCursor::get_PlayerController() {
    return *(_Script_RsGameTechRT::RsPlayerController**)((uintptr_t)this + 0x3b0);
}
bool _Script_SwGame::SwMeditationTrainingCursor::get_bEnableMagnet() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwMeditationTrainingCursor::set_bEnableMagnet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwMeditationTrainingCursor::get_MagnetForce() {
    return *(float*)((uintptr_t)this + 0x3bc);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingCursor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingCursor");
    return result;
}
void _Script_SwGame::SwMeditationTrainingCursor::SetMagnetTarget(_Script_CoreUObject::Vector& Location) {
    return;
}
