#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraEventReceiverEmitterAction.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEventReceiverEmitterAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEventReceiverEmitterAction");
    return result;
}
