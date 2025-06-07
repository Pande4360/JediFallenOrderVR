#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "RsInstanceMergedActor.hpp"
#include "StaticMeshComponent.hpp"
void* _Script_Engine::RsInstanceMergedActor::get_MergedMeshComponents() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_Engine::StaticMeshComponent*& _Script_Engine::RsInstanceMergedActor::get_ProxyLODComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::RsInstanceMergedActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsInstanceMergedActor");
    return result;
}
