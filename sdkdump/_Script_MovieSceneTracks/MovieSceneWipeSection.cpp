#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFloatSection.hpp"
#include "MovieSceneWipeSection.hpp"
float& _Script_MovieSceneTracks::MovieSceneWipeSection::get_WipeDirection() {
    return *(float*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneWipeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneWipeSection");
    return result;
}
