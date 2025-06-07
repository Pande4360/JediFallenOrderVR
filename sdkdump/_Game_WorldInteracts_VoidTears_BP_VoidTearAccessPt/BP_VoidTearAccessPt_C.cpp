#include "..\FUObjectArray.hpp"
#include "..\_Game_GlobalData_Economy_BPC_RewardComponent\BPC_RewardComponent_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "BP_VoidTearAccessPt_C.hpp"
#include "..\_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance\BP_VoidTearEntrance_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
void* _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_VoidID() {
    return (void*)((uintptr_t)this + 0x4d8);
}
_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_VoidTearEntrance() {
    return *(_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C**)((uintptr_t)this + 0x4d0);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_PlayerSpawnLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x4c8);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_LVL_FadeInComplete() {
    return (void*)((uintptr_t)this + 0x4e0);
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_Text() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x4c0);
}
_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_BPC_RewardComponent() {
    return *(_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C**)((uintptr_t)this + 0x4b8);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x4b0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/VoidTears/BP_VoidTearAccessPt.BP_VoidTearAccessPt_C");
    return result;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::ExitVoid() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::LVL_ChallengeCompleted() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::SyncEnded0(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::Interacted() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::FadeInComplete() {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::ExecuteUbergraph_BP_VoidTearAccessPt(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C::LVL_FadeInComplete__DelegateSignature() {
    return;
}
