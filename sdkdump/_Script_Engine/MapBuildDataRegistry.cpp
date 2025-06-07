#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MapBuildDataRegistry.hpp"
void* _Script_Engine::MapBuildDataRegistry::get_LevelLightingQuality() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::MapBuildDataRegistry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MapBuildDataRegistry");
    return result;
}
