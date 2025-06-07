#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceBase.hpp"
#include "NiagaraMergeable.hpp"
_Script_CoreUObject::Class* _Script_NiagaraCore::NiagaraDataInterfaceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NiagaraCore.NiagaraDataInterfaceBase");
    return result;
}
