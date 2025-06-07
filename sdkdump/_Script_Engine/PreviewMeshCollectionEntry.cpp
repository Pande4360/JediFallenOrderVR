#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PreviewMeshCollectionEntry.hpp"
void* _Script_Engine::PreviewMeshCollectionEntry::get_SkeletalMesh() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PreviewMeshCollectionEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PreviewMeshCollectionEntry");
    return result;
}
