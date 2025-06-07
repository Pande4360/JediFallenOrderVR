#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraColorParameterTrack.hpp"
#include "MovieSceneNiagaraParameterTrack.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraColorParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack");
    return result;
}
