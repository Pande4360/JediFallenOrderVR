#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "..\_Script_CoreUObject\Struct.hpp"
#include "NiagaraTypeDefinition.hpp"
_Script_CoreUObject::Struct*& _Script_Niagara::NiagaraTypeDefinition::get_Struct() {
    return *(_Script_CoreUObject::Struct**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Enum*& _Script_Niagara::NiagaraTypeDefinition::get_Enum() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraTypeDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraTypeDefinition");
    return result;
}
