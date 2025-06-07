#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBendingMetalDoorOcillationParameters.hpp"
float& _Script_SwGame::SwBendingMetalDoorOcillationParameters::get_OscillationAmplitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwBendingMetalDoorOcillationParameters::get_OscillationSpeed() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwBendingMetalDoorOcillationParameters::get_OscillationLength() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwBendingMetalDoorOcillationParameters::get_StartOscillationWhenMovementSpeedIsBelow() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBendingMetalDoorOcillationParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwBendingMetalDoorOcillationParameters");
    return result;
}
