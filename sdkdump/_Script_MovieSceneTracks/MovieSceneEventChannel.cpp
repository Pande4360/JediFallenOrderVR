#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneChannel.hpp"
#include "MovieSceneEventChannel.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventChannel::get_KeyTimes() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneEventChannel::get_KeyValues() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventChannel");
    return result;
}
