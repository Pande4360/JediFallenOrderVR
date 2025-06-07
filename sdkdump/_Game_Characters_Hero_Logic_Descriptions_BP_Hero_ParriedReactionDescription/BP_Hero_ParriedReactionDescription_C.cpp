#include "..\FUObjectArray.hpp"
#include "BP_Hero_ParriedReactionDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwPlayerReactionState.hpp"
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParriedReactionDescription::BP_Hero_ParriedReactionDescription_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParriedReactionDescription::BP_Hero_ParriedReactionDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_ParriedReactionDescription.BP_Hero_ParriedReactionDescription_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParriedReactionDescription::BP_Hero_ParriedReactionDescription_C::OnBeginReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParriedReactionDescription::BP_Hero_ParriedReactionDescription_C::ExecuteUbergraph_BP_Hero_ParriedReactionDescription(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_ParriedReactionDescription::BP_Hero_ParriedReactionDescription_C::OnEndReaction(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
