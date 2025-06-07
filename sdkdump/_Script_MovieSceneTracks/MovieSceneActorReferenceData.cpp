#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneChannel.hpp"
#include "MovieSceneActorReferenceData.hpp"
void* _Script_MovieSceneTracks::MovieSceneActorReferenceData::get_KeyTimes() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneActorReferenceData::get_KeyValues() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneActorReferenceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneActorReferenceData");
    return result;
}
