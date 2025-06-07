#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Jump_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_RsGameTechRT\RsJumpComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::zTargetJump() {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::get_BPHero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x228);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::get_LVL_ForceFlipped() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::get_LVL_Jumped() {
    return (void*)((uintptr_t)this + 0x240);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::Jump() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Jump.HC_Jump_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::JumpInDirection(bool UseControllerDirection_, _Script_CoreUObject::Vector4 OverrideJumpDirection) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::DoubleJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::ZTargetDoubleJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::WallJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::NavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::ExecuteUbergraph_HC_Jump(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::LVL_Jumped__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C::LVL_ForceFlipped__DelegateSignature() {
    return;
}
