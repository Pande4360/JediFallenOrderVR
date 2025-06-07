#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraScriptSourceBase.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptSourceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraScriptSourceBase");
    return result;
}
