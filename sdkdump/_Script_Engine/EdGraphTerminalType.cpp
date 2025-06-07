#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdGraphTerminalType.hpp"
void _Script_Engine::EdGraphTerminalType::set_bTerminalIsConst(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::EdGraphTerminalType::get_TerminalCategory() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::EdGraphTerminalType::get_TerminalSubCategory() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphTerminalType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EdGraphTerminalType");
    return result;
}
void* _Script_Engine::EdGraphTerminalType::get_TerminalSubCategoryObject() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::EdGraphTerminalType::set_bTerminalIsWeakPointer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::EdGraphTerminalType::get_bTerminalIsConst() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_Engine::EdGraphTerminalType::get_bTerminalIsWeakPointer() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
