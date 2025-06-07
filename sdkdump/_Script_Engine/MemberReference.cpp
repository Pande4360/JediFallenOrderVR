#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MemberReference.hpp"
void _Script_Engine::MemberReference::set_bSelfContext(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Object*& _Script_Engine::MemberReference::get_MemberParent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MemberReference::get_MemberScope() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::MemberReference::get_MemberName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::MemberReference::get_MemberGuid() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::MemberReference::get_bSelfContext() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Script_Engine::MemberReference::get_bWasDeprecated() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_Engine::MemberReference::set_bWasDeprecated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MemberReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MemberReference");
    return result;
}
