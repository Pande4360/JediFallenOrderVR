#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeDialoguePlayer.hpp"
bool _Script_Engine::SoundNodeDialoguePlayer::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_Engine::SoundNodeDialoguePlayer::get_DialogueWaveParameter() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::SoundNodeDialoguePlayer::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeDialoguePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeDialoguePlayer");
    return result;
}
