#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
#include "NiagaraDataInterfaceVector2DCurve.hpp"
void* _Script_Niagara::NiagaraDataInterfaceVector2DCurve::get_XCurve() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraDataInterfaceVector2DCurve::get_YCurve() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceVector2DCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve");
    return result;
}
