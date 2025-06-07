#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavAvoidanceMask.hpp"
bool _Script_Engine::NavAvoidanceMask::get_bGroup0() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup27(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup2() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup3() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup14(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup1() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup16(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup4() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup5() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup6() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup9() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup20(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup7() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup22(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup8() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup8(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup9(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup10() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup30(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup10(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup11() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 8 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup31(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup11(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup29() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 32 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup12() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 16 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup12(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup13() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 32 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup23(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup13(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup14() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 64 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup15() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 128 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup25(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup15(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup16() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup17() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 2 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup17(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup18() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 4 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup18(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup19() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 8 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup19(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup20() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 16 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup21() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 32 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup21(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup22() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 64 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup23() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 128 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup24() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup24(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup25() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 2 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup26() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 4 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup26(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup27() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 8 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup28() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 16 != 0;
}
void _Script_Engine::NavAvoidanceMask::set_bGroup28(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::NavAvoidanceMask::set_bGroup29(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup30() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 64 != 0;
}
bool _Script_Engine::NavAvoidanceMask::get_bGroup31() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 128 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::NavAvoidanceMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavAvoidanceMask");
    return result;
}
