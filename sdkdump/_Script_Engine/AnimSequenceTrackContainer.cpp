#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequenceTrackContainer.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimSequenceTrackContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSequenceTrackContainer");
    return result;
}
void* _Script_Engine::AnimSequenceTrackContainer::get_AnimationTracks() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimSequenceTrackContainer::get_TrackNames() {
    return (void*)((uintptr_t)this + 0x10);
}
