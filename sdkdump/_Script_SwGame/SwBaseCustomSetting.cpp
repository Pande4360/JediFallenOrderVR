#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBaseCustomSetting.hpp"
void* _Script_SwGame::SwBaseCustomSetting::get_SettingName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::SwBaseCustomSetting::get_bIsCodeType() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwBaseCustomSetting::set_bIsCodeType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBaseCustomSetting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwBaseCustomSetting");
    return result;
}
