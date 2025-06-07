#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneActorReferenceSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneActorReferenceSectionTemplate::get_PropertyData() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieSceneActorReferenceSectionTemplate::get_ActorReferenceData() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneActorReferenceSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate");
    return result;
}
