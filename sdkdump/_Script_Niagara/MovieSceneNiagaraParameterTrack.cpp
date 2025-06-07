#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraParameterTrack.hpp"
#include "MovieSceneNiagaraTrack.hpp"
void* _Script_Niagara::MovieSceneNiagaraParameterTrack::get_Parameter() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraParameterTrack");
    return result;
}
