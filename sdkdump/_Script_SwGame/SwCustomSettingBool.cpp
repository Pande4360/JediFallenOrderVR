#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBaseCustomSetting.hpp"
#include "SwCustomSettingBool.hpp"
bool _Script_SwGame::SwCustomSettingBool::get_Data() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwCustomSettingBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwCustomSettingBool");
    return result;
}
void _Script_SwGame::SwCustomSettingBool::set_Data(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
