#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBaseCustomSetting.hpp"
#include "SwCustomSettingFloat.hpp"
float& _Script_SwGame::SwCustomSettingFloat::get_Data() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwCustomSettingFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwCustomSettingFloat");
    return result;
}
