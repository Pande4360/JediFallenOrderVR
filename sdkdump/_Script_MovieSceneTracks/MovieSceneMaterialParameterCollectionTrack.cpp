#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialParameterCollection.hpp"
#include "MovieSceneMaterialParameterCollectionTrack.hpp"
#include "MovieSceneMaterialTrack.hpp"
_Script_Engine::MaterialParameterCollection*& _Script_MovieSceneTracks::MovieSceneMaterialParameterCollectionTrack::get_MPC() {
    return *(_Script_Engine::MaterialParameterCollection**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneMaterialParameterCollectionTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
    return result;
}
