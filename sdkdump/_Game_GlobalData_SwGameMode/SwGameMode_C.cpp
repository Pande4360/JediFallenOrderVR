#include "..\FUObjectArray.hpp"
#include "SwGameMode_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DecalActor.hpp"
#include "..\_Script_Engine\PostProcessVolume.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsGameMode.hpp"
_Script_Engine::DecalActor*& _Game_GlobalData_SwGameMode::SwGameMode_C::get_VoidSkillBranches() {
    return *(_Script_Engine::DecalActor**)((uintptr_t)this + 0x5b8);
}
_Script_Engine::SceneComponent*& _Game_GlobalData_SwGameMode::SwGameMode_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x558);
}
void* _Game_GlobalData_SwGameMode::SwGameMode_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x550);
}
void* _Game_GlobalData_SwGameMode::SwGameMode_C::get_Checkpoint() {
    return (void*)((uintptr_t)this + 0x560);
}
float& _Game_GlobalData_SwGameMode::SwGameMode_C::get_playerHalfHeight() {
    return *(float*)((uintptr_t)this + 0x590);
}
void* _Game_GlobalData_SwGameMode::SwGameMode_C::get_Mus_World_State_Scripted() {
    return (void*)((uintptr_t)this + 0x598);
}
void* _Game_GlobalData_SwGameMode::SwGameMode_C::get_OnDifficultyLevelChanged() {
    return (void*)((uintptr_t)this + 0x5a0);
}
_Script_Engine::PostProcessVolume*& _Game_GlobalData_SwGameMode::SwGameMode_C::get_VoidSavePPV() {
    return *(_Script_Engine::PostProcessVolume**)((uintptr_t)this + 0x5b0);
}
_Script_CoreUObject::Class* _Game_GlobalData_SwGameMode::SwGameMode_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/SwGameMode.SwGameMode_C");
    return result;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::UserConstructionScript() {
    return;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::SetDifficultyLevel(void* Difficulty) {
    return;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::ReceiveBeginPlay() {
    return;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::ExecuteUbergraph_SwGameMode(int32_t EntryPoint) {
    return;
}
void _Game_GlobalData_SwGameMode::SwGameMode_C::OnDifficultyLevelChanged__DelegateSignature() {
    return;
}
