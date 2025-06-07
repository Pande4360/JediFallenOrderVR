#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Flashlight_C.hpp"
#include "..\_Game_Items_Lightsaber_BP_Lightsaber\BP_Lightsaber_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_Flashlight.HC_Flashlight_C");
    return result;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::Exited_Flashlight_Zone() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::get_Lightsaber() {
    return (void*)((uintptr_t)this + 0x188);
}
_Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C*& _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::get_BP_Lightsaber() {
    return *(_Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C**)((uintptr_t)this + 0x198);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::get_LVL_FlashlightOn() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x1a0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::get_LVL_FlashlightOff() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::FlashlightAway(bool saveFlashlight) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::Action_FlashlightAway() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::Action_FlashlightOut() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::Entered_Flashlight_Zone() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::SetUpFlashlight() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::ExecuteUbergraph_HC_Flashlight(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::LVL_FlashlightOff__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C::LVL_FlashlightOn__DelegateSignature() {
    return;
}
