#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackSound.hpp"
#include "InterpTrackVectorBase.hpp"
void* _Script_Engine::InterpTrackSound::get_Sounds() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_Engine::InterpTrackSound::get_bPlayOnReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Engine::InterpTrackSound::set_bPlayOnReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InterpTrackSound::get_bSuppressSubtitles() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 4 != 0;
}
void _Script_Engine::InterpTrackSound::set_bContinueSoundOnMatineeEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::InterpTrackSound::get_bContinueSoundOnMatineeEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 2 != 0;
}
void _Script_Engine::InterpTrackSound::set_bSuppressSubtitles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::InterpTrackSound::set_bTreatAsDialogue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::InterpTrackSound::get_bTreatAsDialogue() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 8 != 0;
}
bool _Script_Engine::InterpTrackSound::get_bAttach() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 16 != 0;
}
void _Script_Engine::InterpTrackSound::set_bAttach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackSound");
    return result;
}
