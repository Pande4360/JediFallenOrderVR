#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "RsRopeMeshDefinition.hpp"
_Script_Engine::SkeletalMesh*& _Script_RsGameTechRT::RsRopeMeshDefinition::get_TopMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsRopeMeshDefinition::get_MiddleMeshes() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::SkeletalMesh*& _Script_RsGameTechRT::RsRopeMeshDefinition::get_BottomMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRopeMeshDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsRopeMeshDefinition");
    return result;
}
int32_t& _Script_RsGameTechRT::RsRopeMeshDefinition::get_Version() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
