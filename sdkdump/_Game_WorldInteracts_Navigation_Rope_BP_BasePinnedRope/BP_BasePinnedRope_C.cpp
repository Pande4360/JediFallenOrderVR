#include "..\FUObjectArray.hpp"
#include "BP_BasePinnedRope_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwPinnedRopeActor.hpp"
void* _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::OnRopeCompletelyDetachedEvent(_Script_SwGame::SwPinnedRopeActor* PinnedRope) {
    return;
}
bool _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::get_RopeDetached() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::set_RopeDetached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Navigation/Rope/BP_BasePinnedRope.BP_BasePinnedRope_C");
    return result;
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::RopeParticleDetached(_Script_SwGame::SwPinnedRopeActor* PinnedRope, int32_t RopeParticle) {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::Lvl_UpdateRopeHighlight() {
    return;
}
void _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope::BP_BasePinnedRope_C::ExecuteUbergraph_BP_BasePinnedRope(int32_t EntryPoint) {
    return;
}
