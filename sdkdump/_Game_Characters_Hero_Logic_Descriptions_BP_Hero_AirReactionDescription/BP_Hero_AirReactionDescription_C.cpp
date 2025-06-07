#include "..\FUObjectArray.hpp"
#include "BP_Hero_AirReactionDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwReactionState.hpp"
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AirReactionDescription::BP_Hero_AirReactionDescription_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AirReactionDescription::BP_Hero_AirReactionDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AirReactionDescription.BP_Hero_AirReactionDescription_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AirReactionDescription::BP_Hero_AirReactionDescription_C::OnBeginReaction0(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AirReactionDescription::BP_Hero_AirReactionDescription_C::OnEndReaction0(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AirReactionDescription::BP_Hero_AirReactionDescription_C::ExecuteUbergraph_BP_Hero_AirReactionDescription(int32_t EntryPoint) {
    return;
}
