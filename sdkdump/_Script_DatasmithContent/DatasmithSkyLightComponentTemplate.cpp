#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithSkyLightComponentTemplate.hpp"
#include "..\_Script_Engine\TextureCube.hpp"
void* _Script_DatasmithContent::DatasmithSkyLightComponentTemplate::get_SourceType() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_DatasmithContent::DatasmithSkyLightComponentTemplate::get_CubemapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_Engine::TextureCube*& _Script_DatasmithContent::DatasmithSkyLightComponentTemplate::get_Cubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithSkyLightComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate");
    return result;
}
