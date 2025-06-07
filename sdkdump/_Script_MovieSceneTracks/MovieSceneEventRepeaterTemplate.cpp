#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventRepeaterTemplate.hpp"
#include "MovieSceneEventTemplateBase.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventRepeaterTemplate::get_EventToTrigger() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventRepeaterTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventRepeaterTemplate");
    return result;
}
