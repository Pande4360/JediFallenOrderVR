#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCameraLensSettingsTemplate.hpp"
float& _Script_DatasmithContent::DatasmithCameraLensSettingsTemplate::get_MaxFStop() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCameraLensSettingsTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate");
    return result;
}
