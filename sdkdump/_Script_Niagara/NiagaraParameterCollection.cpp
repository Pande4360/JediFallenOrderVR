#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraParameterCollection.hpp"
#include "NiagaraParameterCollectionInstance.hpp"
void* _Script_Niagara::NiagaraParameterCollection::get_Namespace() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraParameterCollection::get_Parameters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Niagara::NiagaraParameterCollectionInstance*& _Script_Niagara::NiagaraParameterCollection::get_DefaultInstance() {
    return *(_Script_Niagara::NiagaraParameterCollectionInstance**)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraParameterCollection::get_CompileId() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraParameterCollection");
    return result;
}
