#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneActorReferenceSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneActorReferenceSection::get_ActorGuidStrings() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_MovieSceneTracks::MovieSceneActorReferenceSection::get_ActorReferenceData() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieSceneTracks::MovieSceneActorReferenceSection::get_ActorGuidIndexCurve() {
    return (void*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneActorReferenceSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection");
    return result;
}
