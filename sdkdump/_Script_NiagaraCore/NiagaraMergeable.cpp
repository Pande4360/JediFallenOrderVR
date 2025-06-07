#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraMergeable.hpp"
_Script_CoreUObject::Class* _Script_NiagaraCore::NiagaraMergeable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NiagaraCore.NiagaraMergeable");
    return result;
}
