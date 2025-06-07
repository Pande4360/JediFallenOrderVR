#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithCameraFilmbackSettingsTemplate.hpp"
float& _Script_DatasmithContent::DatasmithCameraFilmbackSettingsTemplate::get_SensorWidth() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_DatasmithContent::DatasmithCameraFilmbackSettingsTemplate::get_SensorHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCameraFilmbackSettingsTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate");
    return result;
}
