#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneActorReferenceKey.hpp"
void* _Script_MovieSceneTracks::MovieSceneActorReferenceKey::get_Object() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneActorReferenceKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneActorReferenceKey");
    return result;
}
