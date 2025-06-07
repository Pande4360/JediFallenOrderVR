#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraIntegerParameterTrack.hpp"
#include "MovieSceneNiagaraParameterTrack.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraIntegerParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack");
    return result;
}
