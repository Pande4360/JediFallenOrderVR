#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
#include "MovieSceneNiagaraVectorParameterSectionTemplate.hpp"
void* _Script_Niagara::MovieSceneNiagaraVectorParameterSectionTemplate::get_VectorChannels() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Niagara::MovieSceneNiagaraVectorParameterSectionTemplate::get_ChannelsUsed() {
    return *(int32_t*)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraVectorParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate");
    return result;
}
