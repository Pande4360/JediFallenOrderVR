#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataAsset.hpp"
#include "PreviewMeshCollection.hpp"
#include "Skeleton.hpp"
_Script_Engine::Skeleton*& _Script_Engine::PreviewMeshCollection::get_Skeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::PreviewMeshCollection::get_SkeletalMeshes() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::PreviewMeshCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PreviewMeshCollection");
    return result;
}
