#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraFloatParameterSectionTemplate.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
void* _Script_Niagara::MovieSceneNiagaraFloatParameterSectionTemplate::get_FloatChannel() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraFloatParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate");
    return result;
}
