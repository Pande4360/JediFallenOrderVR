#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventSectionBase.hpp"
#include "MovieSceneEventTriggerSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventTriggerSection::get_EventChannel() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventTriggerSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection");
    return result;
}
