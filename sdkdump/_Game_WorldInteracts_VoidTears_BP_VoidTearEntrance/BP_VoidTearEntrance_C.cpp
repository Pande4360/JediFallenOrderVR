#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_BP_SavePointVOID\BP_SavePointVOID_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt\BP_VoidTearAccessPt_C.hpp"
#include "BP_VoidTearEntrance_C.hpp"
#include "..\_Game_WorldInteracts_VoidTears_BP_VoidTearExit\BP_VoidTearExit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\RsStreamingDefinition.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::OnLoaded_DEDF70E147E60258AB00AFBD14B8C586(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::OnLoaded_DEDF70E147E60258AB00AFBD368FCB75(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LevelLoadComplete() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::set_IsMeditation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47a + 0);
    *(uint8_t*)((uintptr_t)this + 0x47a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::RsStreamingDefinition*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_MeditationStreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x390);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LeaveVoidTearEnterMeditation() {
    return;
}
_Script_Engine::RsStreamingDefinition*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_VoidLevelStreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x380);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LoadedStreamingDefinitions_A39664334A7C0B56A298CD807FFCD384(void*& Definitions) {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_ReturnTeleportPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_ZoneInteract() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x368);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LoadedStreamingDefinitions_A39664334A7C0B56A298CD805DCBDD77(void*& Definitions) {
    return;
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x370);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LoadVoidLevel() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::ExitVoidTear() {
    return;
}
float& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_StoredHealth() {
    return *(float*)((uintptr_t)this + 0x388);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LevelLoadComplete_Dispatcher__DelegateSignature() {
    return;
}
int32_t& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_StoredPots() {
    return *(int32_t*)((uintptr_t)this + 0x38c);
}
_Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_VoidTearExit() {
    return *(_Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C**)((uintptr_t)this + 0x398);
}
_Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_VoidTearAccessPt() {
    return *(_Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C**)((uintptr_t)this + 0x3a0);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_VoidTearID() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_MeditationID() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_Engine::RsStreamingDefinition*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_CurrentLevelStreamingDef() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x3b8);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_LevelNameToPlanet() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_LevelLoadComplete_Dispatcher() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_DEBUGStreamingLevel() {
    return (void*)((uintptr_t)this + 0x410);
}
_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_MantisSavePoint() {
    return *(_Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C**)((uintptr_t)this + 0x438);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/VoidTears/BP_VoidTearEntrance.BP_VoidTearEntrance_C");
    return result;
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_EnterVoidText() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_ExitVoidText() {
    return (void*)((uintptr_t)this + 0x458);
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_PlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x470);
}
bool _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_IsRespawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LVL_InteractedEvent_Event_0() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::set_IsRespawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_TeleportTransform() {
    return (void*)((uintptr_t)this + 0x4a0);
}
bool _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_TearTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::set_TearTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_IsMeditation() {
    return (*(uint8_t*)((uintptr_t)this + 0x47a + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_FadeInComplete() {
    return (void*)((uintptr_t)this + 0x490);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_Interact() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C**)((uintptr_t)this + 0x4d0);
}
bool _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::get_hasInteract_() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::set_hasInteract_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::setPlayerCineMode(bool On_) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::SetAllowXP(bool IsAllowed) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::RestorePlayerStatistics() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::ConnectWithVoidExit() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LevelUnloadComplete() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::UnloadVoidLevel() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::EnterVoidLevel(void* VoidTearID, bool IsRespawn, bool IsTearTransition) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::LeaveMeditationEnterVoidTear() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::ExecuteUbergraph_BP_VoidTearEntrance(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C::FadeInComplete__DelegateSignature() {
    return;
}
