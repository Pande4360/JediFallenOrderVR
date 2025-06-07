#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceSpline.hpp"
_Script_Engine::Actor*& _Script_Niagara::NiagaraDataInterfaceSpline::get_Source() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceSpline::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceSpline");
    return result;
}
