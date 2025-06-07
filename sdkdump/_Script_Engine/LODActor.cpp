#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "HLODProxy.hpp"
#include "LODActor.hpp"
#include "StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Script_Engine::LODActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::HLODProxy*& _Script_Engine::LODActor::get_Proxy() {
    return *(_Script_Engine::HLODProxy**)((uintptr_t)this + 0x368);
}
void* _Script_Engine::LODActor::get_SubActors() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_Engine::LODActor::get_Key() {
    return (void*)((uintptr_t)this + 0x370);
}
float& _Script_Engine::LODActor::get_LODDrawDistance() {
    return *(float*)((uintptr_t)this + 0x378);
}
int32_t& _Script_Engine::LODActor::get_LODLevel() {
    return *(int32_t*)((uintptr_t)this + 0x390);
}
void* _Script_Engine::LODActor::get_CachedNumHLODLevels() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_Engine::LODActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LODActor");
    return result;
}
