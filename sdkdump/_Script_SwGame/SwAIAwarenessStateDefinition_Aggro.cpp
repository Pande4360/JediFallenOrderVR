#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIAwarenessStateDefinition_Aggro.hpp"
#include "SwAIAwarenessStateDefinition_Aggro.hpp"
float& _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_ZTargetBonusDuration() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_AggroTimeOuts() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_FightResourceWeights() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_FightStyle() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_WildcardBonusDuration() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_OuterFightSectorCharacterRadiusMultiplier() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::get_InnerFightSectorCharacterRadiusMultiplier() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIAwarenessStateDefinition_Aggro::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIAwarenessStateDefinition_Aggro");
    return result;
}
