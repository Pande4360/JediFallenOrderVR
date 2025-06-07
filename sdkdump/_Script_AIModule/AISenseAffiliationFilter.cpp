#include "..\FUObjectArray.hpp"
#include "AISenseAffiliationFilter.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AIModule::AISenseAffiliationFilter::get_bDetectEnemies() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_AIModule::AISenseAffiliationFilter::get_bDetectNeutrals() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_AIModule::AISenseAffiliationFilter::set_bDetectEnemies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AIModule::AISenseAffiliationFilter::set_bDetectNeutrals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AIModule::AISenseAffiliationFilter::get_bDetectFriendlies() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_AIModule::AISenseAffiliationFilter::set_bDetectFriendlies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::AISenseAffiliationFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AISenseAffiliationFilter");
    return result;
}
