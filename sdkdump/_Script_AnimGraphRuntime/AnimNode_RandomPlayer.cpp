#include "..\FUObjectArray.hpp"
#include "AnimNode_RandomPlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
bool _Script_AnimGraphRuntime::AnimNode_RandomPlayer::get_bShuffleMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RandomPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RandomPlayer");
    return result;
}
void _Script_AnimGraphRuntime::AnimNode_RandomPlayer::set_bShuffleMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_RandomPlayer::get_Entries() {
    return (void*)((uintptr_t)this + 0x38);
}
