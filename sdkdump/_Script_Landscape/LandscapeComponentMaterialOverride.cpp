#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "LandscapeComponentMaterialOverride.hpp"
void* _Script_Landscape::LandscapeComponentMaterialOverride::get_LODIndex() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponentMaterialOverride::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeComponentMaterialOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeComponentMaterialOverride");
    return result;
}
