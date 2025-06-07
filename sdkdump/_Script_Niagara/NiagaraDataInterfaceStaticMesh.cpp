#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceStaticMesh.hpp"
_Script_Engine::StaticMesh*& _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_DefaultMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x28);
}
_Script_Engine::Actor*& _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_Source() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraDataInterfaceStaticMesh::get_SectionFilter() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceStaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceStaticMesh");
    return result;
}
