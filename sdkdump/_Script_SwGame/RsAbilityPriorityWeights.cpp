#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityPriorityWeights.hpp"
float& _Script_SwGame::RsAbilityPriorityWeights::get_MultiplicativeWeight() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::RsAbilityPriorityWeights::get_AdditiveWeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityPriorityWeights::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsAbilityPriorityWeights");
    return result;
}
