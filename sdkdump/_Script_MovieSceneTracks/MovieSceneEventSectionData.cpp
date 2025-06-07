#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneChannel.hpp"
#include "MovieSceneEventSectionData.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventSectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventSectionData");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneEventSectionData::get_Times() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneEventSectionData::get_KeyValues() {
    return (void*)((uintptr_t)this + 0x18);
}
