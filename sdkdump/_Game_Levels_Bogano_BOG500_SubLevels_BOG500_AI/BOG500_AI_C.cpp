#include "..\FUObjectArray.hpp"
#include "BOG500_AI_C.hpp"
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacterSpawner.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
void* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_POI_DarksoulsBog2_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x390);
}
float& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_tunnelWaitTime() {
    return *(float*)((uintptr_t)this + 0x370);
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::set_darksoulsBogTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_TunnelFailTimer() {
    return (void*)((uintptr_t)this + 0x378);
}
bool _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_darksoulsBogTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner45_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x398);
}
_Game_WorldInteracts_AI_BP_POI::BP_POI_C*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_POI_DarksoulsBog_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Game_WorldInteracts_AI_BP_POI::BP_POI_C**)((uintptr_t)this + 0x388);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner42_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3a0);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner34_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3d0);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner40_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3a8);
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::CrabIntroVOAlso(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner44_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3b0);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner43_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3b8);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner41_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3c0);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::get_RsAISimpleSpawner33_ExecuteUbergraph_BOG500_AI_RefProperty() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG500/SubLevels/BOG500_AI.BOG500_AI_C");
    return result;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::BndEvt__T_DarksoulsBog_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::BndEvt__T_DarksoulsBogRemoveIgnoreall_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::CrabIntroVO(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::BndEvt__Enc_CentralTop_K2Node_ActorBoundEvent_13_RsOnEncounterGroupEvent__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::BndEvt__Enc_CentralMid1_K2Node_ActorBoundEvent_14_RsOnEncounterGroupEvent__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI::BOG500_AI_C::ExecuteUbergraph_BOG500_AI(int32_t EntryPoint) {
    return;
}
