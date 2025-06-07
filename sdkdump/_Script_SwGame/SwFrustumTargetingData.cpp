#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwFrustumTargetingData.hpp"
float& _Script_SwGame::SwFrustumTargetingData::get_FarWidth() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_SwGame::SwFrustumTargetingData::get_Offset() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwFrustumTargetingData::get_NearWidth() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwFrustumTargetingData::get_NearHeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwFrustumTargetingData::get_FarHeight() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwFrustumTargetingData::get_Length() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwFrustumTargetingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwFrustumTargetingData");
    return result;
}
