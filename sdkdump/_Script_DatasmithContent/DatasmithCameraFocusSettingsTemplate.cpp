#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCameraFocusSettingsTemplate.hpp"
void* _Script_DatasmithContent::DatasmithCameraFocusSettingsTemplate::get_FocusMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCameraFocusSettingsTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate");
    return result;
}
float& _Script_DatasmithContent::DatasmithCameraFocusSettingsTemplate::get_ManualFocusDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
