#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBaseCustomSetting.hpp"
#include "SwCustomSettingInt.hpp"
int32_t& _Script_SwGame::SwCustomSettingInt::get_Data() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwCustomSettingInt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwCustomSettingInt");
    return result;
}
