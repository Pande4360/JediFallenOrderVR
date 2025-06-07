#include "..\FUObjectArray.hpp"
#include "BlackboardData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
void _Script_AIModule::BlackboardData::set_bHasSynchronizedKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AIModule::BlackboardData*& _Script_AIModule::BlackboardData::get_Parent() {
    return *(_Script_AIModule::BlackboardData**)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::BlackboardData::get_Keys() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_AIModule::BlackboardData::get_bHasSynchronizedKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardData");
    return result;
}
