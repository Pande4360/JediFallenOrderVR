#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationLinkBase.hpp"
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent14(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::NavigationLinkBase::get_LeftProjectHeight() {
    return *(float*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent0() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_Engine::NavigationLinkBase::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::NavigationLinkBase::get_MaxFallDownLength() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationLinkBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavigationLinkBase");
    return result;
}
float& _Script_Engine::NavigationLinkBase::get_SnapRadius() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent9() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 2 != 0;
}
void* _Script_Engine::NavigationLinkBase::get_Direction() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag5() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 128 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent4() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 16 != 0;
}
float& _Script_Engine::NavigationLinkBase::get_SnapHeight() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Engine::NavigationLinkBase::set_bUseSnapHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::NavigationLinkBase::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent1() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 2 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent15(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent13(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent2() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 4 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent3() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 8 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent5() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 32 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag2() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 16 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent11(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent6() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 64 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent14() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 64 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent7() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 128 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent8() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent15() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 128 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent8(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag6() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent9(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent10() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 4 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent10(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent11() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 8 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent12() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 16 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSupportsAgent12(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bSupportsAgent13() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 32 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bUseSnapHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bSnapToCheapestArea() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 2 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bSnapToCheapestArea(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag0() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 4 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag1() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 8 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag3() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 32 != 0;
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag4() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 64 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavigationLinkBase::get_bCustomFlag7() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 2 != 0;
}
void _Script_Engine::NavigationLinkBase::set_bCustomFlag7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
