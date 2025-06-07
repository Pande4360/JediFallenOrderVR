#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LightmappedSurfaceCollection.hpp"
#include "Model.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightmappedSurfaceCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightmappedSurfaceCollection");
    return result;
}
_Script_Engine::Model*& _Script_Engine::LightmappedSurfaceCollection::get_SourceModel() {
    return *(_Script_Engine::Model**)((uintptr_t)this + 0x28);
}
void* _Script_Engine::LightmappedSurfaceCollection::get_Surfaces() {
    return (void*)((uintptr_t)this + 0x30);
}
