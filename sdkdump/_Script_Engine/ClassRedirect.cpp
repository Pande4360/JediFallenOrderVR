#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClassRedirect.hpp"
void* _Script_Engine::ClassRedirect::get_NewClassPackage() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ClassRedirect::get_ObjectName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ClassRedirect::get_OldClassName() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::ClassRedirect::get_InstanceOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Engine::ClassRedirect::get_NewSubobjName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::ClassRedirect::get_NewClassName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ClassRedirect::get_OldSubobjName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ClassRedirect::get_NewClassClass() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::ClassRedirect::set_InstanceOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ClassRedirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ClassRedirect");
    return result;
}
