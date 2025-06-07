#include "..\FUObjectArray.hpp"
#include "BoganoFodder_Headbutt_Description_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
_Script_CoreUObject::Class* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BoganoFodder/Logic/Descriptions/BoganoFodder_Headbutt_Description.BoganoFodder_Headbutt_Description_C");
    return result;
}
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_Engine::AnimSequence*& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::get_AnimAsset() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x260);
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::OnConnectedButDealtNoDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor) {
    return;
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::get_Anim_Start_Time() {
    return *(float*)((uintptr_t)this + 0x268);
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::get_BlendIn() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::get_BlendOut() {
    return *(float*)((uintptr_t)this + 0x270);
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::OnAttackDefended0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacter* TheDefender, void* DefenseType, _Script_Engine::HitResult& HitSweep) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Headbutt_Description::BoganoFodder_Headbutt_Description_C::ExecuteUbergraph_BoganoFodder_Headbutt_Description(int32_t EntryPoint) {
    return;
}
