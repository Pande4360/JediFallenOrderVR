#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGameStateSettings.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGameStateSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIGameStateSettings");
    return result;
}
float& _Script_RsGameTechRT::RsAIGameStateSettings::get_PreCombatCooldown() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAIGameStateSettings::get_PostCombatCooldown() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsAIGameStateSettings::get_MinTimeUntilTranquilityAchievedEvent() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAIGameStateSettings::get_MaxTimeUntilTranquilityAchievedEvent() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsAIGameStateSettings::get_DistanceToAggroEnemiesToRemainInCombat() {
    return *(float*)((uintptr_t)this + 0x10);
}
