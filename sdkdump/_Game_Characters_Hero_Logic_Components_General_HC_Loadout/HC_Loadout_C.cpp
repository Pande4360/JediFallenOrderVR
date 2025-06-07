#include "..\FUObjectArray.hpp"
#include "HC_Loadout_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::Initialize_Droid() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::Loadout_Changed(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::get_DefaultLoadoutFlags() {
    return (void*)((uintptr_t)this + 0x178);
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::OverrideIfEnabled(bool& ValueToOverride, bool Override) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_Loadout.HC_Loadout_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::OverrideLoadout() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::InitializeLoadout() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::RespawnPlayer() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C::ExecuteUbergraph_HC_Loadout(int32_t EntryPoint) {
    return;
}
