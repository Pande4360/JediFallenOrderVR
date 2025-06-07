#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraSystemTrack.hpp"
#include "MovieSceneNiagaraTrack.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraSystemTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraSystemTrack");
    return result;
}
