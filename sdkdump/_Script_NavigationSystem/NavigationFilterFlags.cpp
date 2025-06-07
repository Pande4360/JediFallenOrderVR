#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationFilterFlags.hpp"
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag0() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag1() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag2() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag3() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag4() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag5() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag6() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag7() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag8() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag8(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag9() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag9(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag10() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag10(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag11() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 8 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag11(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag12() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 16 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag12(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag13() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 32 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag13(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag14() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 64 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag14(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_NavigationSystem::NavigationFilterFlags::get_bNavFlag15() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 128 != 0;
}
void _Script_NavigationSystem::NavigationFilterFlags::set_bNavFlag15(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationFilterFlags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.NavigationFilterFlags");
    return result;
}
