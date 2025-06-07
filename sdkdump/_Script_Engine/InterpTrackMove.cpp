#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackMove.hpp"
float& _Script_Engine::InterpTrackMove::get_AngCurveTension() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::InterpTrackMove::get_PosTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::InterpTrackMove::get_bDisableMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 4 != 0;
}
void* _Script_Engine::InterpTrackMove::get_EulerTrack() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_Engine::InterpTrackMove::set_bUseQuatInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InterpTrackMove::get_LookupTrack() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::InterpTrackMove::get_LookAtGroupName() {
    return (void*)((uintptr_t)this + 0xb0);
}
float& _Script_Engine::InterpTrackMove::get_LinCurveTension() {
    return *(float*)((uintptr_t)this + 0xb8);
}
bool _Script_Engine::InterpTrackMove::get_bUseQuatInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
bool _Script_Engine::InterpTrackMove::get_bShowArrowAtKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 2 != 0;
}
void _Script_Engine::InterpTrackMove::set_bShowArrowAtKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::InterpTrackMove::set_bDisableMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::InterpTrackMove::get_bShowTranslationOnCurveEd() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 8 != 0;
}
void _Script_Engine::InterpTrackMove::set_bShowTranslationOnCurveEd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::InterpTrackMove::get_bShowRotationOnCurveEd() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 16 != 0;
}
void _Script_Engine::InterpTrackMove::set_bShowRotationOnCurveEd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::InterpTrackMove::get_bHide3DTrack() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 32 != 0;
}
void _Script_Engine::InterpTrackMove::set_bHide3DTrack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::InterpTrackMove::get_RotMode() {
    return (void*)((uintptr_t)this + 0xc4);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackMove::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackMove");
    return result;
}
