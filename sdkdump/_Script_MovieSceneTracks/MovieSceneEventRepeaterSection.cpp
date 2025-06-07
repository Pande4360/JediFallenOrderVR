#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventRepeaterSection.hpp"
#include "MovieSceneEventSectionBase.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventRepeaterSection::get_Event() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventRepeaterSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection");
    return result;
}
