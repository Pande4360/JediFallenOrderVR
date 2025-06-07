#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "RsFallingKillRelocator.hpp"
float& _Script_SwGame::RsFallingKillRelocator::get_ThreatAvoidanceRadius() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
void* _Script_SwGame::RsFallingKillRelocator::get_OnPlayerStartTeleporting() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::RsFallingKillRelocator::get_OnPlayerTeleported() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_SwGame::RsFallingKillRelocator::get_OnFindingRespawnPointFailure() {
    return (void*)((uintptr_t)this + 0x190);
}
float& _Script_SwGame::RsFallingKillRelocator::get_EdgeAvoidanceRadius() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
float& _Script_SwGame::RsFallingKillRelocator::get_QueryHalfGridSize() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
float& _Script_SwGame::RsFallingKillRelocator::get_QueryGridSpan() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
int32_t& _Script_SwGame::RsFallingKillRelocator::get_EdgeAvoidanceTestsNum() {
    return *(int32_t*)((uintptr_t)this + 0x1ac);
}
float& _Script_SwGame::RsFallingKillRelocator::get_ThreatAvoidanceCoefficient() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
float& _Script_SwGame::RsFallingKillRelocator::get_MaxTrackBackTime() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
int32_t& _Script_SwGame::RsFallingKillRelocator::get_TrackBackInterval() {
    return *(int32_t*)((uintptr_t)this + 0x1bc);
}
float& _Script_SwGame::RsFallingKillRelocator::get_TrackBackMinDistance() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsFallingKillRelocator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsFallingKillRelocator");
    return result;
}
void _Script_SwGame::RsFallingKillRelocator::TeleportPlayerToLastAvailableLocation(void*& Result, float DamageAmount, void* DamageTypeClass, float Delay) {
    return;
}
void _Script_SwGame::RsFallingKillRelocator::StopRecordingUntilTeleported() {
    return;
}
void _Script_SwGame::RsFallingKillRelocator::OnTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
bool _Script_SwGame::RsFallingKillRelocator::HasStoppedRecording() {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::RsFallingKillRelocator::GetBestRelocationPoint() {
    return;
}
void _Script_SwGame::RsFallingKillRelocator::ClearHistoryAndSetRelocationPoint(_Script_CoreUObject::Vector& InLocation, _Script_CoreUObject::Rotator& InRotation, bool bClampToGround) {
    return;
}
void _Script_SwGame::RsFallingKillRelocator::ClearHistoryAndSetRelocationComponent(_Script_Engine::SceneComponent* InComponent, bool bClampToGround) {
    return;
}
