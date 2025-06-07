#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceColorCurve.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_RedCurve() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_AlphaCurve() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_GreenCurve() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Niagara::NiagaraDataInterfaceColorCurve::get_BlueCurve() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceColorCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceColorCurve");
    return result;
}
