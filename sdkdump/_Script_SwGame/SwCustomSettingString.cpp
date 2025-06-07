#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBaseCustomSetting.hpp"
#include "SwCustomSettingString.hpp"
void* _Script_SwGame::SwCustomSettingString::get_Data() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwCustomSettingString::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwCustomSettingString");
    return result;
}
