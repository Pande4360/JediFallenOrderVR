#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFloatSection.hpp"
#include "MovieSceneSlomoSection.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSlomoSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSlomoSection");
    return result;
}
