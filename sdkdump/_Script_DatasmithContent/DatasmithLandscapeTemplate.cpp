#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithLandscapeTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
_Script_Engine::MaterialInterface*& _Script_DatasmithContent::DatasmithLandscapeTemplate::get_LandscapeMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x28);
}
int32_t& _Script_DatasmithContent::DatasmithLandscapeTemplate::get_StaticLightingLOD() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithLandscapeTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithLandscapeTemplate");
    return result;
}
