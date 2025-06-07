#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "AB_CalClimbingClaws_rig_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_Root_FC3EA8AF46701A1AC190DC95D41635E7() {
    return (void*)((uintptr_t)this + 0x580);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_TransitionResult_45E1DD2C413057B810A57C870D3BF473() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_CopyPoseFromMesh_C15B728149608A147AFEA69C3F7B7B74() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_StateResult_DEC622094A5BFE7663136590F82E0448() {
    return (void*)((uintptr_t)this + 0x770);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_RsLayeredBlendGraphNode_29DE8BE146FE9A31195DC6BA381E8C10() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_Slot_7EEA5C71497B67BEFA4BB58E105221CA() {
    return (void*)((uintptr_t)this + 0x5c8);
}
void _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::BlueprintInitializeAnimation0() {
    return;
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_TransitionResult_0E2C4DEE4926901E29BE229261AC737C() {
    return (void*)((uintptr_t)this + 0x680);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_SequencePlayer_7F79191A45A2AB53305DC1AA23D334FF() {
    return (void*)((uintptr_t)this + 0x6c8);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_StateResult_FE8ABB5D4912347222D031A91465DCB9() {
    return (void*)((uintptr_t)this + 0x7b8);
}
void* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_AnimGraphNode_StateMachine_56F053E94F9E7EC8F698EBA0257B8429() {
    return (void*)((uintptr_t)this + 0x800);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_BP_HeroREF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x8e0);
}
bool _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::get_IsClimbingWithClaws() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e8 + 0)) & 1 != 0;
}
void _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::set_IsClimbingWithClaws(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Items/CalClimbingClaws/Rig/AB_CalClimbingClaws_rig.AB_CalClimbingClaws_rig_C");
    return result;
}
void _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_Items_CalClimbingClaws_Rig_AB_CalClimbingClaws_rig::AB_CalClimbingClaws_rig_C::ExecuteUbergraph_AB_CalClimbingClaws_rig(int32_t EntryPoint) {
    return;
}
