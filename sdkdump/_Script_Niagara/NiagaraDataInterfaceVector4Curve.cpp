#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
#include "NiagaraDataInterfaceVector4Curve.hpp"
void* _Script_Niagara::NiagaraDataInterfaceVector4Curve::get_XCurve() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraDataInterfaceVector4Curve::get_YCurve() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Niagara::NiagaraDataInterfaceVector4Curve::get_WCurve() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_Niagara::NiagaraDataInterfaceVector4Curve::get_ZCurve() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceVector4Curve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceVector4Curve");
    return result;
}
