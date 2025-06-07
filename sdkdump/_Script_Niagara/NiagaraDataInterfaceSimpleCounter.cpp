#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceSimpleCounter.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceSimpleCounter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter");
    return result;
}
