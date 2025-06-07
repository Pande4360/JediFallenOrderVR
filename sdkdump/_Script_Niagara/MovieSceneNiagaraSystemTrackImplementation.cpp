#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrackImplementation.hpp"
#include "MovieSceneNiagaraSystemTrackImplementation.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraSystemTrackImplementation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation");
    return result;
}
