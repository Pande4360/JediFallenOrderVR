#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "CheatManager.hpp"
#include "DebugCameraController.hpp"
_Script_Engine::DebugCameraController*& _Script_Engine::CheatManager::get_DebugCameraControllerRef() {
    return *(_Script_Engine::DebugCameraController**)((uintptr_t)this + 0x28);
}
void _Script_Engine::CheatManager::DestroyAll(void* aClass) {
    return;
}
void _Script_Engine::CheatManager::LogLoc() {
    return;
}
void _Script_Engine::CheatManager::ViewActor(void* ActorName) {
    return;
}
void _Script_Engine::CheatManager::DumpStreamingLevelsMemoryInfo() {
    return;
}
void* _Script_Engine::CheatManager::get_DebugCameraControllerClass() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::CheatManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CheatManager");
    return result;
}
void _Script_Engine::CheatManager::Walk() {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweepSize(float HalfHeight, float Radius) {
    return;
}
void _Script_Engine::CheatManager::ViewSelf() {
    return;
}
void _Script_Engine::CheatManager::ViewPlayer(void* S) {
    return;
}
void _Script_Engine::CheatManager::ViewClass(void* DesiredClass) {
    return;
}
void _Script_Engine::CheatManager::UpdateSafeArea() {
    return;
}
void _Script_Engine::CheatManager::DumpLevelMemoryInfo(void* LevelName) {
    return;
}
void _Script_Engine::CheatManager::ServerToggleAILogging() {
    return;
}
void _Script_Engine::CheatManager::UnpauseLevelStreaming() {
    return;
}
void _Script_Engine::CheatManager::Summon(void* ClassName) {
    return;
}
void _Script_Engine::CheatManager::ToggleStreamingFailsafeTestMode() {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweepComplex(bool bTraceComplex) {
    return;
}
void _Script_Engine::CheatManager::ToggleServerStatReplicatorUpdateStatNet() {
    return;
}
void _Script_Engine::CheatManager::ToggleServerStatReplicatorClientOverwrite() {
    return;
}
void _Script_Engine::CheatManager::DestroyTarget() {
    return;
}
void _Script_Engine::CheatManager::ToggleDebugCamera() {
    return;
}
void _Script_Engine::CheatManager::ToggleAILogging() {
    return;
}
void _Script_Engine::CheatManager::God() {
    return;
}
void _Script_Engine::CheatManager::TestCollisionDistance() {
    return;
}
void _Script_Engine::CheatManager::Teleport() {
    return;
}
void _Script_Engine::CheatManager::StreamLevelOut(void* PackageName) {
    return;
}
void _Script_Engine::CheatManager::StreamLevelIn(void* PackageName) {
    return;
}
void _Script_Engine::CheatManager::SpawnServerStatReplicator() {
    return;
}
void _Script_Engine::CheatManager::Slomo(float NewTimeDilation) {
    return;
}
void _Script_Engine::CheatManager::SetWorldOrigin() {
    return;
}
void _Script_Engine::CheatManager::SetStreamingFailsafeTestMode(bool bEnable) {
    return;
}
void _Script_Engine::CheatManager::SetMouseSensitivityToDefault() {
    return;
}
void _Script_Engine::CheatManager::ReceiveInitCheatManager() {
    return;
}
void _Script_Engine::CheatManager::ReceiveEndPlay() {
    return;
}
void _Script_Engine::CheatManager::PlayersOnly() {
    return;
}
void _Script_Engine::CheatManager::PauseLevelStreaming() {
    return;
}
void _Script_Engine::CheatManager::OnlyLoadLevel(void* PackageName) {
    return;
}
void _Script_Engine::CheatManager::LogStreamingLevels() {
    return;
}
void _Script_Engine::CheatManager::InvertMouse() {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweep() {
    return;
}
void _Script_Engine::CheatManager::Ghost() {
    return;
}
void _Script_Engine::CheatManager::FreezeFrame(float Delay) {
    return;
}
void _Script_Engine::CheatManager::Fly() {
    return;
}
void _Script_Engine::CheatManager::FlushLog() {
    return;
}
void _Script_Engine::CheatManager::EnableDebugCamera() {
    return;
}
void _Script_Engine::CheatManager::DumpVoiceMutingState() {
    return;
}
void _Script_Engine::CheatManager::DumpPartyState() {
    return;
}
void _Script_Engine::CheatManager::DumpOnlineSessionState() {
    return;
}
void _Script_Engine::CheatManager::DumpChatState() {
    return;
}
void _Script_Engine::CheatManager::DisableDebugCamera() {
    return;
}
void _Script_Engine::CheatManager::DestroyServerStatReplicator() {
    return;
}
void _Script_Engine::CheatManager::DestroyPawns(void* aClass) {
    return;
}
void _Script_Engine::CheatManager::DestroyAllPawnsExceptTarget() {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweepPawn() {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweepClear() {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweepChannel(void* Channel) {
    return;
}
void _Script_Engine::CheatManager::DebugCapsuleSweepCapture() {
    return;
}
void _Script_Engine::CheatManager::DamageTarget(float DamageAmount) {
    return;
}
void _Script_Engine::CheatManager::ClearLevelStreamingStatus(void* PackageName) {
    return;
}
void _Script_Engine::CheatManager::CheatScript(void* ScriptName) {
    return;
}
void _Script_Engine::CheatManager::BugItStringCreator(_Script_CoreUObject::Vector ViewLocation, _Script_CoreUObject::Rotator ViewRotation, void*& GoString, void*& LocString) {
    return;
}
void _Script_Engine::CheatManager::ChangeSize(float F) {
    return;
}
void _Script_Engine::CheatManager::BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) {
    return;
}
void _Script_Engine::CheatManager::BugIt(void* ScreenShotDescription) {
    return;
}
