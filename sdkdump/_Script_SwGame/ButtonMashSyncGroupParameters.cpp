#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ButtonMashSyncGroupParameters.hpp"
float& _Script_SwGame::ButtonMashSyncGroupParameters::get_ExpirationTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::ButtonMashSyncGroupParameters::get_GracePeriod() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::ButtonMashSyncGroupParameters::get_ButtonMashStartPoint() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::ButtonMashSyncGroupParameters::get_ProgressionAmount() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::ButtonMashSyncGroupParameters::get_DecayAmountPerSecond() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::ButtonMashSyncGroupParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.ButtonMashSyncGroupParameters");
    return result;
}
