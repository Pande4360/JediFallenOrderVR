#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryGenerator_Composite.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_Composite::get_ForcedItemType() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AIModule::EnvQueryGenerator_Composite::get_Generators() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_AIModule::EnvQueryGenerator_Composite::get_bAllowDifferentItemTypes() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryGenerator_Composite::set_bAllowDifferentItemTypes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::EnvQueryGenerator_Composite::get_bHasMatchingItemType() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
void _Script_AIModule::EnvQueryGenerator_Composite::set_bHasMatchingItemType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_Composite::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_Composite");
    return result;
}
