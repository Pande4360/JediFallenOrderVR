#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraEditorDataBase.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEditorDataBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEditorDataBase");
    return result;
}
