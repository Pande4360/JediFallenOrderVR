#include "..\FUObjectArray.hpp"
#include "HC_Stamina_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwStaminaMeterComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::Update_Stamina_Value() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::get_UpgradeBlockMultiplier() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::get_DEBUGInfiniteStamina() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::get_DEBUGNormalStamina() {
    return *(float*)((uintptr_t)this + 0x200);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::set_DEBUGInfiniteStamina(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Stamina.HC_Stamina_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::Upgrade_Stamina_Meter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::DebugToggleInfiniteStamina() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C::ExecuteUbergraph_HC_Stamina(int32_t EntryPoint) {
    return;
}
