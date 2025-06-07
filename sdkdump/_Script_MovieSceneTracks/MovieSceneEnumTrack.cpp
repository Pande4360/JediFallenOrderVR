#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "MovieSceneEnumTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
_Script_CoreUObject::Enum*& _Script_MovieSceneTracks::MovieSceneEnumTrack::get_Enum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEnumTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEnumTrack");
    return result;
}
