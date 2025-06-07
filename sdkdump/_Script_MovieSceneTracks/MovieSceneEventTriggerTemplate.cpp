#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventTemplateBase.hpp"
#include "MovieSceneEventTriggerTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventTriggerTemplate::get_EventFunctions() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_MovieSceneTracks::MovieSceneEventTriggerTemplate::get_EventTimes() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventTriggerTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventTriggerTemplate");
    return result;
}
