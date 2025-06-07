#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceSkeletalMesh.hpp"
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SamplingRegions() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::Actor*& _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_Source() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
_Script_Engine::SkeletalMesh*& _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_DefaultMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x28);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_WholeMeshLOD() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SkinningMode() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SpecificBones() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::get_SpecificSockets() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceSkeletalMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh");
    return result;
}
