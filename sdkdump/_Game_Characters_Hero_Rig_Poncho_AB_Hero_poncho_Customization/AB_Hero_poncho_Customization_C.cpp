#include "..\FUObjectArray.hpp"
#include "AB_Hero_poncho_Customization_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_IsCocooned() {
    return (*(uint8_t*)((uintptr_t)this + 0xad4 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x7a0);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_isLedge() {
    return (*(uint8_t*)((uintptr_t)this + 0xad0 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_AnimGraphNode_CopyPoseFromMesh_ACFC014A43FC9826EE4138BD8A6BF974() {
    return (void*)((uintptr_t)this + 0x7f0);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_AnimGraphNode_Root_59A9175747C0936BC688EC941F817DD0() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_AnimGraphNode_Slot_B0C58988499B931C93EE99B1B3500AD2() {
    return (void*)((uintptr_t)this + 0x8d8);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_AnimGraphNode_SequencePlayer_8A5875D34821D8DBABBDB9911BDAD301() {
    return (void*)((uintptr_t)this + 0x948);
}
void* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_RsLayeredBlendGraphNode_1ED22CE84525A8D4B6B6158AAEB931E9() {
    return (void*)((uintptr_t)this + 0x9f0);
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::set_isLedge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xad0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_isClimb() {
    return (*(uint8_t*)((uintptr_t)this + 0xad1 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::set_isClimb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xad1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_isAir() {
    return (*(uint8_t*)((uintptr_t)this + 0xad2 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::get_isSteepSlope() {
    return (*(uint8_t*)((uintptr_t)this + 0xad3 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::set_isAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xad2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::set_isSteepSlope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xad3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::set_IsCocooned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xad4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Characters/Hero/Rig/Poncho/AB_Hero_poncho_Customization.AB_Hero_poncho_Customization_C");
    return result;
}
void _Game_Characters_Hero_Rig_Poncho_AB_Hero_poncho_Customization::AB_Hero_poncho_Customization_C::ExecuteUbergraph_AB_Hero_poncho_Customization(int32_t EntryPoint) {
    return;
}
