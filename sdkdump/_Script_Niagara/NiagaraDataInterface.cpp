#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "..\_Script_NiagaraCore\NiagaraDataInterfaceBase.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterface");
    return result;
}
