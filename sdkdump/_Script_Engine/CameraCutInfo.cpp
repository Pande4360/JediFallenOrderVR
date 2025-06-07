#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraCutInfo.hpp"
void* _Script_Engine::CameraCutInfo::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::CameraCutInfo::get_Timestamp() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::CameraCutInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraCutInfo");
    return result;
}
