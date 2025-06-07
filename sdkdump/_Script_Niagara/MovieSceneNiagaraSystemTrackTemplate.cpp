#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneNiagaraSystemTrackTemplate.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraSystemTrackTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate");
    return result;
}
