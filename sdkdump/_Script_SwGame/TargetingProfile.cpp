#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TargetingProfile.hpp"
float& _Script_SwGame::TargetingProfile::get_SoftTargetMaxDistance() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::TargetingProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.TargetingProfile");
    return result;
}
float& _Script_SwGame::TargetingProfile::get_SoftTargetMaxHalfAngle() {
    return *(float*)((uintptr_t)this + 0x4);
}
