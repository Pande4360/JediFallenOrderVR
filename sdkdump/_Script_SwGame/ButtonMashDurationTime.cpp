#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ButtonMashDurationTime.hpp"
#include "ButtonMashType.hpp"
float& _Script_SwGame::ButtonMashDurationTime::get_Duration() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::ButtonMashDurationTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.ButtonMashDurationTime");
    return result;
}
