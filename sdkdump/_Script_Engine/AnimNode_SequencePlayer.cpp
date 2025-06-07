#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_AssetPlayerBase.hpp"
#include "AnimNode_SequencePlayer.hpp"
#include "AnimSequenceBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNode_SequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_SequencePlayer");
    return result;
}
_Script_Engine::AnimSequenceBase*& _Script_Engine::AnimNode_SequencePlayer::get_Sequence() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x60);
}
float& _Script_Engine::AnimNode_SequencePlayer::get_PlayRateBasis() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_Engine::AnimNode_SequencePlayer::get_bLoopAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void* _Script_Engine::AnimNode_SequencePlayer::get_PlayRateScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x74);
}
void _Script_Engine::AnimNode_SequencePlayer::set_bLoopAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AnimNode_SequencePlayer::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::AnimNode_SequencePlayer::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0xa4);
}
