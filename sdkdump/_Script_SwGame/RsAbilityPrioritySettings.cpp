#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsAbilityPrioritySettings.hpp"
void* _Script_SwGame::RsAbilityPrioritySettings::get_DefaultPriorityTable() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::RsAbilityPrioritySettings::get_DefaultPreset() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_SwGame::RsAbilityPrioritySettings::get_ZTargetPreset() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::RsAbilityPrioritySettings::get_AbilityPriorityMappings() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityPrioritySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityPrioritySettings");
    return result;
}
