#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator::get_OptionName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator");
    return result;
}
void* _Script_AIModule::EnvQueryGenerator::get_ItemType() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_AIModule::EnvQueryGenerator::get_bAutoSortTests() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryGenerator::set_bAutoSortTests(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
