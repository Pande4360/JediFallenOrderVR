#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription\BP_Hero_BlockDescription_C.hpp"
#include "BP_Hero_ParryDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Script_CoreUObject::Object*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::get_ParryAnimation() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x1c0);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_ParryDescription.BP_Hero_ParryDescription_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::ExecuteUbergraph_BP_Hero_ParryDescription(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::Montage_Ended(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParryDescription::BP_Hero_ParryDescription_C::OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
