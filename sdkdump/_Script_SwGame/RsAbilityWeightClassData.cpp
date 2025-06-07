#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityWeightClassData.hpp"
float& _Script_SwGame::RsAbilityWeightClassData::get_MaxWeightForClass() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::RsAbilityWeightClassData::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityWeightClassData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsAbilityWeightClassData");
    return result;
}
