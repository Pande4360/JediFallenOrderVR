#include "..\FUObjectArray.hpp"
#include "BOG500_Nar_C.hpp"
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
bool _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_LookingAtBinog() {
    return (*(uint8_t*)((uintptr_t)this + 0x381 + 0)) & 1 != 0;
}
void* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
float& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_BinogLookatTime() {
    return *(float*)((uintptr_t)this + 0x370);
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::set_LookingAtBinog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x381 + 0);
    *(uint8_t*)((uintptr_t)this + 0x381 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_AtLookout() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_BinogFirstTimer() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::set_AtLookout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_BinogLookatTimeFirst() {
    return *(float*)((uintptr_t)this + 0x384);
}
void* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_BinogMainTimer() {
    return (void*)((uintptr_t)this + 0x388);
}
_Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C*& _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::get_DroidScan_SnakeHint_ExecuteUbergraph_BOG500_Nar_RefProperty() {
    return *(_Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C**)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Bogano/BOG500/SubLevels/BOG500_Nar.BOG500_Nar_C");
    return result;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::BndEvt__LookAt_Binog_K2Node_ActorBoundEvent_0_LVL_LookingAt__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::BndEvt__LookAt_Binog_K2Node_ActorBoundEvent_1_LVL_UnLookAt__DelegateSignature() {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::SecretBinogScan() {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::BndEvt__T_BinogLookout_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::BndEvt__T_BinogLookout_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::ForceBinogLook() {
    return;
}
void _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar::BOG500_Nar_C::ExecuteUbergraph_BOG500_Nar(int32_t EntryPoint) {
    return;
}
