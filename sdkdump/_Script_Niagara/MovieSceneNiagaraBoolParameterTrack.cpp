#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraBoolParameterTrack.hpp"
#include "MovieSceneNiagaraParameterTrack.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraBoolParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack");
    return result;
}
