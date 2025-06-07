#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithPointLightComponentTemplate.hpp"
float& _Script_DatasmithContent::DatasmithPointLightComponentTemplate::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_DatasmithContent::DatasmithPointLightComponentTemplate::get_IntensityUnits() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_DatasmithContent::DatasmithPointLightComponentTemplate::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_DatasmithContent::DatasmithPointLightComponentTemplate::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithPointLightComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate");
    return result;
}
