#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "DataTable.hpp"
_Script_CoreUObject::Class* _Script_Engine::DataTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DataTable");
    return result;
}
_Script_CoreUObject::ScriptStruct*& _Script_Engine::DataTable::get_RowStruct() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Enum*& _Script_Engine::DataTable::get_KeyEnum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x30);
}
void _Script_Engine::DataTable::set_bStripFromClientBuilds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DataTable::get_bGameplayTagKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::DataTable::set_bGameplayTagKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DataTable::get_bStripFromClientBuilds() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
