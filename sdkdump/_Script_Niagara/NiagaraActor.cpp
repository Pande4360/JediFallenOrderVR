#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NiagaraActor.hpp"
#include "NiagaraComponent.hpp"
_Script_Niagara::NiagaraComponent*& _Script_Niagara::NiagaraActor::get_NiagaraComponent() {
    return *(_Script_Niagara::NiagaraComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraActor");
    return result;
}
