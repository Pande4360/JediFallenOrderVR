#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BoganoFodder_Logic_BP_BoganoFodder\BP_BoganoFodder_C.hpp"
#include "BoganoFodder_REC_AttackParried_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
#include "..\_Script_SwGame\SwReactionState.hpp"
_Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C*& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried::BoganoFodder_REC_AttackParried_C::get_BogFod_Ref() {
    return *(_Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C**)((uintptr_t)this + 0x138);
}
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried::BoganoFodder_REC_AttackParried_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried::BoganoFodder_REC_AttackParried_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BoganoFodder/Logic/Descriptions/BoganoFodder_REC_AttackParried.BoganoFodder_REC_AttackParried_C");
    return result;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried::BoganoFodder_REC_AttackParried_C::OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried::BoganoFodder_REC_AttackParried_C::OnEndReaction0(_Script_RsGameTechRT::RsCharacter* TheOneReacting) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_REC_AttackParried::BoganoFodder_REC_AttackParried_C::ExecuteUbergraph_BoganoFodder_REC_AttackParried(int32_t EntryPoint) {
    return;
}
