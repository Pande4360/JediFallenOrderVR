#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollisionResponseTemplate.hpp"
void* _Script_Engine::CollisionResponseTemplate::get_CollisionEnabled() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CollisionResponseTemplate::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CollisionResponseTemplate::get_HelpMessage() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::CollisionResponseTemplate::get_CustomResponses() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::CollisionResponseTemplate::get_ObjectTypeName() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::CollisionResponseTemplate::get_bCanModify() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::CollisionResponseTemplate::set_bCanModify(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::CollisionResponseTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollisionResponseTemplate");
    return result;
}
