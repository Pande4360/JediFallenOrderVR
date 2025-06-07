#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNiagaraParameterTrack.hpp"
#include "MovieSceneNiagaraVectorParameterTrack.hpp"
int32_t& _Script_Niagara::MovieSceneNiagaraVectorParameterTrack::get_ChannelsUsed() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Niagara::MovieSceneNiagaraVectorParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack");
    return result;
}
