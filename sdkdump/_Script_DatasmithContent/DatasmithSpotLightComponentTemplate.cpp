#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithSpotLightComponentTemplate.hpp"
float& _Script_DatasmithContent::DatasmithSpotLightComponentTemplate::get_InnerConeAngle() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_DatasmithContent::DatasmithSpotLightComponentTemplate::get_OuterConeAngle() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithSpotLightComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate");
    return result;
}
