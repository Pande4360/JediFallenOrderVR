#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoolPropertySectionTemplate.hpp"
#include "MovieSceneVisibilitySectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVisibilitySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate");
    return result;
}
