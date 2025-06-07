#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceCurve.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceCurve::get_Curve() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceCurve");
    return result;
}
