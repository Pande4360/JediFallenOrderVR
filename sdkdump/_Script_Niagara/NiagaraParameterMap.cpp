#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterMap.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraParameterMap");
    return result;
}
