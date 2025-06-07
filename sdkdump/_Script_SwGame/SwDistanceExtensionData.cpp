#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwDistanceExtensionData.hpp"
float& _Script_SwGame::SwDistanceExtensionData::get_Scale() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwDistanceExtensionData::get_MinSpeedToConsiderExtending() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwDistanceExtensionData::get_MaxExtension() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDistanceExtensionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwDistanceExtensionData");
    return result;
}
