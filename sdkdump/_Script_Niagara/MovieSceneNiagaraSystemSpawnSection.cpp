#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneNiagaraSystemSpawnSection.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraSystemSpawnSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection");
    return result;
}
