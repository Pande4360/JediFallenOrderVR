#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimControlTrackKey.hpp"
#include "AnimSequence.hpp"
float& _Script_Engine::AnimControlTrackKey::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::AnimControlTrackKey::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::AnimControlTrackKey::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 2 != 0;
}
_Script_Engine::AnimSequence*& _Script_Engine::AnimControlTrackKey::get_AnimSeq() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x8);
}
bool _Script_Engine::AnimControlTrackKey::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
float& _Script_Engine::AnimControlTrackKey::get_AnimStartOffset() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::AnimControlTrackKey::get_AnimEndOffset() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Engine::AnimControlTrackKey::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AnimControlTrackKey::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimControlTrackKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimControlTrackKey");
    return result;
}
