#include "..\FUObjectArray.hpp"
#include "BlackboardEntry.hpp"
#include "BlackboardKeyType.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AIModule::BlackboardEntry::set_bInstanceSynced(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::BlackboardEntry::get_EntryName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.BlackboardEntry");
    return result;
}
bool _Script_AIModule::BlackboardEntry::get_bInstanceSynced() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
_Script_AIModule::BlackboardKeyType*& _Script_AIModule::BlackboardEntry::get_KeyType() {
    return *(_Script_AIModule::BlackboardKeyType**)((uintptr_t)this + 0x8);
}
