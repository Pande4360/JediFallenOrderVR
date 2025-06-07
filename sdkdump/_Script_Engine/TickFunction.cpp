#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TickFunction.hpp"
void* _Script_Engine::TickFunction::get_TickGroup() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TickFunction::get_EndTickGroup() {
    return (void*)((uintptr_t)this + 0x9);
}
bool _Script_Engine::TickFunction::get_bCanEverTick() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 2 != 0;
}
bool _Script_Engine::TickFunction::get_bTickEvenWhenPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Engine::TickFunction::set_bTickEvenWhenPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::TickFunction::set_bStartWithTickEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::TickFunction::set_bCanEverTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::TickFunction::get_bStartWithTickEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 4 != 0;
}
bool _Script_Engine::TickFunction::get_bAllowTickOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 8 != 0;
}
void _Script_Engine::TickFunction::set_bAllowTickOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::TickFunction::get_TickInterval() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::TickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TickFunction");
    return result;
}
