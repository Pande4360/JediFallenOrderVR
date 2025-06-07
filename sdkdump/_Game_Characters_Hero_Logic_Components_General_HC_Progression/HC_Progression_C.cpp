#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Progression_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_Progression.HC_Progression_C");
    return result;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Purchase_Upgrade(int32_t Force_Points, void* Unlocked_Upgrade_Flag) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Upgrade_Health() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Upgrade_Force_Meter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Upgrade_Block() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Initialize_Upgrades() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Force_Slow_Upgrade(int32_t Upgrade) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Force_Push_Upgrade(int32_t Upgrade) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Force_Pull_Upgrade(int32_t Upgrade) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::Upgrade_Lightsaber_Damage() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::UnlockFocusAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C::ExecuteUbergraph_HC_Progression(int32_t EntryPoint) {
    return;
}
