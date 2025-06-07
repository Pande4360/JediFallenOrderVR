#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate");
    return result;
}
void* _Script_Niagara::MovieSceneNiagaraParameterSectionTemplate::get_Parameter() {
    return (void*)((uintptr_t)this + 0x20);
}
