#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraColorParameterSectionTemplate.hpp"
#include "MovieSceneNiagaraParameterSectionTemplate.hpp"
void* _Script_Niagara::MovieSceneNiagaraColorParameterSectionTemplate::get_RedChannel() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::MovieSceneNiagaraColorParameterSectionTemplate::get_AlphaChannel() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_Niagara::MovieSceneNiagaraColorParameterSectionTemplate::get_GreenChannel() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraColorParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate");
    return result;
}
void* _Script_Niagara::MovieSceneNiagaraColorParameterSectionTemplate::get_BlueChannel() {
    return (void*)((uintptr_t)this + 0x190);
}
