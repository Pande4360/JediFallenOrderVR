#include "..\FUObjectArray.hpp"
#include "ActorSequence.hpp"
#include "ActorSequenceComponent.hpp"
#include "ActorSequencePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
bool _Script_ActorSequence::ActorSequenceComponent::get_bAutoPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
_Script_ActorSequence::ActorSequencePlayer*& _Script_ActorSequence::ActorSequenceComponent::get_SequencePlayer() {
    return *(_Script_ActorSequence::ActorSequencePlayer**)((uintptr_t)this + 0x1c0);
}
void _Script_ActorSequence::ActorSequenceComponent::set_bAutoPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_ActorSequence::ActorSequence*& _Script_ActorSequence::ActorSequenceComponent::get_Sequence() {
    return *(_Script_ActorSequence::ActorSequence**)((uintptr_t)this + 0x1b8);
}
void* _Script_ActorSequence::ActorSequenceComponent::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequenceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ActorSequence.ActorSequenceComponent");
    return result;
}
