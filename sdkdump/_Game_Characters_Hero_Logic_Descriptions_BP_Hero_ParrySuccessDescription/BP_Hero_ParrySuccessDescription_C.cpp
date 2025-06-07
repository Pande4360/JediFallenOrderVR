#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription\BP_Hero_BlockDescription_C.hpp"
#include "BP_Hero_ParrySuccessDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::Close_Attack_Window() {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x1b8);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::get_AttackWindowOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c0 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::set_AttackWindowOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_ParrySuccessDescription.BP_Hero_ParrySuccessDescription_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::TickDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParrySuccessDescription::BP_Hero_ParrySuccessDescription_C::ExecuteUbergraph_BP_Hero_ParrySuccessDescription(int32_t EntryPoint) {
    return;
}
