#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTransformMask.hpp"
void* _Script_MovieSceneTracks::MovieSceneTransformMask::get_Mask() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneTransformMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneTransformMask");
    return result;
}
