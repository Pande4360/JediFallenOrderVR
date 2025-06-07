#include "..\FUObjectArray.hpp"
#include "Comp_SW_Amb_Overlap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAmbOverlapComponent.hpp"
void* _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x310);
}
void _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::CustomEvent_0() {
    return;
}
int32_t& _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::get_CinematicCounter() {
    return *(int32_t*)((uintptr_t)this + 0x318);
}
void _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::ReceiveBeginPlay() {
    return;
}
void _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::ExecuteUbergraph_Comp_SW_Amb_Overlap(int32_t EntryPoint) {
    return;
}
bool _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::get_IsInCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x31c + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::set_IsInCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31c + 0);
    *(uint8_t*)((uintptr_t)this + 0x31c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_SW_Amb_Overlap.Comp_SW_Amb_Overlap_C");
    return result;
}
void _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C::LVL_CinematicEnded_Event_0() {
    return;
}
