#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OverlapResult.hpp"
void* _Script_Engine::OverlapResult::get_Actor() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::OverlapResult::get_Component() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::OverlapResult::get_bBlockingHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_Engine::OverlapResult::set_bBlockingHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::OverlapResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.OverlapResult");
    return result;
}
