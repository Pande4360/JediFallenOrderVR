#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraIntegerParameterSectionTemplate.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
void* _Script_Niagara::MovieSceneNiagaraIntegerParameterSectionTemplate::get_IntegerChannel() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraIntegerParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate");
    return result;
}
